#include "io.h"
#include <stdio.h>

void controller(int i)
{
    switch (i) {
        case 1: {
            printf("1");
            break;
        }
        default:
            return;
    }
}
