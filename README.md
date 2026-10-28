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

![C](https://img.shields.io/badge/Language-C-6E7681?style=for-the-badge&logo=c&logoColor=white&labelColor=6E7681) ![C99](https://img.shields.io/badge/Standard-C99-6E7681?style=for-the-badge&logo=c&logoColor=white&labelColor=6E7681) ![Linux](https://img.shields.io/badge/OS-Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black) ![GCC](https://img.shields.io/badge/Compiler-GCC-A42E2B?style=for-the-badge&logo=gnu&logoColor=white)


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
