#pragma once
#include <stdbool.h>
#include "player.h"

void
controller(struct plr* sp);

bool
makebid(struct plr* sp);

void 
ginput(int* i);

char*
ccts(struct plr* sp);
