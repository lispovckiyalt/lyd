#include "io.h"
#include <stdio.h>
#include <stdlib.h>
void
ginput(int* i) {
    char buf[10];
    fgets(buf, 10, stdin);
    char* end;

    long input  = strtol(buf,&end,10);

    *i = input;
}
