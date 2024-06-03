## Patches

### Changes that aren't in patches

- f42c23430b2cf4253a2aa964fefa150d8a06cc93
  - put LyrTop behind LyrFloat
  - make LyrFS and LyrFloat the same level

### Patches list

# Layouts

- [centeredmaster](https://github.com/wochap/dwl/blob/v0.6-a/centeredmaster/centeredmaster-diff.patch)
- [bottomstack](https://github.com/wochap/dwl/blob/v0.6-a/bottomstack/bottomstack-diff.patch)

# Clients placement

- [center](https://github.com/wochap/dwl/blob/v0.6-a/center/center-diff.patch)
- [cfact](https://github.com/wochap/dwl/blob/v0.6-a/cfact/cfact-diff.patch)
- [cfact-bottomstack](https://github.com/wochap/dwl/blob/v0.6-a/cfact-bottomstack/cfact-bottomstack-diff.patch)

# Clients & tags manipulation

- [movestack](https://github.com/wochap/dwl/blob/v0.5/movestack/movestack-diff.patch)
- [zoomswap](https://codeberg.org/dwl/dwl-patches/src/commit/5368aa392c7ebf8d7d24c232b80cfae1be457d41/zoomswap/zoomswap.patch)
- [rotatetags](https://codeberg.org/dwl/dwl-patches/src/commit/5368aa392c7ebf8d7d24c232b80cfae1be457d41/rotatetags/rotatetags.patch)
- [pertag](https://github.com/wochap/dwl/blob/v0.6-a/pertag/pertag-diff.patch)
- [moveresizekb](https://github.com/wochap/dwl/blob/v0.5/moveresizekb/moveresizekb-diff.patch)
- [shiftview](https://codeberg.org/dwl/dwl-patches/src/commit/5368aa392c7ebf8d7d24c232b80cfae1be457d41/shiftview/shiftview.patch)
- [swapandfocusdir](https://github.com/wochap/dwl/blob/v0.5/swapandfocusdir/swapandfocusdir-diff.patch)
- [scratchpads](https://github.com/wochap/dwl/blob/v0.6-a/scratchpads/scratchpads-diff.patch)

# Rules

- [regexrules](https://github.com/wochap/dwl/blob/v0.6-a/regexrules/regexrules-diff.patch)
- [customfloat](https://github.com/wochap/dwl/blob/v0.6-a/customfloat/customfloat-diff.patch)

# Input

- [keycodes](https://github.com/wochap/dwl/blob/v0.6-a/keycodes/keycodes-diff.patch)
- [naturalscrolltrackpad](https://codeberg.org/dwl/dwl-patches/src/commit/5368aa392c7ebf8d7d24c232b80cfae1be457d41/naturalscrolltrackpad/naturalscrolltrackpad.patch)
- [pointer-gestures-unstable-v1](https://github.com/wochap/dwl/blob/v0.6-a/pointer-gestures-unstable-v1/pointer-gestures-unstable-v1-diff.patch)
- [modes](https://github.com/wochap/dwl/blob/v0.5/modes/modes-diff.patch)
- [modes-keycodes](https://github.com/wochap/dwl/blob/v0.5/modes-keycodes/modes-keycodes-diff.patch)
- [lockedkeys](https://github.com/wochap/dwl/blob/v0.6-a/lockedkeys/lockedkeys-diff.patch)
- [lockedkeys-keycodes](https://github.com/wochap/dwl/blob/v0.5/lockedkeys-keycodes/lockedkeys-keycodes-diff.patch)
- [xkb-rules-switcher](https://github.com/wochap/dwl/blob/v0.6-a/xkb-rules-switcher/xkb-rules-switcher-diff.patch)

# Cursor

- [cursortheme](https://github.com/wochap/dwl/blob/v0.6-a/cursortheme/cursortheme-diff.patch)
- [relative-mouse-resize](https://github.com/wochap/dwl/blob/v0.6-a/relative-mouse-resize/relative-mouse-resize-diff.patch)
- ~~[hide-cursor](https://github.com/wochap/dwl/blob/v0.6-a/hide-cursor/hide-cursor-diff.patch)~~

# Monitor

- [focus-mon-pointer](https://github.com/wochap/dwl/blob/v0.6-a/focus-mon-pointer/focus-mon-pointer-diff.patch)

# Other

- [output-power-management](https://github.com/wochap/dwl/blob/v0.6-a/output-power-management/output-power-management-diff.patch)
- [autostart](https://codeberg.org/dwl/dwl-patches/src/commit/5368aa392c7ebf8d7d24c232b80cfae1be457d41/autostart/autostart.patch)
- [gestures](https://github.com/wochap/dwl/blob/v0.6-a/gestures/gestures-diff.patch)
- [minimalborders](https://github.com/wochap/dwl/blob/v0.6-a/minimalborders/minimalborders-diff.patch)
- [reporting](https://github.com/wochap/dwl/blob/v0.5/reporting/reporting-diff.patch)
- [scenefx](https://github.com/wochap/dwl/blob/v0.6-a/scenefx/scenefx-diff.patch)
- [fakefullscreenclient](https://codeberg.org/dwl/dwl-patches/src/commit/5368aa392c7ebf8d7d24c232b80cfae1be457d41/fakefullscreenclient/fakefullscreenclient.patch)
- [env](https://github.com/wochap/dwl/blob/v0.6-a/env/env-diff.patch)
- ~~[headless](https://github.com/wochap/dwl/blob/v0.5/headless/headless-diff.patch)~~
- [xwayland-handle-minimize](https://codeberg.org/dwl/dwl-patches/src/commit/47258482e2854164b7b1bd01e2a763445b690590/xwayland-handle-minimize/xwayland-handle-minimize.patch)
- [toggle_constraints](https://codeberg.org/dwl/dwl-patches/src/commit/8287f9b148ede54ddc3a339f3f64436582d9f7ef/toggle_constraints/toggle_constraints.patch)

### How to apply them

https://dwm.suckless.org/customisation/patches_in_git/

Order (preferably, from smallest to largest):

- [x] focus-mon-pointer-diff.patch
- [x] naturalscrolltrackpad.patch
- [x] env-diff.patch
- [x] reporting-diff.patch
- [x] zoomswap.patch
- [x] cursortheme-diff.patch
- [x] regexrules-diff.patch
- [x] customfloat-diff.patch
- [x] lockedkeys-diff.patch
- [x] movestack-diff.patch
- [x] moveresizekb-diff.patch
- [x] shiftview.patch
- [x] fakefullscreenclient.patch
- [x] rotatetags.patch
- [x] xkb-rules-switcher-diff.patch
- [x] centeredmaster-diff.patch
- [x] relative-mouse-resize-diff.patch
- [x] ~~headless-diff.patch~~
- [x] center-diff.patch
- [x] bottomstack-diff.patch
- [x] autostart.patch
- [x] cfact-diff.patch
- [x] cfact-bottomstack-diff.patch
- [x] minimalborders-diff.patch
- [x] pointer-gestures-unstable-v1-diff.patch
- [x] modes-diff.patch
- [x] gestures-diff.patch
- [x] pertag-diff.patch
- [x] swapandfocusdir-diff.patch
- [x] scratchpads-diff.patch
- [x] output-power-management-diff.patch
- [x] scenefx-diff.patch
- [x] keycodes-diff.patch
- [x] modes-keycodes-diff.patch
- [x] lockedkeys-keycodes-diff.patch
- [x] ~~hide-cursor-diff.patch~~
- [x] xwayland-handle-minimize.patch
- [x] toggle_constraints.patch

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
