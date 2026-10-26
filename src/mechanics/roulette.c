#include "io.h"
#include "mechanics.h"
#include "lib.h"
#include <stdio.h>


void 
roulette(struct plr* sp)
{
    makebid(sp);
    printf("color?\n 0 = black,\n 1 = white,\n 2 = green\n ");
    ginput(&sp->color);
    sp->color = (sp->color >= 0 && sp->color <= 2) ? sp->color : 0;
    printf("%d", sp->color);

    int rp = lrand(0, 1000);
}
