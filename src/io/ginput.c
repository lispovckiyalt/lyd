#include "io.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>
#include "lib.h"

bool sc(const char* str, int* in)
{
    char* e;
    long v = strtol(str, &e, 10);

    if (e == str || v > INT_MAX || v < INT_MIN)
    {
        return false;
    }

    *in = (int)v;
    return true;
}

void
ginput(int* i) {
    char buf[10];
    fgets(buf, 10, stdin);

    if (!sc(buf, i)) { printf("str parsing error"); }

    beep();
}
