#include "io.h"
#include <stdio.h>

void
makebid(long b)
{
    int i = (int)b; 
    int *p = &i;
    printf("bid: ");

    ginput(p);
}
