#include "player.h"
#include "rend.h"

int
main(void)
{   struct plr p = {100};
    /* render */
    spl();
    rend_balance(p.m);
    return 0;
}
