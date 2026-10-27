/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include "tcolor.h"
#include "rend.h"
#include <stdio.h>

void
rend_m(int i)
{
    (void)i;

    const char* obj[] = {"1. roulette\n ", "2. exit\n"};
    size_t arrsize = sizeof(obj) / sizeof(obj[0]);

    for(size_t e = 0; e < arrsize; e++)
    {
        printf("%s%s%s", COLOR_CYAN, obj[e], RESET_COLOR);
    }
}
