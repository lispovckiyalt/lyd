/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include "io.h"
#include "player.h"

int
get_spin_result(int rp, struct plr * sp)
{
    if(rp >= 950) { sp->bid *=  5; return 2 + sp->bid; } 
    else if (rp >= 500) { sp->bid *= 2; return 1  + sp->bid; } 
    else { sp->bid *= 2; return 0 + sp->bid; }
}
