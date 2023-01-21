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
[bépo](https://bepo.fr/wiki/Accueil)

#### Keymap

All french letters are print with unicode.
Use the standard us keymap :

    setxkbmap -layout us

#### Layouts

![base](images/base.png)  
![numeric](images/numeric.png)  
![mouse](images/mouse.png)  
![arrows](images/arrows.png)  
![adjust](images/adjust.png)  
![fn](images/fn.png)  
![combo](images/combos.png)  
![combo2](images/combos2.png)  

#### French

|        -         |                        |
|------------------|------------------------|
|   space + e      |   é                    |
|   space + i      |   ç                    |
|   space + a      |   æ                    |
|   space + o      |   œ                    |
|   comma + a      |   à                    |
|   comma + e      |   è                    |
|   comma + i      |   ì                    |
|   comma + o      |   ò                    |
|   comma + u      |   ù                    |
|   enter + a      |   â                    |
|   enter + e      |   ê                    |
|   enter + i      |   î                    |
|   enter + o      |   ô                    |
|   enter + u      |   û                    |
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
|   U + P + F        |   ⁰                    |
|   D + N + F        |   ₀                    |

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
|   F + S + T        |   ¼                    |
|   F + S + G        |   ½                    |
|   F + H + T        |   ¾                    |

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
