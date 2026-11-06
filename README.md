<div align="center">

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

### A terminal casino in pure C. Virtual money, real thrill.

![C](https://img.shields.io/badge/Language-C99-6E7681?style=for-the-badge&logo=c&logoColor=white&labelColor=6E7681)
![Linux](https://img.shields.io/badge/OS-Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![GCC](https://img.shields.io/badge/Compiler-GCC-A42E2B?style=for-the-badge&logo=gnu&logoColor=white)
![Status](https://img.shields.io/badge/Status-Playable-2EA44F?style=for-the-badge)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue?style=for-the-badge)](LICENSE)

[Features](#features) · [Build](#build) · [Roadmap](#roadmap) · [License](#license)

</div>

---

> [!NOTE]
> **Status: playable.** The core mechanics are done: splash screen, balance, betting and roulette.
> More games may come later.

## Features

| Status | Feature | Description |
|:------:|---------|-------------|
| Done | **Splash screen** | ASCII intro and balance display |
| Done | **Betting** | Every bet is validated against your balance |
| Done | **Roulette** | Spin the wheel and get paid out |
| Planned | **More games** | Not decided yet |

## Build

**Requirements:** `gcc`, `cmake`, [`SoX`](https://sox.sourceforge.net/) (install it before building)

```sh
git clone https://github.com/lispovckiyalt/lyd.git
cd lyd
cmake -B build
cmake --build build
./build/lyd
```

<details>
<summary><b>Installing SoX</b></summary>

```sh
# Arch
sudo pacman -S sox

# Debian / Ubuntu
sudo apt install sox

# Fedora
sudo dnf install sox
```

</details>

## Roadmap

- [x] Splash screen and balance display
- [x] Placing a bet (validated against the balance)
- [x] Roulette spin and payouts
- [ ] More games

## License

Released under the [MIT License](LICENSE).

<div align="center">
<sub>Play responsibly. The money is fake, the fun is not.</sub>
</div>
