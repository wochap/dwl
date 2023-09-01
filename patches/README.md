## Patches

### Patches list

https://github.com/djpohly/dwl/wiki/Patches

# Layouts
https://github.com/djpohly/dwl/compare/wlroots-next...NikitaIvanovV:centeredmaster.patch
https://github.com/djpohly/dwl/compare/wlroots-next...Abanoub8:gridmode.patch
https://github.com/djpohly/dwl/compare/wlroots-next...dimkr:dwl:snail.patch
https://github.com/djpohly/dwl/compare/wlroots-next...Abanoub8:fibonacci.patch
https://github.com/djpohly/dwl/compare/wlroots-next...bencollerson:dwl:72fde16.patch
https://github.com/djpohly/dwl/compare/wlroots-next...dm1tz:04-cyclelayouts.patch

# Clients & tags manipulation
https://github.com/djpohly/dwl/compare/wlroots-next...guidocella:shiftview.patch
~~https://github.com/djpohly/dwl/compare/wlroots-next...dm1tz:04-sticky.patch~~
https://github.com/djpohly/dwl/compare/wlroots-next...Abanoub8:movestack.patch

# Rules
~~https://github.com/djpohly/dwl/compare/wlroots-next...dm1tz:04-center.patch~~
~~https://github.com/dm1tz/dwl/compare/04-sticky...NikitaIvanovV:stickyrule.patch~~
https://github.com/djpohly/dwl/compare/wlroots-next...Stivvo:customFloat.patch
https://github.com/djpohly/dwl/compare/wlroots-next...loumray:namedscratchpads.patch
~~https://github.com/djpohly/dwl/compare/wlroots-next...mewkl:swallowx.patch~~

# Input
https://github.com/djpohly/dwl/compare/wlroots-next...sevz17:keycodes.patch
https://github.com/djpohly/dwl/compare/wlroots-next...NikitaIvanovV:naturalscrolltrackpad.patch
https://github.com/djpohly/dwl/compare/wlroots-next...yveszoundi:dwl-customization:keychord-2023-03-12.patch

# Cursor
https://github.com/djpohly/dwl/compare/wlroots-next...dm1tz:04-cursortheme.patch
~~https://github.com/djpohly/dwl/compare/wlroots-next...PalanixYT:type_hide.patch~~ (TODO: update patch)

# Other
https://github.com/djpohly/dwl/compare/wlroots-next...sevz17:autostart.patch
~~https://github.com/djpohly/dwl/compare/wlroots-next...Stivvo:hide-behind-fullscreen.patch~~
https://github.com/djpohly/dwl/compare/wlroots-next...madcowog:ipc-v2.patch
~~https://github.com/djpohly/dwl/compare/wlroots-next...NikitaIvanovV:menu.patch~~
~~https://github.com/djpohly/dwl/compare/wlroots-next...serenevoid:uselessgaps.patch~~
https://github.com/djpohly/dwl/compare/wlroots-next...NikitaIvanovV:genericgaps.patch

### How to apply them

https://dwm.suckless.org/customisation/patches_in_git/

Order (smallest to largest):

wlroots-next...NikitaIvanovV:naturalscrolltrackpad.patch
wlroots-next...dm1tz:04-cursortheme.patch
wlroots-next...bencollerson:dwl:72fde16.patch
wlroots-next...guidocella:shiftview.patch
wlroots-next...dm1tz:04-cyclelayouts.patch
wlroots-next...Abanoub8:movestack.patch
wlroots-next...Abanoub8:fibonacci.patch
wlroots-next...Abanoub8:gridmode.patch
wlroots-next...PalanixYT:type_hide.patch
wlroots-next...Stivvo:customFloat.patch
wlroots-next...NikitaIvanovV:centeredmaster.patch
wlroots-next...loumray:namedscratchpads.patch
~~wlroots-next...mewkl:swallowx.patch~~
wlroots-next...dimkr:dwl:snail.patch
wlroots-next...NikitaIvanovV:genericgaps.patch
wlroots-next...sevz17:autostart.patch
wlroots-next...madcowog:ipc-v2.patch
~~wlroots-next...Stivvo:hide-behind-fullscreen.patch~~
wlroots-next...sevz17:keycodes.patch
wlroots-next...yveszoundi:dwl-customization:keychord-2023-03-12.patch

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

