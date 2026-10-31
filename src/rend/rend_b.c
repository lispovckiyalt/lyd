/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <stdio.h>
#include <unistd.h>

#include "lib.h"
#include "rend.h"
#include "tcolor.h"

void
rend_balance(int money)
{ 
    beep();
    printf("%s Balance: %i%s\n", COLOR_GREEN, money, RESET_COLOR);
}
