/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <limits.h>

#include "io.h"
#include "lib.h"
#include "tcolor.h"

bool 
sc(const char * str, int * input)
{
    char * end_ptr;
    long value = strtol(str, &end_ptr, 10);

    if (end_ptr == str || value > INT_MAX || value < INT_MIN)
    {
        return false;
    }

    *input = (int)value;
    return true;
}

bool
ginput(int * i) {
    char buf[10];

    fgets(buf, 10, stdin);
    __fpurge(stdin); 

    if (!sc(buf, i)) { printf("%s Unable to retrieve the string %s\n", COLOR_RED, RESET_COLOR); return false; }

    beep();
    return true;
}
