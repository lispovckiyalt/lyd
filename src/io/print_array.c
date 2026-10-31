/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "tcolor.h"

void
print(char ** array, size_t capacity, char * color)
{
    for(size_t index = 0; index < capacity; index++)
    {
        write(1, color, strlen(color));
        write(1, array[index], strlen(array[index]));
        write(1, RESET_COLOR, strlen(RESET_COLOR));
    }
}

void
print_array(char * color, char * first, ...)
{
    size_t count = 0;
    size_t capacity = 6;

    char ** dynamic_array = malloc(capacity * sizeof(char*));

    if (dynamic_array == 0x0) {return;}

    va_list args;
    va_start(args, first);

    char * currentarg = first;

    while (currentarg != NULL)
    {

        if (count >= capacity)
        {
            capacity *= 2;
            char ** new_allocated_memory = realloc(dynamic_array, capacity * sizeof(char*));

            if (new_allocated_memory == 0x0)
            {
                free(dynamic_array); 
                va_end(args); 
                return;
            }

            dynamic_array = new_allocated_memory; 
        }

        dynamic_array[count] = currentarg;
        count++;
        currentarg = va_arg(args, char*);
    }
    va_end(args);
    print(dynamic_array, count, color);
    free(dynamic_array);
}
