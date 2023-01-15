### sweep keymap
My keymap on aurora sweep with a pie

[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)

#### Install

Copy this repo in the folder :

    ~/qmk_firmware/keyboards/splitkb/aurora/sweep/keymaps/

#### Compile and flash

Change the master in the config.h file :

    // #define MASTER_LEFT
    #define MASTER_RIGHT

then :

    qmk compile && qmk flash

and :

    Click twice on the flash button and use nautilus for instance to clic on the keyboard.  
    Don't forget to flash with the double tap bootloader define before soldering.

#### Links

[qmk](https://docs.qmk.fm/#/)  
[ferris sweep](https://github.com/davidphilipbarr/Sweep)  
[splitkb](https://splitkb.com)

#### Keymap

All french letters are print with unicode.
Use the standard us keymap :

    setxkbmap -layout us

#### Combos

|     French       |                        |
|------------------|------------------------|
|   é + i          |   ç                    |
|   é + a          |   æ                    |
|   é + o          |   œ                    |
|   space + a      |   à                    |
|   space + e      |   è                    |
|   space + i      |   ì                    |
|   space + o      |   ò                    |
|   space + u      |   ù                    |
|   comma + a      |   â                    |
|   comma + e      |   ê                    |
|   comma + i      |   î                    |
|   comma + o      |   ô                    |
|   comma + u      |   û                    |
|   scolon + a     |   ä                    |
|   scolon + e     |   ë                    |
|   scolon + i     |   ï                    |
|   scolon + o     |   ö                    |
|   scolon + u     |   ü                    |
|   scolon + y     |   ÿ                    |

|      Keys        |                        |
|------------------|------------------------|
|   mouse + arrows |   adjust               |
|   arrows + f     |   fn                   |
|   enter + s      |   shifted enter        |

|   Parenthesis    |                        |
|------------------|------------------------|
|   y + e          |   (                    |
|   u + w          |   (                    |
|   x + e          |   [                    |
|   i + w          |   ]                    |
|   y + i          |   {                    |
|   u + x          |   }                    |

#### Leader

|   -                         |                        |
|-----------------------------|------------------------|
|   leader + M + S            |   mail short           |
|   leader + M + L            |   mail long            |
|   leader + D + E + G        |   °                    |
|   leader + C + O + P        |   ©                    |
|   leader + R + E + G        |   ®                    |
|   leader + D + I + A        |   ø                    |
|   leader + D + I + A + M    |   Ø                    |
|   leader + E + U + R        |   €                    |
|   leader + P + O + U        |   £                    |
|   leader + Y + E + N        |   ¥                    |
|   leader + C + E + N        |   ¢                    |
|   leader + P + I            |   π                    |
|   leader + P + I + I        |   Π                    |
|   leader + O + M + E        |   ω                    |
|   leader + O + M + E + G    |   Ω                    |
|   leader + U + P + C        |   ⁰                    |
|   leader + D + N + C        |   ₀                    |

|   -                         |                        |
|-----------------------------|------------------------|
|   leader + M + U + L        |   ×                    |
|   leader + D + I + V        |   ÷                    |
|   leader + P + M            |   ±                    |
|   leader + I + N + E        |   ≠                    |
|   leader + A + L + M        |   ≈                    |
|   leader + S + Q + U        |   √                    |
|   leader + I + N + F        |   ∞                    |
|   leader + < + <            |   ≤                    |
|   leader + > + >            |   ≥                    |
|   leader + Q + S + T        |   ¼                    |
|   leader + Q + S + G        |   ½                    |
|   leader + H + S + T        |   ¾                    |

|   -                         |                        |
|-----------------------------|------------------------|
|   leader + F + L + A        |   ⚡                   |
|   leader + S + P + A        |   ✨                   |
|   leader + O + W + D        |   ⛔                   |
|   leader + C + O + F        |   ☕                   |
|   leader + U + M + B        |   ☔                   |
|   leader + Y + E + S        |   ✅                   |
|   leader + N + O            |   ❎                   |
|   leader + C + R + O        |   ❌                   |
|   leader + ! + !            |   ❓                   |
|   leader + ! +              |   ❗                   |
|   leader + ! + ! + G        |   ❔                   |
|   leader + ! + G            |   ❕                   |

#### Layouts

![base](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/base.png "layout")  
![numeric](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/numeric.png "layout")  
![mouse](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/mouse.png "layout")  
![arrows](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/arrows.png "layout")  
![adjust](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/adjust.png "layout")  
![fn](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/fn.png "layout")
![combo](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/combos.png "layout")

