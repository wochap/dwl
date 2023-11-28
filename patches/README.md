## Patches

### Patches list

https://github.com/djpohly/dwl/wiki/Patches

# Layouts
* https://github.com/wochap/dwl/compare/main-codeberg...NikitaIvanovV:centeredmaster.patch
* https://github.com/wochap/dwl/compare/main-codeberg...dimkr:dwl:snail.patch
* https://github.com/wochap/dwl/compare/main-codeberg...dm1tz:04-cyclelayouts.patch
* https://github.com/wochap/dwl/compare/main-codeberg...wochap:moveresizekb.patch
* https://github.com/wochap/dwl/compare/main-codeberg...wochap:movecenter.patch
* https://github.com/wochap/dwl/compare/main-codeberg...Abanoub8:bottomstack.patch

# Clients placement
* https://github.com/wochap/dwl/compare/main-codeberg...wochap:alwayscenter.patch

# Clients & tags manipulation
* https://github.com/wochap/dwl/compare/main-codeberg...wochap:shiftview.patch
* https://github.com/wochap/dwl/compare/main-codeberg...Abanoub8:movestack.patch
* https://github.com/wochap/dwl/compare/main-codeberg...PalanixYT:zoomswap.patch
* https://github.com/wochap/dwl/compare/main-codeberg...mortezadadgar:pertag.patch
* https://github.com/wochap/dwl/compare/main-codeberg...korei999:rotatetags.patch
* https://github.com/wochap/dwl/compare/main-codeberg...PalanixYT:cfact.patch
* https://github.com/wochap/dwl/compare/main-codeberg...wochap:swapandfocusdir.patch

# Rules
* https://github.com/wochap/dwl/compare/main-codeberg...wochap:regexrules.patch
* https://github.com/wochap/dwl/compare/main-codeberg...wochap:customfloat.patch
* https://github.com/wochap/dwl/compare/main-codeberg...wochap:namedscratchpads.patch

# Input
* https://github.com/wochap/dwl/compare/main-codeberg...youbitchoc:virtualpointer.patch
* https://github.com/wochap/dwl/compare/main-codeberg...sevz17:keycodes.patch
* https://github.com/wochap/dwl/compare/main-codeberg...NikitaIvanovV:naturalscrolltrackpad.patch
* https://github.com/wochap/dwl/compare/main-codeberg...wochap:pointer-gestures-unstable-v1.patch
* https://github.com/wochap/dwl/compare/main-codeberg...wochap:modes.patch
* https://github.com/wochap/dwl/compare/main-codeberg...wochap:toggleKbLayout.patch
* https://github.com/wochap/dwl/compare/main-codeberg...wochap:lockedkeys.patch

# Cursor
* https://github.com/wochap/dwl/compare/main-codeberg...dm1tz:04-cursortheme.patch
* https://github.com/wochap/dwl/compare/main-codeberg...schance995:dwl:relative-mouse-resize.patch

# Other
* https://github.com/wochap/dwl/compare/main-codeberg...guidocella:output-power-management.patch
* https://github.com/wochap/dwl/compare/main-codeberg...sevz17:autostart.patch
* https://github.com/wochap/dwl/compare/pointer-gestures-unstable-v1...wochap:gestures.patch
* https://github.com/wochap/dwl/compare/main-codeberg...wochap:genericgaps.patch

### How to apply them

https://dwm.suckless.org/customisation/patches_in_git/

Order (smallest to largest):

* [x] main-codeberg...NikitaIvanovV:naturalscrolltrackpad.patch
* [x] main-codeberg...dm1tz:04-cursortheme.patch
* [x] main-codeberg...guidocella:shiftview.patch
* [x] main-codeberg...wochap:movecenter.patch
* [x] main-codeberg...dm1tz:04-cyclelayouts.patch
* [x] main-codeberg...wochap:customfloat.patch
* [x] main-codeberg...Abanoub8:movestack.patch
* [x] main-codeberg...wochap:moveresizekb.patch
* [x] main-codeberg...wochap:alwayscenter.patch
* [x] main-codeberg...wochap:regexrules.patch
* [x] main-codeberg...PalanixYT:zoomswap.patch
* [x] main-codeberg...wochap:toggleKbLayout.patch
* [ ] main-codeberg...schance995:dwl:relative-mouse-resize.patch
* [x] main-codeberg...sevz17:autostart.patch
* [x] main-codeberg...Abanoub8:bottomstack.patch
* [x] main-codeberg...NikitaIvanovV:centeredmaster.patch
* [ ] main-codeberg...youbitchoc:virtualpointer.patch
* [x] main-codeberg...mortezadadgar:pertag.patch
* [x] main-codeberg...wochap:namedscratchpads.patch
* [x] main-codeberg...wochap:modes.patch
* [x] main-codeberg...wochap:pointer-gestures-unstable-v1.patch
* [x] pointer-gestures-unstable-v1...wochap:gestures.patch
* [x] main-codeberg...PalanixYT:cfact.patch
* [x] main-codeberg...wochap:swapandfocusdir.patch
* [x] main-codeberg...korei999:rotatetags.patch
* [x] main-codeberg...wochap:genericgaps.patch
* [ ] main-codeberg...guidocella:output-power-management.patch
* [ ] main-codeberg...dimkr:dwl:snail.patch
* [x] main-codeberg...sevz17:keycodes.patch
* [ ] main-codeberg...wochap:lockedkeys.patch

Workflow

```
# generate a patch
$ git format-patch --no-signature --stdout <main_branch>..<patch_branch> > <patch_name>.patch
# or use github url: https://github.com/wochap/dwl/compare/main-codeberg...wochap:shiftview.patch

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
