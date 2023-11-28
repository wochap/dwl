## Patches

### Patches list

https://github.com/djpohly/dwl/wiki/Patches

# Layouts
* https://github.com/djpohly/dwl/compare/main...NikitaIvanovV:centeredmaster.patch
* https://github.com/djpohly/dwl/compare/main...dimkr:dwl:snail.patch
* https://github.com/djpohly/dwl/compare/main...dm1tz:04-cyclelayouts.patch
* https://github.com/djpohly/dwl/compare/main...wochap:moveresizekb.patch
* https://github.com/djpohly/dwl/compare/main...wochap:movecenter.patch
* https://github.com/djpohly/dwl/compare/main...Abanoub8:bottomstack.patch

# Clients placement
* https://github.com/djpohly/dwl/compare/main...wochap:alwayscenter.patch

# Clients & tags manipulation
* https://github.com/djpohly/dwl/compare/main...wochap:shiftview.patch
* https://github.com/djpohly/dwl/compare/main...Abanoub8:movestack.patch
* https://github.com/djpohly/dwl/compare/main...PalanixYT:zoomswap.patch
* https://github.com/djpohly/dwl/compare/main...mortezadadgar:pertag.patch
* https://github.com/djpohly/dwl/compare/main...korei999:rotatetags.patch
* https://github.com/djpohly/dwl/compare/main...PalanixYT:cfact.patch
* https://github.com/djpohly/dwl/compare/main...wochap:swapandfocusdir.patch

# Rules
* https://github.com/djpohly/dwl/compare/main...wochap:regexrules.patch
* https://github.com/djpohly/dwl/compare/main...wochap:customfloat.patch
* https://github.com/djpohly/dwl/compare/main...wochap:namedscratchpads.patch

# Input
* https://github.com/djpohly/dwl/compare/main...youbitchoc:virtualpointer.patch
* https://github.com/djpohly/dwl/compare/main...sevz17:keycodes.patch
* https://github.com/djpohly/dwl/compare/main...NikitaIvanovV:naturalscrolltrackpad.patch
* https://github.com/djpohly/dwl/compare/main...wochap:pointer-gestures-unstable-v1.patch
* https://github.com/djpohly/dwl/compare/main...wochap:modes.patch
* https://github.com/djpohly/dwl/compare/main...wochap:toggleKbLayout.patch
* https://github.com/djpohly/dwl/compare/main...wochap:lockedkeys.patch

# Cursor
* https://github.com/djpohly/dwl/compare/main...dm1tz:04-cursortheme.patch
* https://github.com/djpohly/dwl/compare/main...schance995:dwl:relative-mouse-resize.patch

# Other
* https://github.com/djpohly/dwl/compare/main...guidocella:output-power-management.patch
* https://github.com/djpohly/dwl/compare/main...sevz17:autostart.patch
* https://github.com/wochap/dwl/compare/pointer-gestures-unstable-v1...wochap:gestures.patch
* https://github.com/djpohly/dwl/compare/main...wochap:genericgaps.patch

### How to apply them

https://dwm.suckless.org/customisation/patches_in_git/

Order (smallest to largest):

* [x] main...NikitaIvanovV:naturalscrolltrackpad.patch
* [x] main...PalanixYT:zoomswap.patch
* [x] main...dm1tz:04-cursortheme.patch
* [x] main...wochap:regexrules.patch
* [x] main...wochap:shiftview.patch
* [x] main...wochap:movecenter.patch
* [x] main...dm1tz:04-cyclelayouts.patch
* [x] main...wochap:customfloat.patch
* [x] main...Abanoub8:movestack.patch
* [x] main...wochap:moveresizekb.patch
* [x] main...wochap:alwayscenter.patch
* [x] main...NikitaIvanovV:centeredmaster.patch
* [x] main...youbitchoc:virtualpointer.patch
* [x] main...mortezadadgar:pertag.patch
* [x] main...wochap:namedscratchpads.patch
* [x] main...wochap:modes.patch
* [x] main...dimkr:dwl:snail.patch
* [x] main...sevz17:autostart.patch
* [x] main...guidocella:output-power-management.patch
* [x] main...sevz17:keycodes.patch
* [x] main...wochap:pointer-gestures-unstable-v1.patch
* [x] pointer-gestures-unstable-v1...wochap:gestures.patch
* [x] main...Abanoub8:bottomstack.patch
* [x] main...korei999:rotatetags.patch
* [x] main...schance995:dwl:relative-mouse-resize.patch
* [x] main...wochap:toggleKbLayout.patch
* [x] main...wochap:lockedkeys
* [x] main...wochap:genericgaps 
* [x] main...PalanixYT:cfact.patch
* [x] main...wochap:swapandfocusdir.patch

Workflow

```
# generate a patch
$ git format-patch --no-signature --stdout <main_branch>..<patch_branch> > <patch_name>.patch
# or use github url: https://github.com/wochap/dwl/compare/main...wochap:shiftview.patch

$ git checkout <main_branch>
$ git checkout -b patches/<patch_name>

# use one of the following commands
$ patch -p1 --no-backup-if-mismatch < ./patches/<patch_file_name>
# or
# $ git apply ./patches/<patch_file_name>
# to reverse patch
$ patch -p1 --no-backup-if-mismatch -R < ./patches/<patch_file_name>

# test build
$ make -B

$ git commit -m "apply <patch_name>"
$ git checkout <main_branch>
$ git merge patches/<patch_name>
```
