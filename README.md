# gfn-antiafk

A tiny Windows utility that prevents GeForce NOW from idling out your
session by sending a periodic, harmless keypress.

## What it does

Every 4 minutes it sends a single `F13` key press/release to the local
machine. `F13` is a real virtual key that almost nothing binds to, so it
registers as activity without interfering with any running game or app.
Press `INSERT` at any time to stop.

This is an anti-idle keep-alive, useful for keeping a cloud streaming
session from closing while you're between games or away from the keyboard.
It does not touch, read, or automate any game, it just presses a dead key
on your own machine.

## Usage

Run the executable. Make sure the GeForce NOW window has focus so the
keypress is registered as activity. Press `INSERT` to stop.

## Notes

- Keeps the **session** alive — it won't keep you in a live match, and
  it isn't a substitute for actually playing. Games have their own
  AFK detection.
- The GeForce NOW window needs focus for the keypress to count.
