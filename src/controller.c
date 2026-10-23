#include "io.h"
#include <unistd.h>
#include <stdio.h>
#include "mechanics.h"

void controller(struct plr* sp)
{

    switch (sp->i) {
        case 1: {
            roulette(sp->m);
            break;
        }
	    case 2: {
	        _exit(0);
	    }
        default:
            return;
    }

}
