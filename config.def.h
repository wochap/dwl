/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }
/* appearance */
static const int sloppyfocus               = 1;  /* focus follows mouse */
static const int bypass_surface_visibility = 0;  /* 1 means idle inhibitors will disable idle tracking even if it's surface isn't visible  */
static const unsigned int borderpx         = 1;  /* border pixel of windows */
static const unsigned int borderspx        = 0;  /* width of the border that start from outside the windows */
static const unsigned int borderepx        = 0;  /* width of the border that start from inside the windows */
static const unsigned int borderspx_offset = 0;  /* offset of the border that start from outside the windows */
static const unsigned int borderepx_negative_offset = 0; /* offset of the border that start from inside the windows */
static const int draw_minimal_borders      = 1; /* merge adjacent borders */
static const float bordercolor[]           = COLOR(0x444444ff);
static const float borderscolor[]          = COLOR(0x444444ff); /* color of the border that start from outside the windows */
static const float borderecolor[]          = COLOR(0x444444ff); /* color of the border that start from inside the windows */
static const int border_color_type         = BrdOriginal; /* borders to be colored (focuscolor, urgentcolor) */
static const float focuscolor[]            = COLOR(0x005577ff);
static const float urgentcolor[]           = COLOR(0xff0000ff);
/* To conform the xdg-protocol, set the alpha to zero to restore the old behavior */
static const float fullscreen_bg[]         = {0.1, 0.1, 0.1, 1.0}; /* You can also use glsl colors */
static const char cursortheme[]            = "capitaine-cursors"; /* theme from /usr/share/cursors/xorg-x11 */
static const unsigned int cursorsize       = 24;
static const int center_relative_to_monitor = 0; /* 0 means center floating relative to the window area */
static const int shadow = 1;
static const int shadow_only_floating = 0;
static const struct wlr_render_color shadow_color = COLOR(0x0000FFff);
static const struct wlr_render_color shadow_color_focus = COLOR(0xFF0000ff);
static const int shadow_blur_sigma = 20;
static const int shadow_blur_sigma_focus = 40;
static const char *const shadow_ignore_list[] = { "xdg-desktop-portal-gtk", "cpupower-gui", NULL }; /* list of app-id to ignore */
static const int optimized_blur = 0;
static const struct blur_data blur_data = {
	.radius = 5, /* 0 disables blur */
	.num_passes = 3,
	.noise = 0.02,
	.brightness = 0.9,
	.contrast = 0.9,
	.saturation = 1.1,
};

enum {
    VIEW_L = -1,
    VIEW_R = 1,
    SHIFT_L = -2,
    SHIFT_R = 2,
} RotateTags;

enum {
	BROWSER,
};
const char *modes_labels[] = {
	"browser",
};

static const unsigned int swipe_min_threshold = 0;

/* tagging - TAGCOUNT must be no greater than 31 */
#define TAGCOUNT (9)

/* logging */
static int log_level = WLR_ERROR;

static const Env envs[] = {
    /* variable            value */
    { "XDG_CURRENT_DESKTOP",    "wlroots" },
};

/* Autostart */
static const char *const autostart[] = {
        "wbg", "/path/to/your/image", NULL,
        NULL /* terminate */
};

static const Rule rules[] = {
	/* app_id     title       tags mask     isfloating   monitor x   y  width height scratchkey */
	/* examples:
	{ "Gimp",     NULL,       0,            1,           -1,     0,  0, 1000, 0.75 },
	*/
	{ "firefox",  NULL,       1 << 8,       0,           -1,     0,  0, 0,    0,     0 },
	{ "^kitty$",  NULL,       0,            0,           -1,     0,  0, 0,    0,     0 },
	{ NULL,       "scratchpad", 0,          1,           -1,     0,  0, 0,    0,     's' },
};

/* layout(s) */
static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
	{ "|M|",      centeredmaster },
	{ "TTT",      bstack },
	{ "===",      bstackhoriz },
};

/* monitors */
static const MonitorRule monrules[] = {
	/* name       mfact nmaster scale layout       rotate/reflect                x    y */
	/* example of a HiDPI laptop monitor:
	{ "eDP-1",    0.5,  1,      2,    &layouts[0], WL_OUTPUT_TRANSFORM_NORMAL,   -1,  -1 },
	*/
	/* defaults */
	{ NULL,       0.55, 1,      1,    &layouts[0], WL_OUTPUT_TRANSFORM_NORMAL,   -1,  -1 },
};

/* keyboard */
static const struct xkb_rule_names xkb_rules[] = {
	{
		/* can specify fields: rules, model, layout, variant, options */
		.layout = "us",
		.options = NULL,
	},
	{
		.layout = "us",
		.options = "compose:ralt",
	},
};

static const int repeat_rate = 25;
static const int repeat_delay = 600;

/* Trackpad */
static const int tap_to_click = 1;
static const int tap_and_drag = 1;
static const int drag_lock = 1;
static const int natural_scrolling = 0;
static const int disable_while_typing = 1;
static const int left_handed = 0;
static const int middle_button_emulation = 0;
/* You can choose between:
LIBINPUT_CONFIG_SCROLL_NO_SCROLL
LIBINPUT_CONFIG_SCROLL_2FG
LIBINPUT_CONFIG_SCROLL_EDGE
LIBINPUT_CONFIG_SCROLL_ON_BUTTON_DOWN
*/
static const enum libinput_config_scroll_method scroll_method = LIBINPUT_CONFIG_SCROLL_2FG;

/* You can choose between:
LIBINPUT_CONFIG_CLICK_METHOD_NONE
LIBINPUT_CONFIG_CLICK_METHOD_BUTTON_AREAS
LIBINPUT_CONFIG_CLICK_METHOD_CLICKFINGER
*/
static const enum libinput_config_click_method click_method = LIBINPUT_CONFIG_CLICK_METHOD_BUTTON_AREAS;

/* You can choose between:
LIBINPUT_CONFIG_SEND_EVENTS_ENABLED
LIBINPUT_CONFIG_SEND_EVENTS_DISABLED
LIBINPUT_CONFIG_SEND_EVENTS_DISABLED_ON_EXTERNAL_MOUSE
*/
static const uint32_t send_events_mode = LIBINPUT_CONFIG_SEND_EVENTS_ENABLED;

/* You can choose between:
LIBINPUT_CONFIG_ACCEL_PROFILE_FLAT
LIBINPUT_CONFIG_ACCEL_PROFILE_ADAPTIVE
*/
static const enum libinput_config_accel_profile accel_profile = LIBINPUT_CONFIG_ACCEL_PROFILE_ADAPTIVE;
static const double accel_speed = 0.0;
/* You can choose between:
LIBINPUT_CONFIG_TAP_MAP_LRM -- 1/2/3 finger tap maps to left/right/middle
LIBINPUT_CONFIG_TAP_MAP_LMR -- 1/2/3 finger tap maps to left/middle/right
*/
static const enum libinput_config_tap_button_map button_map = LIBINPUT_CONFIG_TAP_MAP_LRM;

/* If you want to use the windows key for MODKEY, use WLR_MODIFIER_LOGO */
#define MODKEY WLR_MODIFIER_ALT

#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                    KEY,            view,            {.ui = 1 << TAG} }, \
	{ MODKEY|WLR_MODIFIER_CTRL,  KEY,            toggleview,      {.ui = 1 << TAG} }, \
	{ MODKEY|WLR_MODIFIER_SHIFT, KEY,            tag,             {.ui = 1 << TAG} }, \
	{ MODKEY|WLR_MODIFIER_CTRL|WLR_MODIFIER_SHIFT,KEY,toggletag,  {.ui = 1 << TAG} }

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static const char *termcmd[] = { "foot", NULL };
static const char *menucmd[] = { "bemenu-run", NULL };

#include "shiftview.c"

/* named scratchpads - First arg only serves to match against key in rules*/
static const char *scratchpadcmd[] = { "s", "alacritty", "-t", "scratchpad", NULL };

#include "keys.h"
static const Key keys[] = {
	/* modifier                  key          function        argument */
	{ MODKEY,                    Key_p,       spawn,          {.v = menucmd} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_Return,  spawn,          {.v = termcmd} },
	{ MODKEY,                    Key_grave,   togglescratch,  {.v = scratchpadcmd } },
	// { MODKEY,                    Key_grave    focusortogglescratch, {.v = scratchpadcmd } },
	// { MODKEY,                    Key_grave,   focusortogglematchingscratch, {.v = scratchpadcmd } },
	{ MODKEY,                    Key_j,       focusstack,     {.i = +1} },
	{ MODKEY,                    Key_k,       focusstack,     {.i = -1} },
	{ MODKEY|WLR_MODIFIER_CTRL,  Key_Left,    focusdir,       {.ui = 0} },
	{ MODKEY|WLR_MODIFIER_CTRL,  Key_Right,   focusdir,       {.ui = 1} },
	{ MODKEY|WLR_MODIFIER_CTRL,  Key_Up,      focusdir,       {.ui = 2} },
	{ MODKEY|WLR_MODIFIER_CTRL,  Key_Down,    focusdir,       {.ui = 3} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_Left,    swapdir,        {.ui = 0} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_Right,   swapdir,        {.ui = 1} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_Up,      swapdir,        {.ui = 2} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_Down,    swapdir,        {.ui = 3} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_j,       movestack,      {.i = +1} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_k,       movestack,      {.i = -1} },
	{ MODKEY,                    Key_i,       incnmaster,     {.i = +1} },
	{ MODKEY,                    Key_d,       incnmaster,     {.i = -1} },
	{ MODKEY,                    Key_a,       rotatetags,     {.i = VIEW_L} },
	{ MODKEY,                    Key_d,       rotatetags,     {.i = VIEW_R} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_a,       rotatetags,     {.i = SHIFT_L} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_d,       rotatetags,     {.i = SHIFT_R} },
	{ MODKEY,                    Key_h,       setmfact,       {.f = -0.05} },
	{ MODKEY,                    Key_l,       setmfact,       {.f = +0.05} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_h,       setcfact,       {.f = +0.25} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_l,       setcfact,       {.f = -0.25} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_k,       setcfact,       {.f = 0} },
	{ MODKEY,                    Key_Return,  zoom,           {0} },
	{ MODKEY,                    Key_Tab,     view,           {0} },
	{ MODKEY,                    Key_a,          shiftview,      { .i = -1 } },
	{ MODKEY,                    Key_semicolon,  shiftview,      { .i = 1 } },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_c,       killclient,     {0} },
	{ MODKEY,                    Key_t,          setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                    Key_f,          setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                    Key_m,          setlayout,      {.v = &layouts[2]} },
	{ MODKEY,                    Key_u,          setlayout,      {.v = &layouts[3]} },
	{ MODKEY,                    Key_o,          setlayout,      {.v = &layouts[4]} },
	{ MODKEY,                    Key_c,          setlayout,      {.v = &layouts[3]} },
	{ MODKEY,                    Key_space,      setlayout,      {0} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_space,   togglefloating, {0} },
	{ MODKEY,                    Key_e,       togglefullscreen, {0} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_e,       togglefakefullscreen, {0} },
	{ MODKEY,                    Key_d,          togglescratchpad, {0} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_d,          toggleinscratchpad, {0} },
	{ MODKEY,                    Key_Down,       moveresizekb,   {.v = (int []){ 0, 40, 0, 0 }}},
	{ MODKEY,                    Key_Up,         moveresizekb,   {.v = (int []){ 0, -40, 0, 0 }}},
	{ MODKEY,                    Key_Right,      moveresizekb,   {.v = (int []){ 40, 0, 0, 0 }}},
	{ MODKEY,                    Key_Left,       moveresizekb,   {.v = (int []){ -40, 0, 0, 0 }}},
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_Down,       moveresizekb,   {.v = (int []){ 0, 0, 0, 40 }}},
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_Up,         moveresizekb,   {.v = (int []){ 0, 0, 0, -40 }}},
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_Right,      moveresizekb,   {.v = (int []){ 0, 0, 40, 0 }}},
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_Left,       moveresizekb,   {.v = (int []){ 0, 0, -40, 0 }}},
	{ MODKEY,                    Key_x,          movecenter,     {0} },
	{ MODKEY,                    Key_0,       view,           {.ui = ~0} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_0,       tag,            {.ui = ~0} },
	{ MODKEY,                    Key_comma,   focusmon,       {.i = WLR_DIRECTION_LEFT} },
	{ MODKEY,                    Key_period,  focusmon,       {.i = WLR_DIRECTION_RIGHT} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_comma,   tagmon,         {.i = WLR_DIRECTION_LEFT} },
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_period,  tagmon,         {.i = WLR_DIRECTION_RIGHT} },
	{ MODKEY|WLR_MODIFIER_CTRL|WLR_MODIFIER_SHIFT, Key_m, create_output, {0} },
	{ MODKEY,                    Key_w,          switchxkbrule,  {0} },
	TAGKEYS(                     Key_1,                       0),
	TAGKEYS(                     Key_2,                       1),
	TAGKEYS(                     Key_3,                       2),
	TAGKEYS(                     Key_4,                       3),
	TAGKEYS(                     Key_5,                       4),
	TAGKEYS(                     Key_6,                       5),
	TAGKEYS(                     Key_7,                       6),
	TAGKEYS(                     Key_8,                       7),
	TAGKEYS(                     Key_9,                       8),
	{ MODKEY|WLR_MODIFIER_SHIFT, Key_q,       quit,           {0} },

	{ MODKEY,                    XKB_KEY_b,          entermode,      {.i = BROWSER} },

	/* Ctrl-Alt-Backspace and Ctrl-Alt-Fx used to be handled by X server */
	{ WLR_MODIFIER_CTRL|WLR_MODIFIER_ALT,Key_BackSpace, quit, {0} },
	/* Ctrl-Alt-Fx is used to switch to another VT, if you don't know what a VT is
	 * do not remove them.
	 */
#define CHVT(KEY,n) { WLR_MODIFIER_CTRL|WLR_MODIFIER_ALT, KEY, chvt, {.ui = (n)} }
	CHVT(Key_F1, 1), CHVT(Key_F2,  2),  CHVT(Key_F3,  3),  CHVT(Key_F4,  4),
	CHVT(Key_F5, 5), CHVT(Key_F6,  6),  CHVT(Key_F7,  7),  CHVT(Key_F8,  8),
	CHVT(Key_F9, 9), CHVT(Key_F10, 10), CHVT(Key_F11, 11), CHVT(Key_F12, 12),
};

static const Key lockedkeys[] = {
	/* Note that Shift changes certain key codes: c -> C, 2 -> at, etc. */
	/* modifier                  key                 function        argument */

	/* Ctrl-Alt-Backspace and Ctrl-Alt-Fx used to be handled by X server */
	{ WLR_MODIFIER_CTRL|WLR_MODIFIER_ALT, Key_BackSpace, quit, {0} },
#define CHVT(KEY,n) { WLR_MODIFIER_CTRL|WLR_MODIFIER_ALT, KEY, chvt, {.ui = (n)} }
	/* Ctrl-Alt-Fx is used to switch to another VT, if you don't know what a VT is
	 * do not remove them.
	 */
	CHVT(Key_F1, 1), CHVT(Key_F2,  2),  CHVT(Key_F3,  3),  CHVT(Key_F4,  4),
	CHVT(Key_F5, 5), CHVT(Key_F6,  6),  CHVT(Key_F7,  7),  CHVT(Key_F8,  8),
	CHVT(Key_F9, 9), CHVT(Key_F10, 10), CHVT(Key_F11, 11), CHVT(Key_F12, 12),
};

static const Modekey modekeys[] = {
	/* mode      modifier                  key                 function        argument */
	{ BROWSER, { 0, Key_f, spawn, SHCMD("firefox") } },
	{ BROWSER, { 0, Key_f, entermode, {.i = NORMAL} } },
	{ BROWSER, { 0, Key_b, spawn, SHCMD("brave") } },
	{ BROWSER, { 0, Key_b, entermode, {.i = NORMAL} } },
	{ BROWSER, { 0, Key_g, spawn, SHCMD("google-chrome-stable") } },
	{ BROWSER, { 0, Key_g, entermode, {.i = NORMAL} } },
	{ BROWSER, { 0, Key_Escape, entermode, {.i = NORMAL} } },
};

static const Button buttons[] = {
	{ MODKEY, BTN_LEFT,   moveresize,     {.ui = CurMove} },
	{ MODKEY, BTN_MIDDLE, togglefloating, {0} },
	{ MODKEY, BTN_RIGHT,  moveresize,     {.ui = CurResize} },
};

static const Gesture gestures[] = {
	// { MODKEY, SWIPE_LEFT, 4, shiftview, { .i = 1 } },
	// { MODKEY, SWIPE_RIGHT, 4, shiftview, { .i = -1 } },
	{ MODKEY, SWIPE_UP, 3, focusstack, {.i = 1} },
	{ MODKEY, SWIPE_DOWN, 3, focusstack, {.i = -1} },
};
