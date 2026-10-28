#include "io.h"
#include "player.h"

int
gc(int rp, struct plr* sp)
{
    if(rp >= 950) { sp->bid *=  5; return 2 + sp->bid; } else if (rp >= 500) { sp->bid *= 2; return 1  + sp->bid; } else { sp->bid *= 2; return 0 + sp->bid; }
}
