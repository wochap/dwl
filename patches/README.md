## Patches

### Patches list

https://github.com/djpohly/dwl/wiki/Patches

# Layouts
* https://github.com/djpohly/dwl/compare/main...NikitaIvanovV:centeredmaster.patch
* https://github.com/djpohly/dwl/compare/main...Abanoub8:gridmode.patch
* https://github.com/djpohly/dwl/compare/main...dimkr:dwl:snail.patch
* https://github.com/djpohly/dwl/compare/main...Abanoub8:fibonacci.patch
* https://github.com/djpohly/dwl/compare/main...bencollerson:dwl:72fde16.patch (columns layout)
* https://github.com/djpohly/dwl/compare/main...dm1tz:04-cyclelayouts.patch

# Clients & tags manipulation
* https://github.com/djpohly/dwl/compare/main...guidocella:shiftview.patch
* https://github.com/djpohly/dwl/compare/main...Abanoub8:movestack.patch
* https://github.com/djpohly/dwl/compare/main...PalanixYT:zoomswap.patch
* https://github.com/djpohly/dwl/compare/main...mortezadadgar:pertag.patch

# Rules
* https://github.com/djpohly/dwl/compare/main...Stivvo:customFloat.patch
* https://github.com/djpohly/dwl/compare/main...loumray:namedscratchpads.patch
* https://github.com/djpohly/dwl/compare/main...mewkl:swallowx.patch

# Input
* https://github.com/djpohly/dwl/compare/main...sevz17:keycodes.patch
* https://github.com/djpohly/dwl/compare/main...NikitaIvanovV:naturalscrolltrackpad.patch
* https://github.com/djpohly/dwl/compare/main...yveszoundi:dwl-customization:keychord-2023-03-12.patch

# Cursor
* https://github.com/djpohly/dwl/compare/main...dm1tz:04-cursortheme.patch
* ~~https://github.com/djpohly/dwl/compare/main...PalanixYT:type_hide.patch~~ (doesn't work in wlroots-next)

# Other
* https://github.com/djpohly/dwl/compare/main...sevz17:autostart.patch
* ~~https://github.com/djpohly/dwl/compare/main...Stivvo:hide-behind-fullscreen.patch~~ (too many conflicts)
* ~~https://github.com/djpohly/dwl/compare/main...madcowog:ipc-v2.patch~~ (doesn't work in wlroots-next)
* https://github.com/djpohly/dwl/compare/main...NikitaIvanovV:genericgaps.patch

### How to apply them

https://dwm.suckless.org/customisation/patches_in_git/

Order (smallest to largest):

* [x] main...NikitaIvanovV:naturalscrolltrackpad.patch
* [ ] main...PalanixYT:zoomswap.patch
* [x] main...dm1tz:04-cursortheme.patch
* [x] main...bencollerson:dwl:72fde16.patch
* [x] main...guidocella:shiftview.patch
* [x] main...dm1tz:04-cyclelayouts.patch
* [x] main...Abanoub8:movestack.patch
* [x] main...Abanoub8:fibonacci.patch
* [x] main...Abanoub8:gridmode.patch
* [ ] ~~main...PalanixYT:type_hide.patch~~
* [x] main...Stivvo:customFloat.patch
* [x] main...NikitaIvanovV:centeredmaster.patch
* [ ] main...mortezadadgar:pertag.patch
* [x] main...loumray:namedscratchpads.patch
* [X] main...mewkl:swallowx.patch
* [x] main...dimkr:dwl:snail.patch
* [x] main...NikitaIvanovV:genericgaps.patch
* [x] main...sevz17:autostart.patch
* [ ] ~~main...madcowog:ipc-v2.patch~~
* [ ] ~~main...Stivvo:hide-behind-fullscreen.patch~~
* [x] main...yveszoundi:dwl-customization:keychord-2023-03-12.patch
* [x] main...sevz17:keycodes.patch

Workflow

```
$ git checkout <main_branch>
$ git checkout -b patches/<patch_name>

# use one of the following commands
$ git apply ./patches/<patch_file_name>
# $ patch -p1 --no-backup-if-mismatch < ./patches/<patch_file_name>

# test build
$ make -B

$ git commit -m "apply <patch_name>"
$ git checkout <main_branch>
$ git merge patches/<patch_name>
```
