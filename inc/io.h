/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#pragma once
#include <stdbool.h>
#include "player.h"

void
controller(struct plr* sp);

bool
makebid(struct plr* sp);

bool 
ginput(int* i);

int
gc(int rp, struct plr* sp);

void
print_array(char* color, char* first, ...);

char*
ccts(struct plr* sp);
