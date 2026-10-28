/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include "io.h"
#include "mechanics.h"
#include "lib.h"
#include <stdio.h>
#include <unistd.h>

void 
roulette(struct plr* sp)
{
    if (!makebid(sp)) { return; }
    printf("color?\n 0 = black,\n 1 = white,\n 2 = green\n ");
    ginput(&sp->color);
    sp->color = (sp->color >= 0 && sp->color <= 2) ? sp->color : 0;

    char* scolor = ccts(sp);

    int rp = lrand(0, 1000);
    int c = gc(rp, sp);
    printf("You drew... %s\n", scolor);
    fflush(stdout);
    sleep(1);

    if((c -= sp->bid) == sp->color)
    {
        sp->m += sp->bid;
        printf("u lucky!\n");
        sleep(1);
    } else { printf("You're out of luck—try a different color."); sleep(1); }
}
