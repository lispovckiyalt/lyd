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
roulette(struct plr* sp)
{
    if (!makebid(sp)) { return; }
    print_array(COLOR_RED, "Color?\n 0: Black,\n 1: White,\n 2: Green\n", NULL);
    ginput(&sp->color);
    sp->color = (sp->color >= 0 && sp->color <= 2) ? sp->color : 0;

    char* scolor = ccts(sp->color);

    int rp = lrand(0, 1000);
    int c = (gc(rp, sp) - sp->bid);
    printf("You drew... %s\n", scolor);
    fflush(stdout);
    animate(c);
    sleep(1);

    if(c == sp->color)
    {
        sp->m += sp->bid;
        printf("u lucky!\n");
        sleep(1);
    } else { printf("You're out of luck—try a different color.\n"); sleep(1); }
}
