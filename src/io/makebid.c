/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

#include "player.h"
#include "io.h"

bool
makebid(struct plr* sp)
{
    printf("bid: ");

    if(ginput(&sp->bid) == 0x0) { return false; }

    if(sp->bid > sp->m || sp->bid <= 0)
    {
        printf("You can't place a bet like that.\n");
        sp->bid = 0;
        sleep(1);
        return false;
    }

    sp->m -= sp->bid;

    return true;
}
