/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <stdio.h>

#include "mechanics.h"
#include "io.h"


void
CheckItem(struct items * Items, int * input)
{
    switch (*input)
    {
        case 1:
            Items->current_item = &Items->ItemLuck;
            return;

        default:
            Items->current_item = &Items->ItemLuck;
            return;
    }
}

void
buyItem(struct items * Item, struct plr * sp)
{
    struct luck *selectedluck = (struct luck *)Item->current_item;


    if (sp->m < selectedluck->price)
    {
        printf("can't afford\n");
        return;
    }


    sp->m -= selectedluck->price;
    selectedluck->price *= 2;
    *selectedluck->value += 100;
}

void
upgradecontroller(int * input, struct items * Items, struct plr* sp)
{
    CheckItem(Items, input);

    switch (*input)
    {
        case 1:
            buyItem(Items, sp);
            break;
    }
}


void
upgrades(struct plr * sp, struct items * Items)
{

    printf("1. Item: %s Price: %d Current Value: %d\n", 
            Items->ItemLuck.name,
            Items->ItemLuck.price,
            *Items->ItemLuck.value
    );

    printf("> ");

    ginput(&sp->i);
    upgradecontroller(&sp->i, Items, sp);
}
