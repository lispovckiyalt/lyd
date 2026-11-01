/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <unistd.h>

#include "io.h"
#include "mechanics.h"

void 
controller(struct plr* sp)
{

    switch (sp->i) {
        case 1: 
            roulette(sp);
            break;

	    case 2: 
	        _exit(0);
	    
        default:
            return;
    }

}
