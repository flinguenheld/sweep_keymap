### sweep keymap
My keymap on aurora sweep with a pie

[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)

#### Install

Clone this repo in the folder :

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
|   dot + a        |   ä                    |
|   dot + e        |   ë                    |
|   dot + i        |   ï                    |
|   dot + o        |   ö                    |
|   dot + u        |   ü                    |
|   dot + y        |   ÿ                    |


#### Leader

| -                  |                        |
|--------------------|------------------------|
|   M + S            |   mail short           |
|   M + L            |   mail long            |
|   D + E + G        |   °                    |
|   C + O + P        |   ©                    |
|   R + E + G        |   ®                    |
|   D + I + A        |   ø                    |
|   D + I + A + M    |   Ø                    |
|   E + U + R        |   €                    |
|   P + O + U        |   £                    |
|   Y + E + N        |   ¥                    |
|   C + E + N        |   ¢                    |
|   P + I            |   π                    |
|   P + I + I        |   Π                    |
|   O + M + E        |   ω                    |
|   O + M + E + G    |   Ω                    |
|   U + P + C        |   ⁰                    |
|   D + N + C        |   ₀                    |

| -                  |                        |
|--------------------|------------------------|
|   M + U + L        |   ×                    |
|   D + I + V        |   ÷                    |
|   P + M            |   ±                    |
|   I + N + E        |   ≠                    |
|   A + L + M        |   ≈                    |
|   S + Q + U        |   √                    |
|   I + N + F        |   ∞                    |
|   < + <            |   ≤                    |
|   > + >            |   ≥                    |
|   Q + S + T        |   ¼                    |
|   Q + S + G        |   ½                    |
|   H + S + T        |   ¾                    |

| -                  |                        |
|--------------------|------------------------|
|   F + L + A        |   ⚡                   |
|   S + P + A        |   ✨                   |
|   O + W + D        |   ⛔                   |
|   C + O + F        |   ☕                   |
|   U + M + B        |   ☔                   |
|   Y + E + S        |   ✅                   |
|   N + O            |   ❎                   |
|   C + R + O        |   ❌                   |
|   ?                |   ❔                   |
|   !                |   ❕                   |
|   ? + ?            |   ❓                   |
|   ! + !            |   ❗                   |

#### Layouts

![base](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/base.png "layout")  
![numeric](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/numeric.png "layout")  
![mouse](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/mouse.png "layout")  
![arrows](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/arrows.png "layout")  
![adjust](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/adjust.png "layout")  
![fn](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/fn.png "layout")  
![combo](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/combos.png "layout")  
![combo2](https://raw.githubusercontent.com/FLinguenheld/sweep_keymap/main/images/combos2.png "layout")  
