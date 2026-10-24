#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "player.h"
#include "rend.h"
#include "io.h"
#include "lib.h"


int
main(void)
{   
    srand((unsigned int)time(NULL));
    struct plr p = {100, 0, 0, true};
    while(p.isrun) {
        sclear();
        spl();
        rend_balance(p.m);
        rend_m(p.i);
        ginput(&p.i);
        controller(&p);
    }
    return 0;
}
