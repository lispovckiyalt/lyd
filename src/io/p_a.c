/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#include "tcolor.h"

void
p(char* obj[6], size_t s, char* c)
{
    for(size_t j = 0; j < s; j++)
    {
        printf("%s%s%s", c, obj[j], RESET_COLOR );
    }

    fflush(stdout);
}

void
print_array(char* color, char* first, ...)
{
    size_t co = 0;
    size_t capacity = 6;

    char** obj = malloc(capacity * sizeof(char*));

    va_list args;
    va_start(args, first);

    char *c = first;

    while (c != NULL)
    {
        if (co >= capacity)
        {
            capacity *= 2;
            obj = realloc(obj, capacity * sizeof(char*));
        }

        obj[co] = c;
        co++;
        c = va_arg(args, char*);
    }
    va_end(args);
    p(obj, co, color);
}
