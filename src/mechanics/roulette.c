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

    printf("You drew... %s\n", scolor);
    fflush(stdout);
    sleep(1);
    
    sp->m += (rp >= 950) ? sp->bid * 5 :
         (rp >= 500) ? sp->bid * 2 : 0;


    if (rp < 500)  { printf("oops дooks like you're out of luck\n"); sleep(1); fflush(stdout); }
}
