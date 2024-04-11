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
- [cfact](https://github.com/wochap/dwl/blob/v0.6-a/cfact/cfact-diff.patch)
- [cfact-bottomstack](https://github.com/wochap/dwl/blob/v0.5/cfact-bottomstack/cfact-bottomstack-diff.patch)

# Clients & tags manipulation

- [movestack](https://github.com/wochap/dwl/blob/v0.5/movestack/movestack-diff.patch)
- [zoomswap](https://codeberg.org/dwl/dwl-patches/src/commit/5368aa392c7ebf8d7d24c232b80cfae1be457d41/zoomswap/zoomswap.patch)
- [rotatetags](https://codeberg.org/dwl/dwl-patches/src/commit/5368aa392c7ebf8d7d24c232b80cfae1be457d41/rotatetags/rotatetags.patch)
- [pertag](https://github.com/wochap/dwl/blob/v0.5/pertag/pertag-diff.patch)
- [moveresizekb](https://github.com/wochap/dwl/blob/v0.5/moveresizekb/moveresizekb-diff.patch)
- [shiftview](https://codeberg.org/dwl/dwl-patches/src/commit/5368aa392c7ebf8d7d24c232b80cfae1be457d41/shiftview/shiftview.patch)
- [swapandfocusdir](https://github.com/wochap/dwl/blob/v0.5/swapandfocusdir/swapandfocusdir-diff.patch)
- [scratchpads](https://github.com/wochap/dwl/blob/v0.6-a/scratchpads/scratchpads-diff.patch) 

# Rules

- [regexrules](https://github.com/wochap/dwl/blob/v0.6-a/regexrules/regexrules-diff.patch)
- [customfloat](https://github.com/wochap/dwl/blob/v0.6-a/customfloat/customfloat-diff.patch)

# Input

- [keycodes](https://github.com/wochap/dwl/blob/v0.5/keycodes/keycodes-diff.patch)
- [naturalscrolltrackpad](https://codeberg.org/dwl/dwl-patches/src/commit/5368aa392c7ebf8d7d24c232b80cfae1be457d41/naturalscrolltrackpad/naturalscrolltrackpad.patch)
- [pointer-gestures-unstable-v1](https://github.com/wochap/dwl/blob/v0.6-a/pointer-gestures-unstable-v1/pointer-gestures-unstable-v1-diff.patch)
- [modes](https://github.com/wochap/dwl/blob/v0.5/modes/modes-diff.patch)
- [modes-keycodes](https://github.com/wochap/dwl/blob/v0.5/modes-keycodes/modes-keycodes-diff.patch)
- [lockedkeys](https://github.com/wochap/dwl/blob/v0.6-a/lockedkeys/lockedkeys-diff.patch)
- [lockedkeys-keycodes](https://github.com/wochap/dwl/blob/v0.5/lockedkeys-keycodes/lockedkeys-keycodes-diff.patch)
- [xkb-rules-switcher](https://github.com/wochap/dwl/blob/v0.6-a/xkb-rules-switcher/xkb-rules-switcher-diff.patch)

# Cursor

- [cursortheme](https://github.com/wochap/dwl/blob/v0.6-a/cursortheme/cursortheme-diff.patch)
- [relative-mouse-resize](https://github.com/wochap/dwl/blob/v0.5/relative-mouse-resize/relative-mouse-resize-diff.patch)

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
- [env](https://github.com/wochap/dwl/blob/v0.5/env/env-diff.patch)
- [headless](https://github.com/wochap/dwl/blob/v0.5/headless/headless-diff.patch)

### How to apply them

https://dwm.suckless.org/customisation/patches_in_git/

Order (preferably, from smallest to largest):

- [ ] focus-mon-pointer-diff.patch
- [ ] naturalscrolltrackpad-diff.patch
- [ ] env-diff.patch
- [ ] reporting-diff.patch
- [ ] zoomswap.patch
- [ ] cursortheme-diff.patch 
- [ ] regexrules-diff.patch 
- [ ] customfloat-diff.patch 
- [ ] lockedkeys-diff.patch
- [ ] movestack-diff.patch
- [ ] moveresizekb-diff.patch
- [ ] shiftview.patch
- [ ] fakefullscreenclient.patch
- [ ] rotatetags.patch
- [ ] xkb-rules-switcher-diff.patch
- [ ] centeredmaster-diff.patch
- [ ] relative-mouse-resize-diff.patch
- [ ] headless-diff.patch
- [ ] center-diff.patch
- [ ] bottomstack-diff.patch
- [ ] autostart.patch
- [ ] cfact-diff.patch
- [ ] cfact-bottomstack-diff.patch
- [ ] minimalborders-diff.patch
- [ ] pointer-gestures-unstable-v1-diff.patch
- [ ] modes-diff.patch
- [ ] gestures-diff.patch
- [ ] pertag-diff.patch
- [ ] swapandfocusdir-diff.patch
- [ ] scratchpads-diff.patch
- [ ] output-power-management-diff.patch
- [ ] scenefx-diff.patch
- [ ] keycodes-diff.patch
- [ ] modes-keycodes-diff.patch
- [ ] lockedkeys-keycodes-diff.patch

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
