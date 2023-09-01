{
  description = "A basic flake with a shell";
  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
  inputs.flake-utils.url = "github:numtide/flake-utils";

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
        wlroots = pkgs.wlroots_0_16;
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
            wlroots

            xorg.libX11
            xorg.xcbutilwm
            xwayland
          ];

          WAYLAND_SCANNER = "wayland-scanner";
        };
      });
}
