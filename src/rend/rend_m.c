/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include "rend.h"
#include "io.h"
#include "tcolor.h"

void
rend_menu(void)
{
    print_array(COLOR_RED, "1: Roulette\n", "2: Exit\n", 0x0); 
}
