/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <stdbool.h>
#include <stdlib.h>

#include "player.h"     /* struct plr: player state */
#include "rend.h"       /* screen rendering */
#include "io.h"         /* input and menu controller */
#include "lib.h"        /* utilities (sclear) */
#include "mechanics.h" /* game rules (iswin) */
#include "items.h"     /* shop items */



/* Main loop: draw the screen, read input, handle the chosen menu item. */
int
main(void)
{
    struct plr p = { .m = 1000, .i = 0, .bid = 0, .isrun = true, .color = 0, .luck = 0 };

    struct items game_items = {0};

    game_items.ItemLuck.name = "Luck";
    game_items.ItemLuck.price = 100;
    game_items.ItemLuck.value = &p.luck;

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
        controller(&p, &game_items);
    }

    return 0;
}
