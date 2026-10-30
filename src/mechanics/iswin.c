/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <stdbool.h>
#include <unistd.h>

#include "io.h"
#include "mechanics.h"
#include "player.h"
#include "tcolor.h"

#define WINVALUE 1e6


bool
iswin(struct plr* sp)
{
    if (sp->m >= WINVALUE) {sp->isrun = false; print_array(COLOR_GREEN, "You won!\n", 0x0);}
    else if(sp->m <= 0)   {sp->isrun = false; print_array(COLOR_RED, "You 're broke Try again\n", 0x0);}
    return !sp->isrun;
}
