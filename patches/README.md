## Patches

### Changes that aren't in patches

- 3a997d0336f122898ac8c28b60433c7cbbe14d02
  Center floating windows that were recently moved to another monitor.

- 9d83ddc 
  put LyrTop behind LyrFloat and LyrFS

- a66bbdd
  make lyrsfs and lyrfloat the same level

### Patches list

# Layouts

- [centeredmaster](https://github.com/wochap/dwl/blob/v0.5/centeredmaster/centeredmaster-diff.patch)
- [bottomstack](https://github.com/wochap/dwl/blob/v0.5/bottomstack/bottomstack-diff.patch)

# Clients placement

- [center](https://github.com/wochap/dwl/blob/v0.6-a/center/center-diff.patch)
- [cfact](https://github.com/wochap/dwl/blob/v0.5/cfact/cfact-diff.patch)
- [cfact-bottomstack](https://github.com/wochap/dwl/blob/v0.5/cfact-bottomstack/cfact-bottomstack-diff.patch)

# Clients & tags manipulation

- [movestack](https://github.com/wochap/dwl/blob/v0.5/movestack/movestack-diff.patch)
- [zoomswap](https://codeberg.org/dwl/dwl-patches/src/branch/main/zoomswap/zoomswap.patch)
- [rotatetags](https://codeberg.org/korei999/dwl-patches/src/branch/main/rotatetags/rotatetags.patch)
- [pertag](https://github.com/wochap/dwl/blob/v0.5/pertag/pertag-diff.patch)
- [moveresizekb](https://github.com/wochap/dwl/blob/v0.5/moveresizekb/moveresizekb-diff.patch)
- [shiftview](https://codeberg.org/dwl/dwl-patches/src/branch/main/shiftview/shiftview.patch)
- [swapandfocusdir](https://github.com/wochap/dwl/blob/v0.5/swapandfocusdir/swapandfocusdir-diff.patch)
- [scratchpads](https://github.com/wochap/dwl/blob/v0.6-a/scratchpads/scratchpads-diff.patch) 

# Rules

- [regexrules](https://github.com/wochap/dwl/blob/v0.5/regexrules/regexrules-diff.patch)
- [customfloat](https://github.com/wochap/dwl/blob/v0.5/customfloat/customfloat-diff.patch)

# Input

- [keycodes](https://github.com/wochap/dwl/blob/v0.5/keycodes/keycodes-diff.patch)
- [naturalscrolltrackpad](https://github.com/wochap/dwl/blob/v0.5/naturalscrolltrackpad/naturalscrolltrackpad-diff.patch)
- [pointer-gestures-unstable-v1](https://github.com/wochap/dwl/blob/v0.5/pointer-gestures-unstable-v1/pointer-gestures-unstable-v1-diff.patch)
- [modes](https://github.com/wochap/dwl/blob/v0.5/modes/modes-diff.patch)
- [modes-keycodes](https://github.com/wochap/dwl/blob/v0.5/modes-keycodes/modes-keycodes-diff.patch)
- [lockedkeys](https://github.com/wochap/dwl/blob/v0.5/lockedkeys/lockedkeys-diff.patch)
- [lockedkeys-keycodes](https://github.com/wochap/dwl/blob/v0.5/lockedkeys-keycodes/lockedkeys-keycodes-diff.patch)
- [xkb-rules-switcher](https://github.com/wochap/dwl/blob/v0.5/xkb-rules-switcher/xkb-rules-switcher-diff.patch)
- [virtual-pointer](https://github.com/wochap/dwl/blob/v0.5/virtual-pointer/virtual-pointer-diff.patch)

# Cursor

- [cursortheme](https://github.com/wochap/dwl/blob/v0.5/cursortheme/cursortheme-diff.patch)
- [relative-mouse-resize](https://github.com/wochap/dwl/blob/v0.5/relative-mouse-resize/relative-mouse-resize-diff.patch)

# Monitor

- [focus-mon-pointer](https://github.com/wochap/dwl/blob/v0.5/focus-mon-pointer/focus-mon-pointer-diff.patch)

# Other

- [output-power-management](https://github.com/wochap/dwl/blob/v0.5/output-power-management/output-power-management-diff.patch)
- [autostart](https://codeberg.org/dwl/dwl-patches/src/branch/main/autostart/autostart.patch)
- [gestures](https://github.com/wochap/dwl/blob/v0.5/gestures/gestures-diff.patch)
- [minimalborders](https://github.com/wochap/dwl/blob/v0.5/minimalborders/minimalborders-diff.patch)
- [reporting](https://github.com/wochap/dwl/blob/v0.5/reporting/reporting-diff.patch)
- [scenefx](https://github.com/wochap/dwl/blob/v0.5/scenefx/scenefx-diff.patch)
- [fakefullscreenclient](https://codeberg.org/dwl/dwl-patches/raw/branch/main/fakefullscreenclient/fakefullscreenclient.patch)
- [env](https://github.com/wochap/dwl/blob/v0.5/env/env-diff.patch)
- [headless](https://github.com/wochap/dwl/blob/v0.5/headless/headless-diff.patch)

### How to apply them

https://dwm.suckless.org/customisation/patches_in_git/

Order (preferably, from smallest to largest):

- [x] focus-mon-pointer-diff.patch
- [x] naturalscrolltrackpad-diff.patch
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
- [x] headless-diff.patch
- [x] center-diff.patch
- [x] bottomstack-diff.patch
- [x] autostart.patch
- [x] cfact-diff.patch
- [x] cfact-bottomstack-diff.patch
- [x] virtual-pointer-diff.patch
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
