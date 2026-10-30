/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <unistd.h>

#include "lib.h"

void
sclear()
{
    write(1, "\033[2J\033[H", 7);
}
