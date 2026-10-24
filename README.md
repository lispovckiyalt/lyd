# lyd

Terminal casino game written in C. Play with virtual money.

**Status: WIP.** Splash screen, balance display and betting work. The roulette itself is not finished yet: bets are validated and deducted from the balance, but spinning and payouts are still to come.

## Features

- [x] Splash screen and balance display
- [x] Placing a bet (validated against the balance)
- [ ] Roulette spin and payouts
- [ ] More games

## Build

```sh
git clone https://github.com/lispovckiyalt/lyd.git
cd lyd
cmake -B build
cmake --build build
./build/lyd
```

## License

[MIT](LICENSE)
