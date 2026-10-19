#include <stdio.h>
#include "lib.h"
#include "rend.h"
#include <unistd.h>

void
rend_balance(int m)
{ 
    beep();
    printf("Balance: %i\n", m);
}
