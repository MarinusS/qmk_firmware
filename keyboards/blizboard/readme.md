# blizboard

![blizboard](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [marinusS](https://github.com/marinusS)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*


Both halfs of the keyboard have to be flashed at least ones for the serial comminication to work. After that both half can be chosen to be plugged
in by usb (not advised to plug in both simulatneously) and actually hold different configurations.

## Flashing 

# Left side

In info.json set bootmagic key to (0, 0):

"bootmagic": {
        "matrix": [0, 0],
    },

Enter the bootloader in 2 ways:

* **Bootmagic reset**: Hold down the top left key and plug in the keyboard
* **Physical reset button**: Hold down the BOOTESEL key on the RP2040 and plug in the keyboard
 
Flash the firware with the following command:
qmk flash -kb blizboard -km via -bl uf2-split-left

# Right side

In info.json set bootmagic key to (4, 0):

"bootmagic": {
        "matrix": [4, 0],
    },

Enter the bootloader in 2 ways:

* **Bootmagic reset**: Hold down the top left key and plug in the keyboard
* **Physical reset button**: Hold down the BOOTESEL key on the RP2040 and plug in the keyboard
 
Flash the firware with the following command:
qmk flash -kb blizboard -km via -bl uf2-split-right

## Using via

The keyboard hasn't been merged in the official reposotory yet. To use via the via.jon file in the keymaps/via/ directory has to be uploaded to the 
web app (in the design tab).
