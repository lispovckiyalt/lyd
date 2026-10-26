#include <stdbool.h>
#include "player.h"
#include "rend.h"
#include "io.h"
#include "lib.h"
#include "mechanics.h"


int
main(void)
{
    struct plr p = { .m = 100, .i = 0, .bid = 0, .isrun = true, .color = 0};
    while(p.isrun) {
        sclear();
        spl();
        rend_balance(p.m);
        if (iswin(&p)) { continue; }
        rend_m(p.i);
        ginput(&p.i);
        controller(&p);
    }
    return 0;
}
