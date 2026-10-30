/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <stdio.h>
#include <unistd.h>

#include "io.h"
#include "lib.h"
#include "rend.h"

char*
ctext(int sc)
{
    switch (sc)
    {
        case 0:
            return "\033[35mBlack\033[0m";
            break;
        case 1:
            return "\033[37mWhite\033[0m";
            break;
        case 2:
            return "\033[32mGreen\033[0m";
            break;
    }

    return "NULL";
}

void
animate(int selectedcolor)
{
    const char* ets[4] = {"\033[35mBlack\033[0m", "\033[37mWhite\033[0m", "\033[32mGreen\033[0m"};

    for(size_t i = 0; i < 10; i++)
    {
        sclear();
        spl();
        int randomv = lrand(0, 2);
        printf("%s\n", ets[randomv]);
        usleep(300000);
    }
    sclear();
    spl();
    char* t = ctext(selectedcolor);

    usleep(300000);

    printf("%s\n", t);
}
