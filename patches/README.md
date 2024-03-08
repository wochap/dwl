## Patches

### Patches list

# Layouts

- [centeredmaster](https://github.com/wochap/dwl/blob/v0.5/centeredmaster/centeredmaster.patch)
- [bottomstack](https://github.com/wochap/dwl/blob/v0.5/bottomstack/bottomstack.patch)

# Clients placement

- [alwayscenter](https://github.com/wochap/dwl/blob/v0.5/alwayscenter/alwayscenter.patch) (keybinding to center floating windows)
- [cfact](https://github.com/wochap/dwl/blob/v0.5/cfact/cfact.patch)
- [cfact-bottomstack](https://github.com/wochap/dwl/blob/v0.5/cfact-bottomstack/cfact-bottomstack.patch)

# Clients & tags manipulation

- [movestack](https://github.com/wochap/dwl/blob/v0.5/movestack/movestack.patch)
- [zoomswap](https://codeberg.org/dwl/dwl-patches/src/branch/main/zoomswap/zoomswap.patch)
- [rotatetags](https://codeberg.org/korei999/dwl-patches/src/branch/main/rotatetags/rotatetags.patch)
- [pertag](https://github.com/wochap/dwl/blob/v0.5/pertag/pertag.patch)
- [movecenter](https://github.com/wochap/dwl/blob/v0.5/movecenter/movecenter.patch)
- [moveresizekb](https://github.com/wochap/dwl/blob/v0.5/moveresizekb/moveresizekb.patch)
- [shiftview](https://codeberg.org/dwl/dwl-patches/src/branch/main/shiftview/shiftview.patch)
- [swapandfocusdir](https://github.com/wochap/dwl/blob/v0.5/swapandfocusdir/swapandfocusdir.patch)

# Rules

- [regexrules](https://github.com/wochap/dwl/blob/v0.5/regexrules/regexrules.patch)
- [customfloat](https://github.com/wochap/dwl/blob/v0.5/customfloat/customfloat.patch) 
- [namedscratchpads](https://github.com/wochap/dwl/blob/v0.5/namedscratchpads/namedscratchpads.patch) (keybinding for run or raise)

# Input

- [keycodes](https://github.com/wochap/dwl/blob/v0.5/keycodes/keycodes.patch)
- [naturalscrolltrackpad](https://github.com/wochap/dwl/blob/v0.5/naturalscrolltrackpad/naturalscrolltrackpad.patch)
- [pointer-gestures-unstable-v1](https://github.com/wochap/dwl/blob/v0.5/pointer-gestures-unstable-v1/pointer-gestures-unstable-v1.patch)
- [modes](https://github.com/wochap/dwl/blob/v0.5/modes/modes.patch)
- [modes-keycodes](https://github.com/wochap/dwl/blob/v0.5/modes-keycodes/modes-keycodes.patch)
- [togglekblayout](https://github.com/wochap/dwl/blob/v0.5/togglekblayout/togglekblayout.patch)
- [lockedkeys](https://github.com/wochap/dwl/blob/v0.5/lockedkeys/lockedkeys.patch)
- [lockedkeys-keycodes](https://github.com/wochap/dwl/blob/v0.5/lockedkeys-keycodes/lockedkeys-keycodes.patch)

# Cursor

- [cursortheme](https://github.com/wochap/dwl/blob/v0.5/cursortheme/cursortheme.patch)
- [relative-mouse-resize](https://github.com/wochap/dwl/blob/v0.5/relative-mouse-resize/relative-mouse-resize.patch)

# Other

- [output-power-management](https://github.com/wochap/dwl/blob/v0.5/output-power-management/output-power-management.patch)
- [autostart](https://codeberg.org/dwl/dwl-patches/src/branch/main/autostart/autostart.patch)
- [gestures](https://github.com/wochap/dwl/blob/v0.5/gestures/gestures.patch)
- [minimalborders](https://github.com/wochap/dwl/blob/v0.5/minimalborders/minimalborders.patch)
- [borders](https://github.com/wochap/dwl/blob/v0.5/borders/borders.patch)

### How to apply them

https://dwm.suckless.org/customisation/patches_in_git/

Order (preferably, from smallest to largest):

- [x] naturalscrolltrackpad.patch
- [x] cursortheme.patch
- [x] zoomswap.patch
- [x] alwayscenter.patch
- [x] regexrules.patch
- [x] customfloat.patch
- [x] movecenter.patch
- [x] lockedkeys.patch
- [x] movestack.patch
- [x] moveresizekb.patch
- [x] togglekblayout.patch
- [x] shiftview.patch
- [x] rotatetags.patch
- [x] centeredmaster.patch
- [x] relative-mouse-resize.patch
- [x] bottomstack.patch
- [x] autostart.patch
- [x] cfact.patch
- [x] cfact-bottomstack.patch
- [x] minimalborders.patch
- [x] pointer-gestures-unstable-v1.patch
- [x] modes.patch
- [x] gestures.patch
- [x] namedscratchpads.patch
- [x] pertag.patch
- [x] swapandfocusdir.patch
- [x] borders.patch
- [x] output-power-management.patch
- [x] keycodes.patch
- [x] modes-keycodes.patch
- [x] lockedkeys-keycodes.patch

Workflow

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
