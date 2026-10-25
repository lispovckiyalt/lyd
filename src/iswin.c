#include "mechanics.h"
#include "player.h"
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>

bool
iswin(struct plr* sp)
{
    if (sp->m >= 1000000)
    {
        sp->isrun = false;
        printf("you win!");
    } else if(sp->m <= 0)
    {
        sp->isrun = false;
        printf("lose!");
    }

    if(!sp->isrun)
    {
        sleep(1);
        return true;
    }

    return false;
}
