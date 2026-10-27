#include <stdio.h>
#include "lib.h"
#include "rend.h"
#include <unistd.h>
#include "tcolor.h"
void
rend_balance(int m)
{ 
    beep();
    printf("%s Balance: %i%s\n", COLOR_GREEN, m, RESET_COLOR);
}
