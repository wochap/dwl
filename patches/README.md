## Patches

### Changes that aren't in patches

- b70328c93c29eb50f2f55116472cb201ff64a874
  - put LyrTop behind LyrFloat
  - make LyrFS and LyrFloat the same level

### Patches list

# Layouts

- [bottomstack](https://github.com/wochap/dwl/blob/v0.6-b/bottomstack/bottomstack-diff.patch)

# Clients placement

- [cfact](https://github.com/wochap/dwl/blob/v0.6-b/cfact/cfact-diff.patch)
- [cfact-bottomstack](https://github.com/wochap/dwl/blob/v0.6-b/cfact-bottomstack/cfact-bottomstack-diff.patch)

# Clients & tags manipulation

- [movestack](https://github.com/wochap/dwl/blob/v0.5/movestack/movestack-diff.patch)
- [zoomswap](https://github.com/wochap/dwl/blob/v0.6-b/zoomswap/zoomswap-diff.patch)
- [rotatetags](https://codeberg.org/dwl/dwl-patches/src/commit/6a71cf9806d9626501885591b9cd1cda0ec57523/patches/rotatetags/rotatetags.patch)
- [pertag](https://github.com/wochap/dwl/blob/v0.6-a/pertag/pertag-diff.patch)
- [moveresizekb](https://github.com/wochap/dwl/blob/v0.5/moveresizekb/moveresizekb-diff.patch)
- [shiftview](https://codeberg.org/dwl/dwl-patches/src/commit/6a71cf9806d9626501885591b9cd1cda0ec57523/patches/shiftview/shiftview.patch)
- [swapandfocusdir](https://github.com/wochap/dwl/blob/v0.6-b/swapandfocusdir/swapandfocusdir-diff.patch)
- [scratchpads](https://github.com/wochap/dwl/blob/v0.6-a/scratchpads/scratchpads-diff.patch)
- [dwl-sloppyfocus](https://github.com/wochap/dwl/blob/v0.6-b/dwl-sloppyfocus/dwl-sloppyfocus-diff.patch)

# Rules

- [regexrules](https://github.com/wochap/dwl/blob/v0.6-a/regexrules/regexrules-diff.patch)

# Input

- [keycodes](https://github.com/wochap/dwl/blob/v0.6-a/keycodes/keycodes-diff.patch)
- [naturalscrolltrackpad](https://codeberg.org/dwl/dwl-patches/src/commit/6a71cf9806d9626501885591b9cd1cda0ec57523/patches/naturalscrolltrackpad/naturalscrolltrackpad.patch)
- [pointer-gestures-unstable-v1](https://github.com/wochap/dwl/blob/v0.6-b/pointer-gestures-unstable-v1/pointer-gestures-unstable-v1-diff.patch)
- [modes](https://github.com/wochap/dwl/blob/v0.5/modes/modes-diff.patch)
- [modes-keycodes](https://github.com/wochap/dwl/blob/v0.5/modes-keycodes/modes-keycodes-diff.patch)
- [lockedkeys](https://github.com/wochap/dwl/blob/v0.6-a/lockedkeys/lockedkeys-diff.patch)
- [lockedkeys-keycodes](https://github.com/wochap/dwl/blob/v0.5/lockedkeys-keycodes/lockedkeys-keycodes-diff.patch)
- [xkb-rules-switcher](https://github.com/wochap/dwl/blob/v0.6-b/xkb-rules-switcher/xkb-rules-switcher-diff.patch)

# Cursor

- [cursortheme](https://github.com/wochap/dwl/blob/v0.6-b/cursortheme/cursortheme-diff.patch)
- [relative-mouse-resize](https://github.com/wochap/dwl/blob/v0.6-b/relative-mouse-resize/relative-mouse-resize-diff.patch)

# Monitor

- [focus-mon-pointer](https://github.com/wochap/dwl/blob/v0.6-a/focus-mon-pointer/focus-mon-pointer-diff.patch)

# Other

- [autostart](https://github.com/wochap/dwl/blob/v0.6-b/autostart/autostart-diff.patch)
- [gestures](https://github.com/wochap/dwl/blob/v0.6-b/gestures/gestures-diff.patch)
- [minimalborders](https://github.com/wochap/dwl/blob/v0.6-b/minimalborders/minimalborders-diff.patch)
- [reporting](https://github.com/wochap/dwl/blob/v0.5/reporting/reporting-diff.patch)
- [scenefx](https://github.com/wochap/dwl/blob/v0.6-b/scenefx/scenefx-diff.patch)
- [fakefullscreenclient](https://codeberg.org/dwl/dwl-patches/src/commit/6a71cf9806d9626501885591b9cd1cda0ec57523/patches/fakefullscreenclient/fakefullscreenclient.patch)
- [env](https://github.com/wochap/dwl/blob/v0.6-b/env/env-diff.patch)
- [headless](https://github.com/wochap/dwl/blob/v0.5/headless/headless-diff.patch)
- [xwayland-handle-minimize](https://codeberg.org/dwl/dwl-patches/src/commit/6a71cf9806d9626501885591b9cd1cda0ec57523/patches/xwayland-handle-minimize/xwayland-handle-minimize.patch)
- [rlimit_max](https://codeberg.org/dwl/dwl-patches/src/commit/6a71cf9806d9626501885591b9cd1cda0ec57523/patches/rlimit_max/rlimit_max.patch)
- [borders](https://github.com/wochap/dwl/blob/v0.6-a/borders/borders-diff.patch)

### How to apply them

https://dwm.suckless.org/customisation/patches_in_git/

Order (preferably, from smallest to largest):

```
$ ls -lS | awk '{print $4, $5, $12}' | sort -n
```

- [X] focus-mon-pointer-diff.patch
- [X] naturalscrolltrackpad.patch
- [X] reporting-diff.patch
- [X] zoomswap-diff.patch
- [X] env-diff.patch
- [X] cursortheme-diff.patch
- [X] regexrules-diff.patch
- [X] lockedkeys-diff.patch
- [X] movestack-diff.patch
- [X] moveresizekb-diff.patch
- [X] rlimit_max.patch
- [X] shiftview.patch
- [X] fakefullscreenclient.patch
- [X] rotatetags.patch
- [X] xkb-rules-switcher-diff.patch
- [X] xwayland-handle-minimize.patch
- [X] autostart-diff.patch
- [X] headless-diff.patch
- [X] relative-mouse-resize-diff.patch
- [X] bottomstack-diff.patch
- [X] cfact-diff.patch
- [X] cfact-bottomstack-diff.patch
- [X] pointer-gestures-unstable-v1-diff.patch
- [X] minimalborders-diff.patch
- [X] modes-diff.patch
- [X] gestures-diff.patch
- [X] pertag-diff.patch
- [X] swapandfocusdir-diff.patch
- [X] borders-diff.patch
- [X] scratchpads-diff.patch
- [X] scenefx-diff.patch
- [X] keycodes-diff.patch
- [X] modes-keycodes-diff.patch
- [X] lockedkeys-keycodes-diff.patch
- [X] dwl-sloppyfocus-diff.patch
- [ ] ~~hide-cursor-diff.patch~~

### Workflow

```
# generate compile_commands.json for LSP
$ make clean; bear -- make

# generate a patch
$ git format-patch --no-signature --stdout <main_branch>..<patch_branch> > <patch_name>.patch -- ':!*.patch'
# or use github url: https://github.com/wochap/dwl/compare/main-codeberg...wochap:shiftview.patch
# or
# $ git diff --patch <main_branch>..<patch_branch> > <patch_name>.patch -- ':!*.patch'

$ git checkout <main_branch>
$ git checkout -b patches/<patch_name>

# use one of the following commands
$ patch -p1 --no-backup-if-mismatch < ./patches/<patch_file_name>
# or
# $ git apply ./patches/<patch_file_name>
# or to keep git commit messages
# $ git am -k < ./patches/<patch_file_name>
# to reverse patch
$ patch -p1 --no-backup-if-mismatch -R < ./patches/<patch_file_name>

# test build
$ make -B

$ git commit -m "apply <patch_name>"
$ git checkout <main_branch>
$ git merge patches/<patch_name>
```
