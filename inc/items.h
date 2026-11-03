/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#pragma once

#include <stdbool.h>

struct luck
{
    char* name;
    double price;
    int* value;
};

struct items
{
    struct luck ItemLuck;
    void* current_item;
};
