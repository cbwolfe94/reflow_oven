#ifndef TYPE_DEFS_H
#define TYPE_DEFS_H

enum bool_t {
    FALSE,
    TRUE
};

/*
struct function_set_t {
    enum bool_t interface_type;
    enum bool_t line_display;
    enum bool_t char_set;
};

struct display_control_t {
    enum bool_t on_off;
    enum bool_t cursor_enable;
    enum bool_t cursor_blink;
};

struct entry_mode_set_t {
    enum bool_t cursor_direction;
    enum bool_t display_shift;
};
*/
struct lcd_t {
    enum bool_t mode;
    enum bool_t interface_type;
    enum bool_t line_display;
    enum bool_t char_set;
    enum bool_t on_off;
    enum bool_t cursor_enable;
    enum bool_t cursor_blink;
    enum bool_t cursor_direction;
    enum bool_t display_shift;
};

#endif