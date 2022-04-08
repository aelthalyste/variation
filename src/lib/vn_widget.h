/* VARIATION TUI (WIDGET) */
#ifndef _VN_WIDGET_H
#define _VN_WIDGET_H

void vn_bg(int pos_x, int pos_y, int width, int height, char *bg_color); /* SET BACKGROUND COLOR */

void vn_frame(int pos_x, int pos_y, int width, int height, char *fg_color, char *bg_color, char vertical_symbol, char horizontal_symbol); /* SET FRAME */

void vn_label(int pos_x, int pos_y, int width, int height, char *fg_color, char *bg_color, char* text_style, char *str); /* SET LABEL */

void vn_warn(int pos_x, int pos_y, int width, int height, char *fg_color, char *bg_color, char *frame_fg_color, char *frame_bg_color, char frame_vertical_symbol, char frame_horizontal_symbol, char *text_style, char *str, char *title); /* WARNING SCREEN */

#endif /* MADE BY @hanilr */