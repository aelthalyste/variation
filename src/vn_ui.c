/* VARIATION TUI (USER INTERFACE) */

/* STANDARD LIBRARY */
#include <stdio.h>
#include <string.h>

/* DIY LIBRARY */
#include "lib/vn_ui.h"
#include "lib/vn_conf.h"

void vn_cursor_visibility(int boolean)
{
    if(boolean == 1) { printf("%s", cursor_visible); }
    else { printf("%s", cursor_invisible); }
}

void vn_clrscr(void) { printf("%s", clear_screen); }

void vn_gotoxy(int pos_x, int pos_y) { printf("\033[%d;%dH", pos_y, pos_x); }

void vn_cprint(char *str, char *fg_color, char *bg_color, char *str_style)
{ /* IF YOU DON'T WANT TO USE ARGUMENTS THEN ENTER  IN DOUBLE QUOTATION MARKS WITH GAP */
    printf("%s%s%s%s%s", fg_color, bg_color, str_style, str, esc_reset);
} /* EXAMPLE: print_c("temp", "", "", ""); */

void vn_goto_cprint(char *str, char *fg_color, char *bg_color, char *str_style, int pos_x, int pos_y)
{
    vn_gotoxy(pos_x, pos_y);
    vn_cprint(str, fg_color, bg_color, str_style);
}

/* MADE BY @hanilr */