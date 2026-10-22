
#include <stdbool.h>
#include "player.h"
#include "rend.h"
#include "io.h"
#include "lib.h"

int
main(void)
{   struct plr p = {100, 0, true};

    while(p.isrun) {
        sclear();
        spl();
        rend_balance(p.m);
        rend_m(p.i);
        ginput(&p.i);
        controller(p.i);
    }
    return 0;
}
