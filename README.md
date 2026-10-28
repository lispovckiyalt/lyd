# lyd

```

▄▄▄▄▄▄▄▄▄         ▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄ ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄   
▄       ▓     ░   ▄      ▓  ▄      █ ▄              ▀▄
█       ▒   ·░░░  █      ▒  ▒     ▒█ █               ▐▌
█       ░   ░▒▒░  ▓      ░  ░     ░█ ▓      ▒▀▀░     ░█
▓       █   ░░░   ▒      █  █      █ ▒      ░  ▒      █
░       █    ░ ·  ▐▌     █▄▄█     ┼░ ░      █  █▄     █
█ ┼     █       ·  ▀▄            ┼┼▒ █┼┼    █   ░    ┼░
█┼┼┼   ┼█▄▄▄▄▄▄▄▄    ▀▀▀▀▀▀▀█┼  ┼┼┼▓ █┼┼┼┼ ┼█   ▒  ┼┼┼▒
█┼┼┼ ┼┼┼┼┼┼┼┼┼┼┼░ ▓▀▀▀▀▀▀▓  ▒┼  ┼┼┼█ █┼┼┼┼┼┼█   ▓┼┼┼┼┼▓
▐▌┼┼┼┼┼┼┼┼┼┼┼┼┼┼▒ ▒┼┼┼┼┼┼▀▀▀▀┼┼┼┼┼▐▌ █┼┼┼┼┼┼█▄▄▄▀┼┼┼┼▐▌
·▀▄┼┼┼┼┼┼┼┼┼┼┼┼┼▓ ░┼┼┼┼┼┼┼┼┼┼┼┼┼┼▄▀  █┼┼┼┼┼┼┼┼┼┼┼┼┼┼▄▀ 
   ▀▀▀▀▀▀▀▀▀▀▀▀▀▀ ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀    ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀  

```

![C](https://img.shields.io/badge/Language-C-A8B9CC?style=flat&logo=c&logoColor=white) ![C23](https://img.shields.io/badge/Standard-C23-blue?style=flat) ![Linux](https://img.shields.io/badge/OS-Linux-FCC624?style=flat&logo=linux&logoColor=black) ![GCC](https://img.shields.io/badge/Compiler-GCC-2C6DB2?style=flat&logo=gnu&logoColor=white)



Terminal casino game written in C. Play with virtual money.

> [!WARNING]
> <strong><span style="color: red;">Status: WIP.</span></strong>    Splash screen, balance display and betting work. The roulette itself is not finished yet: bets are validated and deducted from the balance, but spinning and payouts are still to come.

## Features

- [x] Splash screen and balance display
- [x] Placing a bet (validated against the balance)
- [ ] Roulette spin and payouts
- [ ] More games

## Build

Prerequisite: Install SoX before building.

```sh

git clone https://github.com/lispovckiyalt/lyd.git
cd lyd
cmake -B build
cmake --build build
./build/lyd

```

## License

[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
