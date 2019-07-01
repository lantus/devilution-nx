# Nintendo Switch Port of DevilutionX (Diablo)

![alt text](https://i.imgur.com/DKVB198.png)

### How To Play:
- Extract contents of diablo-nx.zip release into SDMC:\switch\diablo-nx
- Copy DIABDAT.MPQ from original Diablo game disc or GOG version.
- Launch diablo-nx.nro
- Enjoy :)

### Controls

- Left Analog : Move Hero
- B : Attack
- Y : Open Chest/Talk/Pick Up
- X : Inventory
- R : Charactor
- Right Analog : Simulate Mouse
- ZR : Left Mouse Click
- ZL : Drink Heal Potion
 
### Compiling
```
install devkitproA64, install libzip, libpng, libjpeg, switch-freetype, switch-mesa, switch-glad, switch-glm, switch-sdl2, switch-sdl2_ttf, switch-sdl2_mixer, switch-libvorbis
Download source code, build with MAKE. If something failed check dependencies above
.nro lives in release.

Test with an emulator (RyuJinx) or real hardware
```
 
# Credits
- Reverse engineered by GalaXyHaXz in 2018
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
