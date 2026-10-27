#include "io.h"
#include "player.h"

char*
ccts(struct plr* sp)
{
    switch (sp->color)
    {
        case 0:
            return "Black";
            break;
        case 1:
            return "White";
            break;
        case 2:
            return "Green";
            break;
    }

    return "err";
}
