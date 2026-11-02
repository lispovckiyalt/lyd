/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#pragma once

#include <stdbool.h>

#include "player.h"

struct luck
{
    char* name;
    int price;
    int* value;
};

struct items
{
    struct luck ItemLuck;
    void* current_item;
};


bool 
iswin(struct plr * sp);

void 
roulette(struct plr * sp);

void
upgrades(struct plr * sp, struct items* Items);
