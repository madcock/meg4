/*
 * meg4/api.h
 *
 * Generated by bin2h, DO NOT edit
 *
 * @brief API function calls and built-in defines available to scripts
 *
 */

#define MEG4_NUM_API 165
#define MEG4_NUM_BDEF 260
#ifndef API_IMPL
extern meg4_api_t meg4_api[166];
extern bdef_t meg4_bdefs[261];
#else
meg4_api_t meg4_api[166] = {
    { "putc", 0, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "printf", 0, 2, 2, 0x1, 0x1, 0x0, 0x0 },
    { "getc", 1, 0, 0, 0x0, 0x0, 0x0, 0x0 },
    { "gets", 3, 0, 0, 0x0, 0x0, 0x0, 0x0 },
    { "trace", 0, 2, 2, 0x1, 0x1, 0x0, 0x0 },
    { "delay", 0, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "exit", 0, 0, 0, 0x0, 0x0, 0x0, 0x0 },
    { "sfx", 0, 3, 0, 0x0, 0x0, 0x0, 0x7 },
    { "music", 0, 3, 0, 0x0, 0x0, 0x0, 0x7 },
    { "gpio_rev", 1, 0, 0, 0x0, 0x0, 0x0, 0x0 },
    { "gpio_get", 1, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "gpio_set", 1, 2, 0, 0x0, 0x0, 0x0, 0x1 },
    { "cls", 0, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "cget", 1, 2, 0, 0x0, 0x0, 0x0, 0x3 },
    { "pget", 1, 2, 0, 0x0, 0x0, 0x0, 0x3 },
    { "pset", 0, 3, 0, 0x0, 0x0, 0x0, 0x7 },
    { "width", 1, 2, 0, 0x2, 0x2, 0x0, 0x0 },
    { "text", 0, 7, 0, 0x40, 0x40, 0x0, 0x31 },
    { "line", 0, 5, 0, 0x0, 0x0, 0x0, 0x1 },
    { "qbez", 0, 7, 0, 0x0, 0x0, 0x0, 0x1 },
    { "cbez", 0, 9, 0, 0x0, 0x0, 0x0, 0x1 },
    { "tri", 0, 7, 0, 0x0, 0x0, 0x0, 0x1 },
    { "ftri", 0, 7, 0, 0x0, 0x0, 0x0, 0x1 },
    { "tri2d", 0, 9, 0, 0x0, 0x0, 0x0, 0x49 },
    { "tri3d", 0, 12, 0, 0x0, 0x0, 0x0, 0x111 },
    { "tritx", 0, 15, 0, 0x0, 0x0, 0x0, 0xc63 },
    { "mesh", 0, 4, 0, 0xb, 0x0, 0x0, 0x4 },
    { "rect", 0, 5, 0, 0x0, 0x0, 0x0, 0x1 },
    { "frect", 0, 5, 0, 0x0, 0x0, 0x0, 0x1 },
    { "circ", 0, 4, 0, 0x0, 0x0, 0x0, 0x9 },
    { "fcirc", 0, 4, 0, 0x0, 0x0, 0x0, 0x9 },
    { "ellip", 0, 5, 0, 0x0, 0x0, 0x0, 0x1 },
    { "fellip", 0, 5, 0, 0x0, 0x0, 0x0, 0x1 },
    { "move", 0, 3, 0, 0x0, 0x0, 0x0, 0x4 },
    { "left", 0, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "right", 0, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "up", 0, 0, 0, 0x0, 0x0, 0x0, 0x0 },
    { "down", 0, 0, 0, 0x0, 0x0, 0x0, 0x0 },
    { "color", 0, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "forw", 0, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "back", 0, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "spr", 0, 7, 0, 0x0, 0x0, 0x0, 0x5c },
    { "dlg", 0, 14, 0, 0x0, 0x0, 0x0, 0x3fec },
    { "stext", 0, 8, 0, 0x80, 0x80, 0x0, 0x3c },
    { "remap", 0, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "mget", 1, 2, 0, 0x0, 0x0, 0x0, 0x3 },
    { "mset", 0, 3, 0, 0x0, 0x0, 0x0, 0x7 },
    { "map", 0, 7, 0, 0x0, 0x0, 0x0, 0x3c },
    { "maze", 0, 12, 0, 0x800, 0x0, 0x0, 0x7ff },
    { "getpad", 1, 2, 0, 0x0, 0x0, 0x0, 0x0 },
    { "prspad", 1, 2, 0, 0x0, 0x0, 0x0, 0x0 },
    { "relpad", 1, 2, 0, 0x0, 0x0, 0x0, 0x0 },
    { "getbtn", 1, 1, 0, 0x0, 0x0, 0x0, 0x0 },
    { "getclk", 1, 1, 0, 0x0, 0x0, 0x0, 0x0 },
    { "getkey", 1, 1, 0, 0x0, 0x0, 0x0, 0x0 },
    { "popkey", 1, 0, 0, 0x0, 0x0, 0x0, 0x0 },
    { "pendkey", 1, 0, 0, 0x0, 0x0, 0x0, 0x0 },
    { "lenkey", 1, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "speckey", 1, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "rand", 1, 0, 0, 0x0, 0x0, 0x0, 0x0 },
    { "rnd", 4, 0, 0, 0x0, 0x0, 0x0, 0x0 },
    { "float", 4, 1, 0, 0x0, 0x0, 0x0, 0x0 },
    { "int", 1, 1, 0, 0x0, 0x0, 0x1, 0x0 },
    { "floor", 4, 1, 0, 0x0, 0x0, 0x1, 0x0 },
    { "ceil", 4, 1, 0, 0x0, 0x0, 0x1, 0x0 },
    { "sgn", 4, 1, 0, 0x0, 0x0, 0x1, 0x0 },
    { "abs", 4, 1, 0, 0x0, 0x0, 0x1, 0x0 },
    { "exp", 4, 1, 0, 0x0, 0x0, 0x1, 0x0 },
    { "log", 4, 1, 0, 0x0, 0x0, 0x1, 0x0 },
    { "pow", 4, 2, 0, 0x0, 0x0, 0x3, 0x0 },
    { "sqrt", 4, 1, 0, 0x0, 0x0, 0x1, 0x0 },
    { "rsqrt", 4, 1, 0, 0x0, 0x0, 0x1, 0x0 },
    { "clamp", 4, 3, 0, 0x0, 0x0, 0x7, 0x0 },
    { "lerp", 4, 3, 0, 0x0, 0x0, 0x7, 0x0 },
    { "pi", 4, 0, 0, 0x0, 0x0, 0x0, 0x0 },
    { "cos", 4, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "sin", 4, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "tan", 4, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "acos", 1, 1, 0, 0x0, 0x0, 0x1, 0x0 },
    { "asin", 1, 1, 0, 0x0, 0x0, 0x1, 0x0 },
    { "atan", 1, 1, 0, 0x0, 0x0, 0x1, 0x0 },
    { "atan2", 1, 2, 0, 0x0, 0x0, 0x3, 0x0 },
    { "dotv2", 4, 2, 0, 0x3, 0x0, 0x0, 0x0 },
    { "lenv2", 4, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "scalev2", 0, 2, 0, 0x1, 0x0, 0x2, 0x0 },
    { "negv2", 0, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "addv2", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "subv2", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "mulv2", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "divv2", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "clampv2", 0, 4, 0, 0xf, 0x0, 0x0, 0x0 },
    { "lerpv2", 0, 4, 0, 0x7, 0x0, 0x8, 0x0 },
    { "normv2", 0, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "dotv3", 4, 2, 0, 0x3, 0x0, 0x0, 0x0 },
    { "lenv3", 4, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "scalev3", 0, 2, 0, 0x1, 0x0, 0x2, 0x0 },
    { "negv3", 0, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "addv3", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "subv3", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "mulv3", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "divv3", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "crossv3", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "clampv3", 0, 4, 0, 0xf, 0x0, 0x0, 0x0 },
    { "lerpv3", 0, 4, 0, 0x7, 0x0, 0x8, 0x0 },
    { "normv3", 0, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "dotv4", 4, 2, 0, 0x3, 0x0, 0x0, 0x0 },
    { "lenv4", 4, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "scalev4", 0, 2, 0, 0x1, 0x0, 0x2, 0x0 },
    { "negv4", 0, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "addv4", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "subv4", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "mulv4", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "divv4", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "clampv4", 0, 4, 0, 0xf, 0x0, 0x0, 0x0 },
    { "lerpv4", 0, 4, 0, 0x7, 0x0, 0x8, 0x0 },
    { "normv4", 0, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "idq", 0, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "eulerq", 0, 4, 0, 0x1, 0x0, 0x0, 0xe },
    { "dotq", 4, 2, 0, 0x3, 0x0, 0x0, 0x0 },
    { "lenq", 4, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "scaleq", 0, 2, 0, 0x1, 0x0, 0x2, 0x0 },
    { "negq", 0, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "addq", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "subq", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "mulq", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "rotq", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "lerpq", 0, 4, 0, 0x7, 0x0, 0x8, 0x0 },
    { "slerpq", 0, 4, 0, 0x7, 0x0, 0x8, 0x0 },
    { "normq", 0, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "idm4", 0, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "trsm4", 0, 4, 0, 0xf, 0x0, 0x0, 0x0 },
    { "detm4", 4, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "addm4", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "subm4", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "mulm4", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "mulm4v3", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "mulm4v4", 0, 3, 0, 0x7, 0x0, 0x0, 0x0 },
    { "invm4", 0, 2, 0, 0x3, 0x0, 0x0, 0x0 },
    { "trpm4", 0, 2, 0, 0x3, 0x0, 0x0, 0x0 },
    { "trns", 0, 10, 0, 0x3, 0x0, 0x200, 0x1c4 },
    { "inb", 1, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "inw", 1, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "ini", 1, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { "outb", 0, 2, 0, 0x1, 0x0, 0x0, 0x2 },
    { "outw", 0, 2, 0, 0x1, 0x0, 0x0, 0x2 },
    { "outi", 0, 2, 0, 0x1, 0x0, 0x0, 0x2 },
    { "memsave", 1, 3, 0, 0x2, 0x0, 0x0, 0x5 },
    { "memload", 1, 3, 0, 0x1, 0x0, 0x0, 0x6 },
    { "memcpy", 0, 3, 0, 0x3, 0x0, 0x0, 0x4 },
    { "memset", 0, 3, 0, 0x1, 0x0, 0x0, 0x6 },
    { "memcmp", 1, 3, 0, 0x3, 0x0, 0x0, 0x4 },
    { "deflate", 1, 3, 0, 0x3, 0x0, 0x0, 0x4 },
    { "inflate", 1, 3, 0, 0x3, 0x0, 0x0, 0x4 },
    { "time", 4, 0, 0, 0x0, 0x0, 0x0, 0x0 },
    { "now", 1, 0, 0, 0x0, 0x0, 0x0, 0x0 },
    { "atoi", 1, 1, 0, 0x1, 0x1, 0x0, 0x0 },
    { "itoa", 3, 1, 0, 0x0, 0x0, 0x0, 0x0 },
    { "val", 4, 1, 0, 0x1, 0x1, 0x0, 0x0 },
    { "str", 3, 1, 0, 0x0, 0x0, 0x1, 0x0 },
    { "sprintf", 3, 2, 2, 0x1, 0x1, 0x0, 0x0 },
    { "strlen", 1, 1, 0, 0x1, 0x1, 0x0, 0x0 },
    { "mblen", 1, 1, 0, 0x1, 0x1, 0x0, 0x0 },
    { "malloc", 2, 1, 0, 0x0, 0x0, 0x0, 0x1 },
    { "realloc", 2, 2, 0, 0x1, 0x0, 0x0, 0x2 },
    { "free", 1, 1, 0, 0x1, 0x0, 0x0, 0x0 },
    { NULL, 0, 0, 0, 0, 0, 0, 0 }
};
#endif
#ifdef BDEF_IMPL
bdef_t meg4_bdefs[261] = {
    { "__FUNC__", 0 },
    { "__LINE__", 0 },
    { "__MEG4__", 1 },
    { "NULL",     0 },
    { "false",    0 },
    { "true",     1 },
    { "MEM_USER", 0x30000 },
    { "MEM_LIMIT", 0xC0000 },
    { "PTR_NORM", 0x03fb },
    { "PTR_TEXT", 0x93fc },
    { "PTR_HAND", 0x0bfd },
    { "PTR_ERR",  0x93fe },
    { "PTR_NONE", 0xffff },
    { "BTN_L", 1 },
    { "BTN_M", 2 },
    { "BTN_U", 2 },
    { "BTN_R", 4 },
    { "BTN_D", 8 },
    { "SCR_U", 8 },
    { "BTN_A", 16 },
    { "SCR_D", 16 },
    { "BTN_B", 32 },
    { "SCR_L", 32 },
    { "BTN_X", 64 },
    { "SCR_R", 64 },
    { "BTN_Y", 128 },
    { "KEY_CHEAT", 0 },
    { "KEY_F1", 1 },
    { "KEY_F2", 2 },
    { "KEY_F3", 3 },
    { "KEY_F4", 4 },
    { "KEY_F5", 5 },
    { "KEY_F6", 6 },
    { "KEY_F7", 7 },
    { "KEY_F8", 8 },
    { "KEY_F9", 9 },
    { "KEY_F10", 10 },
    { "KEY_F11", 11 },
    { "KEY_F12", 12 },
    { "KEY_PRSCR", 13 },
    { "KEY_SCRLOCK", 14 },
    { "KEY_PAUSE", 15 },
    { "KEY_BACKQUOTE", 16 },
    { "KEY_1", 17 },
    { "KEY_2", 18 },
    { "KEY_3", 19 },
    { "KEY_4", 20 },
    { "KEY_5", 21 },
    { "KEY_6", 22 },
    { "KEY_7", 23 },
    { "KEY_8", 24 },
    { "KEY_9", 25 },
    { "KEY_0", 26 },
    { "KEY_MINUS", 27 },
    { "KEY_EQUAL", 28 },
    { "KEY_BACKSPACE", 29 },
    { "KEY_TAB", 30 },
    { "KEY_Q", 31 },
    { "KEY_W", 32 },
    { "KEY_E", 33 },
    { "KEY_R", 34 },
    { "KEY_T", 35 },
    { "KEY_Y", 36 },
    { "KEY_U", 37 },
    { "KEY_I", 38 },
    { "KEY_O", 39 },
    { "KEY_P", 40 },
    { "KEY_LBRACKET", 41 },
    { "KEY_RBRACKET", 42 },
    { "KEY_ENTER", 43 },
    { "KEY_CAPSLOCK", 44 },
    { "KEY_A", 45 },
    { "KEY_S", 46 },
    { "KEY_D", 47 },
    { "KEY_F", 48 },
    { "KEY_G", 49 },
    { "KEY_H", 50 },
    { "KEY_J", 51 },
    { "KEY_K", 52 },
    { "KEY_L", 53 },
    { "KEY_SEMICOLON", 54 },
    { "KEY_APOSTROPHE", 55 },
    { "KEY_BACKSLASH", 56 },
    { "KEY_LSHIFT", 57 },
    { "KEY_LESS", 58 },
    { "KEY_Z", 59 },
    { "KEY_X", 60 },
    { "KEY_C", 61 },
    { "KEY_V", 62 },
    { "KEY_B", 63 },
    { "KEY_N", 64 },
    { "KEY_M", 65 },
    { "KEY_COMMA", 66 },
    { "KEY_PERIOD", 67 },
    { "KEY_SLASH", 68 },
    { "KEY_RSHIFT", 69 },
    { "KEY_LCTRL", 70 },
    { "KEY_LSUPER", 71 },
    { "KEY_LALT", 72 },
    { "KEY_SPACE", 73 },
    { "KEY_RALT", 74 },
    { "KEY_RSUPER", 75 },
    { "KEY_MENU", 76 },
    { "KEY_RCTRL", 77 },
    { "KEY_INS", 78 },
    { "KEY_HOME", 79 },
    { "KEY_PGUP", 80 },
    { "KEY_DEL", 81 },
    { "KEY_END", 82 },
    { "KEY_PGDN", 83 },
    { "KEY_UP", 84 },
    { "KEY_LEFT", 85 },
    { "KEY_DOWN", 86 },
    { "KEY_RIGHT", 87 },
    { "KEY_NUMLOCK", 88 },
    { "KEY_KP_DIV", 89 },
    { "KEY_KP_MUL", 90 },
    { "KEY_KP_SUB", 91 },
    { "KEY_KP_7", 92 },
    { "KEY_KP_8", 93 },
    { "KEY_KP_9", 94 },
    { "KEY_KP_ADD", 95 },
    { "KEY_KP_4", 96 },
    { "KEY_KP_5", 97 },
    { "KEY_KP_6", 98 },
    { "KEY_KP_1", 99 },
    { "KEY_KP_2", 100 },
    { "KEY_KP_3", 101 },
    { "KEY_KP_ENTER", 102 },
    { "KEY_KP_0", 103 },
    { "KEY_KP_DEC", 104 },
    { "KEY_INT1", 105 },
    { "KEY_INT2", 106 },
    { "KEY_INT3", 107 },
    { "KEY_INT4", 108 },
    { "KEY_INT5", 109 },
    { "KEY_INT6", 110 },
    { "KEY_INT7", 111 },
    { "KEY_INT8", 112 },
    { "KEY_LNG1", 113 },
    { "KEY_LNG2", 114 },
    { "KEY_LNG3", 115 },
    { "KEY_LNG4", 116 },
    { "KEY_LNG5", 117 },
    { "KEY_LNG6", 118 },
    { "KEY_LNG7", 119 },
    { "KEY_LNG8", 120 },
    { "KEY_APP", 121 },
    { "KEY_POWER", 122 },
    { "KEY_KP_EQUAL", 123 },
    { "KEY_EXEC", 124 },
    { "KEY_HELP", 125 },
    { "KEY_SELECT", 126 },
    { "KEY_STOP", 127 },
    { "KEY_AGAIN", 128 },
    { "KEY_UNDO", 129 },
    { "KEY_CUT", 130 },
    { "KEY_COPY", 131 },
    { "KEY_PASTE", 132 },
    { "KEY_FIND", 133 },
    { "KEY_MUTE", 134 },
    { "KEY_VOLUP", 135 },
    { "KEY_VOLDN", 136 },
    { "NOTE_NONE", 0 },
    { "NOTE_C_0", 1 },
    { "NOTE_Cs0", 2 },
    { "NOTE_D_0", 3 },
    { "NOTE_Ds0", 4 },
    { "NOTE_E_0", 5 },
    { "NOTE_F_0", 6 },
    { "NOTE_Fs0", 7 },
    { "NOTE_G_0", 8 },
    { "NOTE_Gs0", 9 },
    { "NOTE_A_0", 10 },
    { "NOTE_As0", 11 },
    { "NOTE_B_0", 12 },
    { "NOTE_C_1", 13 },
    { "NOTE_Cs1", 14 },
    { "NOTE_D_1", 15 },
    { "NOTE_Ds1", 16 },
    { "NOTE_E_1", 17 },
    { "NOTE_F_1", 18 },
    { "NOTE_Fs1", 19 },
    { "NOTE_G_1", 20 },
    { "NOTE_Gs1", 21 },
    { "NOTE_A_1", 22 },
    { "NOTE_As1", 23 },
    { "NOTE_B_1", 24 },
    { "NOTE_C_2", 25 },
    { "NOTE_Cs2", 26 },
    { "NOTE_D_2", 27 },
    { "NOTE_Ds2", 28 },
    { "NOTE_E_2", 29 },
    { "NOTE_F_2", 30 },
    { "NOTE_Fs2", 31 },
    { "NOTE_G_2", 32 },
    { "NOTE_Gs2", 33 },
    { "NOTE_A_2", 34 },
    { "NOTE_As2", 35 },
    { "NOTE_B_2", 36 },
    { "NOTE_C_3", 37 },
    { "NOTE_Cs3", 38 },
    { "NOTE_D_3", 39 },
    { "NOTE_Ds3", 40 },
    { "NOTE_E_3", 41 },
    { "NOTE_F_3", 42 },
    { "NOTE_Fs3", 43 },
    { "NOTE_G_3", 44 },
    { "NOTE_Gs3", 45 },
    { "NOTE_A_3", 46 },
    { "NOTE_As3", 47 },
    { "NOTE_B_3", 48 },
    { "NOTE_C_4", 49 },
    { "NOTE_Cs4", 50 },
    { "NOTE_D_4", 51 },
    { "NOTE_Ds4", 52 },
    { "NOTE_E_4", 53 },
    { "NOTE_F_4", 54 },
    { "NOTE_Fs4", 55 },
    { "NOTE_G_4", 56 },
    { "NOTE_Gs4", 57 },
    { "NOTE_A_4", 58 },
    { "NOTE_As4", 59 },
    { "NOTE_B_4", 60 },
    { "NOTE_C_5", 61 },
    { "NOTE_Cs5", 62 },
    { "NOTE_D_5", 63 },
    { "NOTE_Ds5", 64 },
    { "NOTE_E_5", 65 },
    { "NOTE_F_5", 66 },
    { "NOTE_Fs5", 67 },
    { "NOTE_G_5", 68 },
    { "NOTE_Gs5", 69 },
    { "NOTE_A_5", 70 },
    { "NOTE_As5", 71 },
    { "NOTE_B_5", 72 },
    { "NOTE_C_6", 73 },
    { "NOTE_Cs6", 74 },
    { "NOTE_D_6", 75 },
    { "NOTE_Ds6", 76 },
    { "NOTE_E_6", 77 },
    { "NOTE_F_6", 78 },
    { "NOTE_Fs6", 79 },
    { "NOTE_G_6", 80 },
    { "NOTE_Gs6", 81 },
    { "NOTE_A_6", 82 },
    { "NOTE_As6", 83 },
    { "NOTE_B_6", 84 },
    { "NOTE_C_7", 85 },
    { "NOTE_Cs7", 86 },
    { "NOTE_D_7", 87 },
    { "NOTE_Ds7", 88 },
    { "NOTE_E_7", 89 },
    { "NOTE_F_7", 90 },
    { "NOTE_Fs7", 91 },
    { "NOTE_G_7", 92 },
    { "NOTE_Gs7", 93 },
    { "NOTE_A_7", 94 },
    { "NOTE_As7", 95 },
    { "NOTE_B_7", 96 },
    { NULL, 0 }
};
#endif

#define MEG4_PRINT 1
#define MEG4_INPUT 3
#define MEG4_OUTB 143
#define MEG4_EXIT 6
#define MEG4_MEMCPY 148
#define MEG4_ATOI 155
#define MEG4_VAL 157
#define MEG4_DISPATCH \
    case  0: meg4_api_putc((uint32_t)cpu_topi(0)); break; \
    case  1: meg4_api_printf((str_t)cpu_topi(0)); break; \
    case  2:  val = meg4_api_getc(); break; \
    case  3:  val = meg4_api_gets(); break; \
    case  4: meg4_api_trace((str_t)cpu_topi(0)); break; \
    case  5: meg4_api_delay((uint16_t)cpu_topi(0)); break; \
    case  6: meg4_api_exit(); break; \
    case  7: meg4_api_sfx((uint8_t)cpu_topi(0),(uint8_t)cpu_topi(4),(uint8_t)cpu_topi(8)); break; \
    case  8: meg4_api_music((uint8_t)cpu_topi(0),(uint16_t)cpu_topi(4),(uint8_t)cpu_topi(8)); break; \
    case  9:  val = meg4_api_gpio_rev(); break; \
    case 10:  val = meg4_api_gpio_get((uint8_t)cpu_topi(0)); break; \
    case 11:  val = meg4_api_gpio_set((uint8_t)cpu_topi(0),(int)cpu_topi(4)); break; \
    case 12: meg4_api_cls((uint8_t)cpu_topi(0)); break; \
    case 13:  val = meg4_api_cget((uint16_t)cpu_topi(0),(uint16_t)cpu_topi(4)); break; \
    case 14:  val = meg4_api_pget((uint16_t)cpu_topi(0),(uint16_t)cpu_topi(4)); break; \
    case 15: meg4_api_pset((uint8_t)cpu_topi(0),(uint16_t)cpu_topi(4),(uint16_t)cpu_topi(8)); break; \
    case 16:  val = meg4_api_width((int8_t)cpu_topi(0),(str_t)cpu_topi(4)); break; \
    case 17: meg4_api_text((uint8_t)cpu_topi(0),(int16_t)cpu_topi(4),(int16_t)cpu_topi(8),(int8_t)cpu_topi(12),(uint8_t)cpu_topi(16),(uint8_t)cpu_topi(20),(str_t)cpu_topi(24)); break; \
    case 18: meg4_api_line((uint8_t)cpu_topi(0),(int16_t)cpu_topi(4),(int16_t)cpu_topi(8),(int16_t)cpu_topi(12),(int16_t)cpu_topi(16)); break; \
    case 19: meg4_api_qbez((uint8_t)cpu_topi(0),(int16_t)cpu_topi(4),(int16_t)cpu_topi(8),(int16_t)cpu_topi(12),(int16_t)cpu_topi(16),(int16_t)cpu_topi(20),(int16_t)cpu_topi(24)); break; \
    case 20: meg4_api_cbez((uint8_t)cpu_topi(0),(int16_t)cpu_topi(4),(int16_t)cpu_topi(8),(int16_t)cpu_topi(12),(int16_t)cpu_topi(16),(int16_t)cpu_topi(20),(int16_t)cpu_topi(24),(int16_t)cpu_topi(28),(int16_t)cpu_topi(32)); break; \
    case 21: meg4_api_tri((uint8_t)cpu_topi(0),(int16_t)cpu_topi(4),(int16_t)cpu_topi(8),(int16_t)cpu_topi(12),(int16_t)cpu_topi(16),(int16_t)cpu_topi(20),(int16_t)cpu_topi(24)); break; \
    case 22: meg4_api_ftri((uint8_t)cpu_topi(0),(int16_t)cpu_topi(4),(int16_t)cpu_topi(8),(int16_t)cpu_topi(12),(int16_t)cpu_topi(16),(int16_t)cpu_topi(20),(int16_t)cpu_topi(24)); break; \
    case 23: meg4_api_tri2d((uint8_t)cpu_topi(0),(int16_t)cpu_topi(4),(int16_t)cpu_topi(8),(uint8_t)cpu_topi(12),(int16_t)cpu_topi(16),(int16_t)cpu_topi(20),(uint8_t)cpu_topi(24),(int16_t)cpu_topi(28),(int16_t)cpu_topi(32)); break; \
    case 24: meg4_api_tri3d((uint8_t)cpu_topi(0),(int16_t)cpu_topi(4),(int16_t)cpu_topi(8),(int16_t)cpu_topi(12),(uint8_t)cpu_topi(16),(int16_t)cpu_topi(20),(int16_t)cpu_topi(24),(int16_t)cpu_topi(28),(uint8_t)cpu_topi(32),(int16_t)cpu_topi(36),(int16_t)cpu_topi(40),(int16_t)cpu_topi(44)); break; \
    case 25: meg4_api_tritx((uint8_t)cpu_topi(0),(uint8_t)cpu_topi(4),(int16_t)cpu_topi(8),(int16_t)cpu_topi(12),(int16_t)cpu_topi(16),(uint8_t)cpu_topi(20),(uint8_t)cpu_topi(24),(int16_t)cpu_topi(28),(int16_t)cpu_topi(32),(int16_t)cpu_topi(36),(uint8_t)cpu_topi(40),(uint8_t)cpu_topi(44),(int16_t)cpu_topi(48),(int16_t)cpu_topi(52),(int16_t)cpu_topi(56)); break; \
    case 26: meg4_api_mesh((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(uint16_t)cpu_topi(8),(addr_t)cpu_topi(12)); break; \
    case 27: meg4_api_rect((uint8_t)cpu_topi(0),(int16_t)cpu_topi(4),(int16_t)cpu_topi(8),(int16_t)cpu_topi(12),(int16_t)cpu_topi(16)); break; \
    case 28: meg4_api_frect((uint8_t)cpu_topi(0),(int16_t)cpu_topi(4),(int16_t)cpu_topi(8),(int16_t)cpu_topi(12),(int16_t)cpu_topi(16)); break; \
    case 29: meg4_api_circ((uint8_t)cpu_topi(0),(int16_t)cpu_topi(4),(int16_t)cpu_topi(8),(uint16_t)cpu_topi(12)); break; \
    case 30: meg4_api_fcirc((uint8_t)cpu_topi(0),(int16_t)cpu_topi(4),(int16_t)cpu_topi(8),(uint16_t)cpu_topi(12)); break; \
    case 31: meg4_api_ellip((uint8_t)cpu_topi(0),(int16_t)cpu_topi(4),(int16_t)cpu_topi(8),(int16_t)cpu_topi(12),(int16_t)cpu_topi(16)); break; \
    case 32: meg4_api_fellip((uint8_t)cpu_topi(0),(int16_t)cpu_topi(4),(int16_t)cpu_topi(8),(int16_t)cpu_topi(12),(int16_t)cpu_topi(16)); break; \
    case 33: meg4_api_move((int16_t)cpu_topi(0),(int16_t)cpu_topi(4),(uint16_t)cpu_topi(8)); break; \
    case 34: meg4_api_left((uint16_t)cpu_topi(0)); break; \
    case 35: meg4_api_right((uint16_t)cpu_topi(0)); break; \
    case 36: meg4_api_up(); break; \
    case 37: meg4_api_down(); break; \
    case 38: meg4_api_color((uint8_t)cpu_topi(0)); break; \
    case 39: meg4_api_forw((uint16_t)cpu_topi(0)); break; \
    case 40: meg4_api_back((uint16_t)cpu_topi(0)); break; \
    case 41: meg4_api_spr((int16_t)cpu_topi(0),(int16_t)cpu_topi(4),(uint16_t)cpu_topi(8),(uint8_t)cpu_topi(12),(uint8_t)cpu_topi(16),(int8_t)cpu_topi(20),(uint8_t)cpu_topi(24)); break; \
    case 42: meg4_api_dlg((int16_t)cpu_topi(0),(int16_t)cpu_topi(4),(uint16_t)cpu_topi(8),(uint16_t)cpu_topi(12),(int8_t)cpu_topi(16),(uint16_t)cpu_topi(20),(uint16_t)cpu_topi(24),(uint16_t)cpu_topi(28),(uint16_t)cpu_topi(32),(uint16_t)cpu_topi(36),(uint16_t)cpu_topi(40),(uint16_t)cpu_topi(44),(uint16_t)cpu_topi(48),(uint16_t)cpu_topi(52)); break; \
    case 43: meg4_api_stext((int16_t)cpu_topi(0),(int16_t)cpu_topi(4),(uint16_t)cpu_topi(8),(uint16_t)cpu_topi(12),(uint8_t)cpu_topi(16),(uint8_t)cpu_topi(20),(int8_t)cpu_topi(24),(str_t)cpu_topi(28)); break; \
    case 44: meg4_api_remap((addr_t)cpu_topi(0)); break; \
    case 45:  val = meg4_api_mget((uint16_t)cpu_topi(0),(uint16_t)cpu_topi(4)); break; \
    case 46: meg4_api_mset((uint16_t)cpu_topi(0),(uint16_t)cpu_topi(4),(uint16_t)cpu_topi(8)); break; \
    case 47: meg4_api_map((int16_t)cpu_topi(0),(int16_t)cpu_topi(4),(uint16_t)cpu_topi(8),(uint16_t)cpu_topi(12),(uint16_t)cpu_topi(16),(uint16_t)cpu_topi(20),(int8_t)cpu_topi(24)); break; \
    case 48: meg4_api_maze((uint16_t)cpu_topi(0),(uint16_t)cpu_topi(4),(uint16_t)cpu_topi(8),(uint16_t)cpu_topi(12),(uint8_t)cpu_topi(16),(uint16_t)cpu_topi(20),(uint16_t)cpu_topi(24),(uint16_t)cpu_topi(28),(uint16_t)cpu_topi(32),(uint16_t)cpu_topi(36),(uint8_t)cpu_topi(40),(addr_t)cpu_topi(44)); break; \
    case 49:  val = meg4_api_getpad((int)cpu_topi(0),(int)cpu_topi(4)); break; \
    case 50:  val = meg4_api_prspad((int)cpu_topi(0),(int)cpu_topi(4)); break; \
    case 51:  val = meg4_api_relpad((int)cpu_topi(0),(int)cpu_topi(4)); break; \
    case 52:  val = meg4_api_getbtn((int)cpu_topi(0)); break; \
    case 53:  val = meg4_api_getclk((int)cpu_topi(0)); break; \
    case 54:  val = meg4_api_getkey((int)cpu_topi(0)); break; \
    case 55:  val = meg4_api_popkey(); break; \
    case 56:  val = meg4_api_pendkey(); break; \
    case 57:  val = meg4_api_lenkey((uint32_t)cpu_topi(0)); break; \
    case 58:  val = meg4_api_speckey((uint32_t)cpu_topi(0)); break; \
    case 59:  val = meg4_api_rand(); break; \
    case 60: fval = meg4_api_rnd(); break; \
    case 61: fval = meg4_api_float((int)cpu_topi(0)); break; \
    case 62:  val = meg4_api_int((float)cpu_topf(0)); break; \
    case 63: fval = meg4_api_floor((float)cpu_topf(0)); break; \
    case 64: fval = meg4_api_ceil((float)cpu_topf(0)); break; \
    case 65: fval = meg4_api_sgn((float)cpu_topf(0)); break; \
    case 66: fval = meg4_api_abs((float)cpu_topf(0)); break; \
    case 67: fval = meg4_api_exp((float)cpu_topf(0)); break; \
    case 68: fval = meg4_api_log((float)cpu_topf(0)); break; \
    case 69: fval = meg4_api_pow((float)cpu_topf(0),(float)cpu_topf(4)); break; \
    case 70: fval = meg4_api_sqrt((float)cpu_topf(0)); break; \
    case 71: fval = meg4_api_rsqrt((float)cpu_topf(0)); break; \
    case 72: fval = meg4_api_clamp((float)cpu_topf(0),(float)cpu_topf(4),(float)cpu_topf(8)); break; \
    case 73: fval = meg4_api_lerp((float)cpu_topf(0),(float)cpu_topf(4),(float)cpu_topf(8)); break; \
    case 74: fval = meg4_api_pi(); break; \
    case 75: fval = meg4_api_cos((uint16_t)cpu_topi(0)); break; \
    case 76: fval = meg4_api_sin((uint16_t)cpu_topi(0)); break; \
    case 77: fval = meg4_api_tan((uint16_t)cpu_topi(0)); break; \
    case 78:  val = meg4_api_acos((float)cpu_topf(0)); break; \
    case 79:  val = meg4_api_asin((float)cpu_topf(0)); break; \
    case 80:  val = meg4_api_atan((float)cpu_topf(0)); break; \
    case 81:  val = meg4_api_atan2((float)cpu_topf(0),(float)cpu_topf(4)); break; \
    case 82: fval = meg4_api_dotv2((addr_t)cpu_topi(0),(addr_t)cpu_topi(4)); break; \
    case 83: fval = meg4_api_lenv2((addr_t)cpu_topi(0)); break; \
    case 84: meg4_api_scalev2((addr_t)cpu_topi(0),(float)cpu_topf(4)); break; \
    case 85: meg4_api_negv2((addr_t)cpu_topi(0)); break; \
    case 86: meg4_api_addv2((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 87: meg4_api_subv2((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 88: meg4_api_mulv2((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 89: meg4_api_divv2((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 90: meg4_api_clampv2((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8),(addr_t)cpu_topi(12)); break; \
    case 91: meg4_api_lerpv2((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8),(float)cpu_topf(12)); break; \
    case 92: meg4_api_normv2((addr_t)cpu_topi(0)); break; \
    case 93: fval = meg4_api_dotv3((addr_t)cpu_topi(0),(addr_t)cpu_topi(4)); break; \
    case 94: fval = meg4_api_lenv3((addr_t)cpu_topi(0)); break; \
    case 95: meg4_api_scalev3((addr_t)cpu_topi(0),(float)cpu_topf(4)); break; \
    case 96: meg4_api_negv3((addr_t)cpu_topi(0)); break; \
    case 97: meg4_api_addv3((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 98: meg4_api_subv3((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 99: meg4_api_mulv3((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 100: meg4_api_divv3((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 101: meg4_api_crossv3((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 102: meg4_api_clampv3((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8),(addr_t)cpu_topi(12)); break; \
    case 103: meg4_api_lerpv3((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8),(float)cpu_topf(12)); break; \
    case 104: meg4_api_normv3((addr_t)cpu_topi(0)); break; \
    case 105: fval = meg4_api_dotv4((addr_t)cpu_topi(0),(addr_t)cpu_topi(4)); break; \
    case 106: fval = meg4_api_lenv4((addr_t)cpu_topi(0)); break; \
    case 107: meg4_api_scalev4((addr_t)cpu_topi(0),(float)cpu_topf(4)); break; \
    case 108: meg4_api_negv4((addr_t)cpu_topi(0)); break; \
    case 109: meg4_api_addv4((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 110: meg4_api_subv4((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 111: meg4_api_mulv4((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 112: meg4_api_divv4((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 113: meg4_api_clampv4((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8),(addr_t)cpu_topi(12)); break; \
    case 114: meg4_api_lerpv4((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8),(float)cpu_topf(12)); break; \
    case 115: meg4_api_normv4((addr_t)cpu_topi(0)); break; \
    case 116: meg4_api_idq((addr_t)cpu_topi(0)); break; \
    case 117: meg4_api_eulerq((addr_t)cpu_topi(0),(uint16_t)cpu_topi(4),(uint16_t)cpu_topi(8),(uint16_t)cpu_topi(12)); break; \
    case 118: fval = meg4_api_dotq((addr_t)cpu_topi(0),(addr_t)cpu_topi(4)); break; \
    case 119: fval = meg4_api_lenq((addr_t)cpu_topi(0)); break; \
    case 120: meg4_api_scaleq((addr_t)cpu_topi(0),(float)cpu_topf(4)); break; \
    case 121: meg4_api_negq((addr_t)cpu_topi(0)); break; \
    case 122: meg4_api_addq((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 123: meg4_api_subq((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 124: meg4_api_mulq((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 125: meg4_api_rotq((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 126: meg4_api_lerpq((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8),(float)cpu_topf(12)); break; \
    case 127: meg4_api_slerpq((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8),(float)cpu_topf(12)); break; \
    case 128: meg4_api_normq((addr_t)cpu_topi(0)); break; \
    case 129: meg4_api_idm4((addr_t)cpu_topi(0)); break; \
    case 130: meg4_api_trsm4((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8),(addr_t)cpu_topi(12)); break; \
    case 131: fval = meg4_api_detm4((addr_t)cpu_topi(0)); break; \
    case 132: meg4_api_addm4((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 133: meg4_api_subm4((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 134: meg4_api_mulm4((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 135: meg4_api_mulm4v3((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 136: meg4_api_mulm4v4((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(addr_t)cpu_topi(8)); break; \
    case 137: meg4_api_invm4((addr_t)cpu_topi(0),(addr_t)cpu_topi(4)); break; \
    case 138: meg4_api_trpm4((addr_t)cpu_topi(0),(addr_t)cpu_topi(4)); break; \
    case 139: meg4_api_trns((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(uint8_t)cpu_topi(8),(int16_t)cpu_topi(12),(int16_t)cpu_topi(16),(int16_t)cpu_topi(20),(uint16_t)cpu_topi(24),(uint16_t)cpu_topi(28),(uint16_t)cpu_topi(32),(float)cpu_topf(36)); break; \
    case 140:  val = meg4_api_inb((addr_t)cpu_topi(0)); break; \
    case 141:  val = meg4_api_inw((addr_t)cpu_topi(0)); break; \
    case 142:  val = meg4_api_ini((addr_t)cpu_topi(0)); break; \
    case 143: meg4_api_outb((addr_t)cpu_topi(0),(uint8_t)cpu_topi(4)); break; \
    case 144: meg4_api_outw((addr_t)cpu_topi(0),(uint16_t)cpu_topi(4)); break; \
    case 145: meg4_api_outi((addr_t)cpu_topi(0),(uint32_t)cpu_topi(4)); break; \
    case 146:  val = meg4_api_memsave((uint8_t)cpu_topi(0),(addr_t)cpu_topi(4),(uint32_t)cpu_topi(8)); break; \
    case 147:  val = meg4_api_memload((addr_t)cpu_topi(0),(uint8_t)cpu_topi(4),(uint32_t)cpu_topi(8)); break; \
    case 148: meg4_api_memcpy((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(uint32_t)cpu_topi(8)); break; \
    case 149: meg4_api_memset((addr_t)cpu_topi(0),(uint8_t)cpu_topi(4),(uint32_t)cpu_topi(8)); break; \
    case 150:  val = meg4_api_memcmp((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(uint32_t)cpu_topi(8)); break; \
    case 151:  val = meg4_api_deflate((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(uint32_t)cpu_topi(8)); break; \
    case 152:  val = meg4_api_inflate((addr_t)cpu_topi(0),(addr_t)cpu_topi(4),(uint32_t)cpu_topi(8)); break; \
    case 153: fval = meg4_api_time(); break; \
    case 154:  val = meg4_api_now(); break; \
    case 155:  val = meg4_api_atoi((str_t)cpu_topi(0)); break; \
    case 156:  val = meg4_api_itoa((int)cpu_topi(0)); break; \
    case 157: fval = meg4_api_val((str_t)cpu_topi(0)); break; \
    case 158:  val = meg4_api_str((float)cpu_topf(0)); break; \
    case 159:  val = meg4_api_sprintf((str_t)cpu_topi(0)); break; \
    case 160:  val = meg4_api_strlen((str_t)cpu_topi(0)); break; \
    case 161:  val = meg4_api_mblen((str_t)cpu_topi(0)); break; \
    case 162:  val = meg4_api_malloc((uint32_t)cpu_topi(0)); break; \
    case 163:  val = meg4_api_realloc((addr_t)cpu_topi(0),(uint32_t)cpu_topi(4)); break; \
    case 164:  val = meg4_api_free((addr_t)cpu_topi(0)); break; 
