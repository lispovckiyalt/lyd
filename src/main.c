#include <stdbool.h>
#include "player.h"  /* user structure with default values */ /* /inc/player.h */
#include "rend.h" /* /inc/rend.h & src/rend */
#include "io.h" /* /inc/io.h & src/io */
#include "lib.h" /* inc/lib.h & src/lib/lib.c */
#include "mechanics.h" /* inc/mechanics.h & src/mechanics */


/*
 * sclear() Used to clear the screen. Clears the screen using ANSI. “sclear” stands for “Screen clear.” The source code is in lib/lib.c.
 * spl() Used to display a splash screen (displays the splash screen using the write function in unistd.h); the source code is in rend/spl.c
 * rend_balance(p.m) Displays the player's balance. (Displays it using the basic printf function.) The source code is in rend/rend_b.c
 * rend_m(p.i) Displays elements (in other words, a menu); the elements are stored in an array. The source code is in rend/rend_m.c
 * ginput(&p.i) Used for keyboard input; the result is stored in the function's first argument (a pointer to a variable). The source code is in io/ginput.c
 * controller(&p) Menu controller. Simply put, it is used to select menu items; it uses a switch-case statement to check the value of p.i (input). The source code is in io/controller.c
*/

int
main(void)
{
    struct plr p = { .m = 100, .i = 0, .bid = 0, .isrun = true, .color = 0};
    while(p.isrun) { 
        sclear(); 
        spl(); 
        rend_balance(p.m); 
        if (iswin(&p)) { continue; } 
        rend_m(p.i); 
        ginput(&p.i); 
        controller(&p); 
    }
    return 0;
}
