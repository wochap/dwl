{
  description = "A basic flake with a shell";
  inputs.nixpkgs.url =
    "github:NixOS/nixpkgs?rev=926db2b1447012a91bf77aa5395562ade27ac901";
  inputs.flake-utils.url = "github:numtide/flake-utils";

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let pkgs = nixpkgs.legacyPackages.${system};
      in {
        devShells.default = pkgs.mkShell {
          packages = with pkgs; [
            installShellFiles
            pkg-config
            wayland-scanner

            bashInteractive

            libinput
            xorg.libxcb
            libxkbcommon
            pixman
            wayland
            wayland-protocols

            (wlroots_0_16.overrideAttrs (_: {
              src = fetchFromGitLab {
                domain = "gitlab.freedesktop.org";
                owner = "wlroots";
                repo = "wlroots";
                rev = "2926acf60d80961597fa55ab68c3d15d7bf1980d";
                hash = "sha256-Kkgx6KyJFtQEE4X+bgXlXAaSPnR9dWXGyw9ovf7wUlw=";
              };
              buildInputs = _.buildInputs ++ [ pkgs.hwdata pkgs.libdisplay-info ];
            }))

            xorg.libX11
            xorg.xcbutilwm
            xwayland
          ];

          WAYLAND_SCANNER = "wayland-scanner";
        };
      });
}
