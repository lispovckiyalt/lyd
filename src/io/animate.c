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

void
animate(int color)
{
    const char * array[3] = {"\033[35mBlack\033[0m", "\033[37mWhite\033[0m", "\033[32mGreen\033[0m"};

    for(size_t index = 0; index < 10; index++)
    {
        int random_value = lrand(0, 2);
        printf("%s\n", array[random_value]);
        usleep(300000);
    }
    usleep(300000);

    const char * selected_color = ccts(color);

    printf("%s\n", selected_color);
}
