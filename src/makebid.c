#include "player.h"
#include "io.h"
#include <stdio.h>
#include <unistd.h>
void
makebid(struct plr** sp)
{
    printf("bid: ");

    ginput(&(*sp)->bid);

    if((*sp)->bid >= (*sp)->m || (*sp)->bid <= 0)
    {
        printf("the bet cannot be higher/lower than the balance\n");
        fflush(stdout);
        (*sp)->bid = 0;
        sleep(1);
        return;
    }

    (*sp)->m -= (*sp)->bid;
}
