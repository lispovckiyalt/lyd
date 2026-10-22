#include "player.h"
#include "rend.h"
#include "io.h"


int
main(void)
{   struct plr p = {100, 0};
    
    /* render */
    spl();
    rend_balance(p.m);
    rend_m(p.i);
    ginput(&p.i);
    controller(p.i);

    return 0;
}
