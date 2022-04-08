/* VARIATION TUI (USER INTERFACE) */
#ifndef _VN_UI_H
#define _VN_UI_H

void vn_cursor_visibility(int boolean); /* SET CURSOR VISIBILITY */

void vn_clrscr(void); /* CLEAR SCREEN */

void vn_gotoxy(int pos_x, int pos_y); /* SET CURSOR TO X AND Y POSITIONS */

void vn_cprint(char *str, char *fg_color, char *bg_color, char *str_style); /* PRINT WITH COLORS */

void vn_goto_cprint(char *str, char *fg_color, char *bg_color, char *str_style, int pos_x, int pos_y); /* PRINT WITH COLORS TO CERTAIN POSITIONS*/

#endif /* MADE BY @hanilr */