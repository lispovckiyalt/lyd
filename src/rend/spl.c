/*
 * Copyright (c) 2026 lispovckiyalt
 *
 * This software is released under the MIT License.
 * See the LICENSE file in the project root for full license information.
 */

#include <string.h>
#include <unistd.h>
#include "rend.h"
#include "tcolor.h"

void
spl()
{
    const char* sprite =
        COLOR_RED"▄▄▄▄▄▄▄▄▄         ▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄ ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄   \n"
        "▄       ▓     ░   ▄      ▓  ▄      █ ▄              ▀▄\n"
        "█       ▒   ·░░░  █      ▒  ▒     ▒█ █               ▐▌\n"
        "█       ░   ░▒▒░  ▓      ░  ░     ░█ ▓      ▒▀▀░     ░█\n"
        "▓       █   ░░░   ▒      █  █      █ ▒      ░  ▒      █\n"
        "░       █    ░ ·  ▐▌     █▄▄█     ┼░ ░      █  █▄     █\n"
        "█ ┼     █       ·  ▀▄            ┼┼▒ █┼┼    █   ░    ┼░\n"
        "█┼┼┼   ┼█▄▄▄▄▄▄▄▄    ▀▀▀▀▀▀▀█┼  ┼┼┼▓ █┼┼┼┼ ┼█   ▒  ┼┼┼▒\n"
        "█┼┼┼ ┼┼┼┼┼┼┼┼┼┼┼░ ▓▀▀▀▀▀▀▓  ▒┼  ┼┼┼█ █┼┼┼┼┼┼█   ▓┼┼┼┼┼▓\n"
        "▐▌┼┼┼┼┼┼┼┼┼┼┼┼┼┼▒ ▒┼┼┼┼┼┼▀▀▀▀┼┼┼┼┼▐▌ █┼┼┼┼┼┼█▄▄▄▀┼┼┼┼▐▌\n"
        "·▀▄┼┼┼┼┼┼┼┼┼┼┼┼┼▓ ░┼┼┼┼┼┼┼┼┼┼┼┼┼┼▄▀  █┼┼┼┼┼┼┼┼┼┼┼┼┼┼▄▀ \n"
        "   ▀▀▀▀▀▀▀▀▀▀▀▀▀▀ ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀    ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀     " RESET_COLOR "\n";

    write(1, sprite, strlen(sprite));
}


