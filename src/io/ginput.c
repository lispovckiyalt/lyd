/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */


#include "io.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <limits.h>
#include "lib.h"
#include "tcolor.h"

bool sc(const char* str, int* in)
{
    char* e;
    long v = strtol(str, &e, 10);

    if (e == str || v > INT_MAX || v < INT_MIN)
    {
        return false;
    }

    *in = (int)v;
    return true;
}

bool
ginput(int* i) {
    char buf[10];
    fgets(buf, 10, stdin);
    __fpurge(stdin); 
    if (!sc(buf, i)) { printf("%s String Parsing Error %s\n", COLOR_RED, RESET_COLOR); return false; }

    beep();
    return true;
}
