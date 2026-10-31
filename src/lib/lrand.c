/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <sys/random.h>

#include "lib.h"


int
lrand(int min, int max)
{
    unsigned int buffer; 
    if(getrandom(&buffer, sizeof(buffer), 0) == -1) { return min; }
    unsigned int r = (unsigned int)(max - min + 1);
    unsigned int result = (buffer % r) + (unsigned int)min;
    return (int)result;
}
