#include "io.h"
#include "mechanics.h"
#include "lib.h"
#include <stdio.h>
#include <stdlib.h>

void 
roulette(struct plr* sp)
{
    makebid(sp);
    int rp = lrand(0, 1000);

    printf("%d\n", rp);

    for (;;) {}
}
