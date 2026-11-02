/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <stdio.h>

#include "mechanics.h"

void
upgrades(struct plr * sp)
{
    char * items[1] = {"Luck: "};
    int values[3];

    values[0] = sp->luck;

    printf("%s%d", items[0], values[0]);
    fflush(stdout);

    for(;;);
}
