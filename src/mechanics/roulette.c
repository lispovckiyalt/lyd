/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

#include "io.h"
#include "mechanics.h"
#include "lib.h"
#include "tcolor.h"

void
get_color(struct plr * sp)
{
    print_array(COLOR_RED, "Color?\n 0: Black,\n 1: White,\n 2: Green\n", NULL);

    ginput(&sp->color);

    sp->color = (sp->color >= 0 && sp->color <= 2) ? sp->color : 0;
}

void 
roulette(struct plr * sp)
{
    if (!makebid(sp)) { return; }

    get_color(sp);

    int random_chance = lrand(0, 1000);
    // get_spin_result returns (color + bid). Subtract bid to get the pure color.
    int result = (get_spin_result(random_chance, sp) - sp->bid);
    char * selected_color = ccts(sp->color);

    print_array(COLOR_WHITE, "You drew... ", selected_color, "\n", 0x0);

    animate(result);

    sleep(1);

    if(result == sp->color)
    {
        sp->m += sp->bid;
        printf("%s You're in luck—you've been credited with: %d%s\n", COLOR_GREEN, sp->bid, RESET_COLOR);
        fflush(stdout);
        sleep(1);
    } 
    else { printf("You're out of luck—try a different color.\n"); sleep(1); }
}
