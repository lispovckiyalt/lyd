/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <stdbool.h>

#include "player.h"     /* struct plr: player state */
#include "rend.h"       /* screen rendering */
#include "io.h"         /* input and menu controller */
#include "lib.h"        /* utilities (sclear) */
#include "mechanics.h"  /* game rules (iswin) */

/* Main loop: draw the screen, read input, handle the chosen menu item. */
int
main(void)
{
    struct plr p = { .m = 100, .i = 0, .bid = 0, .isrun = true, .color = 0 };

    while (p.isrun) {
        sclear();
        spl();
        rend_balance(p.m);

        /* On a win the round is over: skip the menu and restart the frame. */
        if (iswin(&p)) {
            continue;
        }

        rend_menu();
        ginput(&p.i);
        controller(&p);
    }
    return 0;
}
