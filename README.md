# Nintendo Switch Port of DevilutionX (Diablo)

![](https://i.imgur.com/DKVB198.png)

### How To Play:
- Extract contents of diablo-nx.zip release into SDMC:\switch\diablo-nx
- Copy DIABDAT.MPQ from original Diablo game disc or GOG version.
- Launch diablo-nx.nro
- Enjoy :)

### Controls

- Left Analog : Move Hero
- Right Analog : Simulate Mouse
- B : Attack nearby enemies, talk to towns people and merchants. Pickup & Drop items in inventory.
- Y : Pickup gold, potions & equipment from ground, open chests and doors that are nearby. Use item when in inventory (read books etc.).
- X : Cast Spell, Previous Menu
- A : Inventory
- R : Character
- ZR : Drink Mana Potion
- ZL : Drink Heal Potion
- Left Analog Click : Quest Log
- Right Analog Click : Perform left mouse click action on selected object or monster
- Minus : Automap
- Plus : Game Menu

### Notes

There are lots of bugs. Check issues on the code repo.

### Compiling On Linux
```install devkitproA64, libzip, libpng, libjpeg, switch-freetype, switch-mesa, switch-glad, switch-glm, switch-sdl2, switch-sdl2_ttf, switch-sdl2_mixer, switch-libvorbis, switch-libmikmod```

```make```

### Compiling On Windows

- Install [devkitpro](https://sourceforge.net/projects/devkitpro/)
- Make the folders ```obj```, ```release``` and ```RomFS``` in devilution source code folder.
- Open ```Start Button > DevKitPro > MSys2```
- Type in ```pacman -S switch-freetype switch-mesa switch-glad switch-glm switch-sdl2 switch-sdl2_ttf switch-sdl2_mixer switch-libvorbis switch-libmikmod```
- Type in ```make```

### Compiling On MacOS

- Install [devkitpro](https://devkitpro.org/wiki/Getting_Started#macOS)
- Open Terminal
- Type in ```dkp-pacman -S switch-freetype switch-mesa switch-glad switch-glm switch-sdl2 switch-sdl2_ttf switch-sdl2_mixer switch-libvorbis switch-libmikmod```
- Type in ```make```

- .nro lives in release. Test with an emulator (RyuJinx) or real hardware.

### Credits
- Reverse engineered by GalaXyHaXz in 2018
- Switch Port by MVG in 2019
- Controller code by Jacob Fliss
- RetroArch team for the Switch mman.h file
- [sanctuary](https://github.com/sanctuary) - extensively documenting Diablo's game engine
- [BWAPI Team](https://github.com/bwapi) - providing library API to work with Storm
- [Ladislav Zezula](https://github.com/ladislav-zezula) - reversing PKWARE library, further documenting Storm
- [fearedbliss](https://github.com/fearedbliss) - being awe-inspiring
- Climax Studios & Sony - secretly helping with their undercover QA :P
- Blizzard North - wait, this was a typo!
- Depression - reason to waste four months of my life doing this ;)

And a special thanks to all the support and people who work on Devilution to make it possible! <3

# Legal
Devilution is released to the Public Domain. The documentation and function provided by Devilution may only be utilized with assets provided by ownership of Diablo.

Battle.net(R) - Copyright (C) 1996 Blizzard Entertainment, Inc. All rights reserved. Battle.net and Blizzard Entertainment are trademarks or registered trademarks of Blizzard Entertainment, Inc. in the U.S. and/or other countries.

Diablo(R) - Copyright (C) 1996 Blizzard Entertainment, Inc. All rights reserved. Diablo and Blizzard Entertainment are trademarks or registered trademarks of Blizzard Entertainment, Inc. in the U.S. and/or other countries.

Devilution and any of its' maintainers are in no way associated with or endorsed by Blizzard Entertainment(R).
