#pragma once
#include <stdbool.h>

struct plr {
    int m;
    int i;
    bool isrun;
};

void
controller(struct plr* sp);

void 
ginput(int* i);
