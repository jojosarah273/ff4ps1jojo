# FF4 SNES — art source map (from the sprite IPS + the decomp)

Community sprite IPS patches replace the base game's art at
FIXED ROM offsets, so their merged runs reveal exactly where
the original graphics live. The decomp's decoded ranges pin
formats/palettes. THE PS1 REUSED THIS ART (no new sprites).

## Patch-derived regions (what the IPS hit)
| category | region | bytes | likely art |
|----------|--------|-------|------------|
| battle sprites | 0x007FDC-0x1D0800 | 32497 | - |
| (big run) | 0x0D01F6-0x0D06CF | 1241 | - |
| (big run) | 0x0D49F6-0x0D4EC0 | 1226 | - |
| (big run) | 0x0D41F8-0x0D46C0 | 1224 | - |
| battle sprites + map sprites | 0x007FDC-0x1D0BFF | 17431 | - |
| (big run) | 0x0D41FA-0x0D45FE | 1028 | - |
| (big run) | 0x1D01F8-0x1D053E | 838 | - |
| (big run) | 0x0D29FA-0x0D2D3C | 834 | - |
| community patches | 0x007FDC-0x0FFF08 | 46245 | - |
| (big run) | 0x0FBCC0-0x0FC4FA | 2106 | - |
| (big run) | 0x0E8F51-0x0E953D | 1516 | - |
| (big run) | 0x0E3250-0x0E381D | 1485 | - |
| enhanced color (4bpp) experimental | 0x001528-0x1F7DE9 | 607588 | - |
| (big run) | 0x0806C5-0x08733E | 27769 | - |
| (big run) | 0x1E0600-0x1E5280 | 19584 | - |
| (big run) | 0x08B26E-0x08FA38 | 18378 | - |
| map sprites | 0x007FDC-0x1D0BFF | 30026 | - |
| (big run) | 0x0D11FF-0x0D153D | 830 | - |
| (big run) | 0x0D97A8-0x0D9AB8 | 784 | - |
| (big run) | 0x1D0900-0x1D0BFF | 767 | - |
| monsters | 0x010B4F-0x1963A3 | 237654 | - |
| (big run) | 0x174F00-0x177838 | 10552 | - |
| (big run) | 0x161690-0x162F91 | 6401 | - |
| (big run) | 0x15C57C-0x15DD45 | 6089 | - |
| portraits | 0x0000B5-0x200000 | 1358342 | - |
| (big run) | 0x100000-0x200000 | 1048576 | - |
| (big run) | 0x0B831F-0x0CFE65 | 97094 | - |
| (big run) | 0x080002-0x090000 | 65534 | - |
| portraits + map sprites | 0x068006-0x10CAFE | 1024 | - |
| (big run) | 0x0ED540-0x0ED6C0 | 384 | - |
| (big run) | 0x0D8483-0x0D8512 | 143 | - |
| (big run) | 0x0D8300-0x0D8354 | 84 | - |

## Decomp decoded ranges covering the art
| range | key | format | palette |
|-------|-----|--------|---------|
| 0x048683-0x04BBCF | spcData |  |  |
| 0x04C00F-0x04C8CE | songSamples |  |  |
| 0x04C8CF-0x04C92A | brrSampleLoopStart |  |  |
| 0x04C92B-0x04C941 | brrSampleFrequencyMultiplier |  |  |
| 0x04C98A-0x06F21C | brrSamples |  |  |
| 0x06F2EF-0x08B8B8 | songScripts |  |  |
| 0x08C000-0x08DFFF | splashGraphics |  |  |
| 0x08E000-0x08E7FF | splashTilemap |  |  |
| 0x08E800-0x08E8FF | splashPalette |  |  |
| 0x08EC80-0x08F87F | prologueGraphics |  |  |
| 0x08F880-0x08FB7F | prologueTilemap1 |  |  |
| 0x08FB80-0x08FEFF | prologueTilemap2 |  |  |
| 0x08FF00-0x08FFFF | prologuePalette |  |  |
| 0x098000-0x09FFDF | monsterGraphics1 |  |  |
| 0x0A8000-0x0AEEFF | monsterGraphics2 |  |  |
| 0x0AF000-0x0AFFFF | windowGraphics |  |  |
| 0x0B8000-0x0BFD57 | monsterGraphics3 |  |  |
| 0x0C8000-0x0CB2F7 | monsterGraphics4 |  |  |
| 0x0CB6C0-0x0CF3BF | attackGraphics |  |  |
| 0x0CF3C0-0x0CF9BF | attackTilemap |  |  |
| 0x0CF9C0-0x0CFF2F | miscBattleGfx |  |  |
| 0x0CFF30-0x0CFFEF | monsterShadowGfx |  |  |
| 0x0D8000-0x0D823F | npcPalettes | bgr555 |  |
| 0x0D86D0-0x0D87CF | portraitPalette | bgr555 |  |
| 0x0D87D0-0x0D87EF | windowPalette |  |  |
| 0x0D8818-0x0DE817 | monsterGraphics5 |  |  |
| 0x0DF282-0x0DF646 | summonGraphicsMap |  |  |
| 0x0DF69A-0x0DF7D6 | summonFrame |  |  |
| 0x0DFCCB-0x0DFD0E | battleBackgroundProperties |  |  |
| 0x0DFF5E-0x0DFFB3 | monsterSize |  |  |
| 0x0E8000-0x0E8FFF | battleProperties |  |  |
| 0x0E9000-0x0E97FF | monsterPosition |  |  |
| 0x0E9800-0x0E9EFF | monsterName |  |  |
| 0x0E9F00-0x0E9FFF | monsterItems |  |  |
| 0x0EA000-0x0EA1BF | monsterGP |  |  |
| 0x0EA1C0-0x0EA37F | monsterExperience |  |  |
| 0x0EA380-0x0EA61F | monsterAttackDefense |  |  |
| 0x0EA620-0x0EA69F | monsterAgility |  |  |
| 0x0EA860-0x0EB438 | monsterProperties | ff4-monster |  |
| 0x0EB6C0-0x0EB989 | monsterActionMoon |  |  |
| 0x0EBAC0-0x0EC06F | monsterCursor |  |  |
| 0x0EC300-0x0EC341 | worldBattleProbability |  |  |
| 0x0EC342-0x0EC541 | mapBattleProbability |  |  |
| 0x0EC542-0x0EC595 | worldBattle |  |  |
| 0x0EC596-0x0EC795 | mapBattle |  |  |
| 0x0EC796-0x0EC815 | battleGroupWorld |  |  |
| 0x0EC816-0x0ECA95 | battleGroup |  |  |
| 0x0ECB00-0x0ECEFF | attackPalette | bgr555 |  |
| 0x0ECF72-0x0EDF52 | monsterBossMap |  |  |
| 0x0EE000-0x0EE021 | monsterConditionHP |  |  |
| 0x0EE030-0x0EE51E | monsterScript |  |  |
| 0x0EE600-0x0EE6FE | monsterConditionScript |  |  |
| 0x0EE700-0x0EE8FF | monsterCondition |  |  |
| 0x0EE900-0x0EF0B8 | monsterAction |  |  |
| 0x0EF374-0x0EFF0B | battleDialog |  |  |
| 0x0F8000-0x0F88FF | itemNames |  |  |
| 0x0F8900-0x0F8AAF | spellNames |  |  |
| 0x0F8AB0-0x0F906F | attackNames |  |  |
| 0x0F9070-0x0F90CF | weaponSpellPower |  |  |
| 0x0F9100-0x0F967F | weaponArmorProperties |  |  |
| 0x0F9680-0x0F979F | itemConsumable |  |  |
| 0x0F97A0-0x0F9D9F | attackProperties |  |  |
| 0x0F9E10-0x0FA04F | weaponAnimationProperties |  |  |
| 0x0FA050-0x0FA34F | attackGraphicsProperties |  |  |
| 0x0FA350-0x0FA44F | attackSoundEffect |  |  |
| 0x0FA450-0x0FA54F | itemProperties |  |  |
| 0x0FA550-0x0FA58F | itemEquipability |  |  |
| 0x0FA590-0x0FA70F | attackElementStatus |  |  |
| 0x0FA710-0x0FA763 | characterNames |  |  |
| 0x0FA764-0x0FA7C5 | className |  |  |
| 0x0FA7C6-0x0FA859 | battleCommandNames |  |  |
| 0x0FA900-0x0FAABF | CharProp |  |  |
| 0x0FAB00-0x0FAB91 | CharInitEquip |  |  |
| 0x0FAE00-0x0FAE2A | itemDescriptionIndex |  |  |
| 0x0FAE2B-0x0FAF9D | itemDescription |  |  |
| 0x0FB076-0x0FB33C | battleMessage |  |  |
| 0x0FB440-0x0FB4BA | statusName |  |  |
| 0x0FB528-0x0FC3C7 | LevelUpProp |  |  |
| 0x0FC700-0x0FC7AE | spellListLearned | terminated(0xFF) |  |
| 0x0FC8C0-0x0FC916 | spellListInitial | terminated(0xFF) |  |
| 0x0FCA00-0x0FCDFF | monsterGraphicsProperties |  |  |
| 0x0FCE00-0x0FCF3F | monsterBossProperties |  |  |
| 0x0FD200-0x0FD4DF | battleBackgroundPalette | bgr555 |  |
| 0x0FD4E0-0x0FD5DF | itemSpellAnimation |  |  |
| 0x0FD67E-0x0FDD07 | attackAnimationScript |  |  |
| 0x0FE0B2-0x0FFEBE | attackAnimationFrame |  |  |
| 0x108400-0x10FE20 | eventDialog1 |  |  |
| 0x118300-0x11FFFA | mapDialog |  |  |
| 0x128200-0x12E68A | eventScript |  |  |
| 0x12F000-0x12F1FF | npcGraphicsProperties |  |  |
| 0x12F200-0x12F23F | initNPCSwitch |  |  |
| 0x12F240-0x12F25F | initEventSwitch |  |  |
| 0x12F460-0x12F616 | triggerScript |  |  |
| 0x12F660-0x12F7E3 | solarSystemSpriteData |  |  |
| 0x138300-0x1396E7 | npcProperties | terminated(0,4) |  |
| 0x139700-0x1397FF | dteTable |  |  |
| 0x139C00-0x13A292 | npcScript |  |  |
| 0x13A300-0x13A47F | shopProperties |  |  |
| 0x13A700-0x13CD8F | eventDialog2 |  |  |
| 0x13D200-0x13D2FF | solarSystemPalette |  |  |
| 0x13D300-0x13D50F | creditsStarsGraphics |  |  |
| 0x13D510-0x13D60F | creditsPalette |  |  |
| 0x13E5C5-0x13E9C4 | solarSystemSine |  |  |
| 0x13E9C5-0x13EB03 | prophecyText |  |  |
| 0x13F04D-0x13F36C | theEndGraphics |  |  |
| 0x13F36D-0x13F7D6 | creditsText |  |  |
| 0x13FD55-0x13FDC2 | characterBattleCommands |  |  |
| 0x148000-0x1485FF | worldTilesets | ['generic4bppTile', 'interlace(2,16,2)', 'interlace(1,4,128)'] | worldPalettes[%i] |
| 0x148600-0x1488FF | worldPaletteAssignments |  |  |
| 0x148900-0x148A7F | worldPalettes | bgr555 |  |
| 0x148A80-0x148D7F | worldTileProperties |  |  |
| 0x148E00-0x149DFF | mapTileProperties |  |  |
| 0x149E00-0x14DDFF | mapTilesets | ['snes4bppTile', 'interlace(4,16,2)', 'interlace(2,4,128)'] | {'path': 'mapPalettes', 'offset': 8} |
| 0x14DE00-0x14EDFF | mapPalettes | bgr555 |  |
| 0x14EE00-0x14EEFF | rngTable |  |  |
| 0x14EF00-0x14EFFF | mode7Sine |  |  |
| 0x158300-0x158EDF | mapTriggers1 |  |  |
| 0x158EE0-0x15961E | mapTriggers2 |  |  |
| 0x159620-0x159AEE | mapTitle |  |  |
| 0x159C84-0x15AFF6 | mapProperties |  |  |
| 0x15CC00-0x15D83F | solarSystemGraphics |  |  |
| 0x15D840-0x15DBFF | solarSystemBigMoon |  |  |
| 0x15DC00-0x15FFFF | mapGraphics0 |  |  |
| 0x15DC00-0x15FFFF | mapGraphics15 |  |  |
| 0x168480-0x16C354 | worldLayout1 | ff4-world |  |
| 0x16C480-0x16E041 | worldLayout2 | ff4-map |  |
| 0x16E180-0x16EB53 | worldLayout3 | ff4-map |  |
| 0x16EB80-0x16ED61 | telescopeHDMA |  |  |
| 0x16ED80-0x16F87F | battleBackgroundLayoutUpper | ['snes3bppTile', 'ff4-battlebg'] | battleBackgroundPalette[%i] |
| 0x16F880-0x16FA3F | battleBackgroundLayoutLower | ['snes3bppTile', 'ff4-battlebg'] | battleBackgroundPalette[%i] |
| 0x178300-0x18F12D | mapLayouts1 | ff4-map |  |
| 0x18F12E-0x19FCF8 | mapLayouts2 | ff4-map |  |
| 0x19FE66-0x19FF87 | worldTriggers1 |  |  |
| 0x19FF88-0x19FFDC | worldTriggers2 |  |  |
| 0x19FFDD-0x19FFFF | worldTriggers3 |  |  |
| 0x1A8000-0x1AFC3F | characterGraphics | snes4bpp | characterPalette |
| 0x1AFCF0-0x1AFCFF | prologueMoonPalette |  |  |
| 0x1AFD00-0x1AFD7F | prologueMoonGraphics |  |  |
| 0x1B8000-0x1BFFDF | mapSpriteGraphics | snes3bpp | npcPalettes |
| 0x1C8000-0x1C97FF | vehicleGraphics |  |  |
| 0x1C9800-0x1CA7FF | worldSpriteGraphics |  |  |
| 0x1CA800-0x1CD8EF | battleBackgroundGraphics | snes3bpp | battleBackgroundPalette |
| 0x1CD900-0x1CEDFF | weaponGraphics |  |  |
| 0x1CEE00-0x1CFCFF | monsterPalette | bgr555 |  |
| 0x1CFD00-0x1CFEFF | characterPalette | bgr555 |  |
| 0x1CFF00-0x1CFFFF | attackAnimationSine |  |  |
| 0x1D8000-0x1DD3BF | worldGraphics | linear4bpp | worldPalettes[%i] |
| 0x1DD3C0-0x1DED3F | portraitGraphics | snes3bpp | portraitPalette |
| 0x1DED40-0x1DFFFF | mapGraphics3 |  |  |
| 0x1E8020-0x1E9567 | mapGraphics2 |  |  |
| 0x1E9568-0x1EACBF | mapGraphics4 |  |  |
| 0x1EACC0-0x1EB8BF | mapGraphics5 |  |  |
| 0x1EB8C0-0x1ECFE7 | mapGraphics6 |  |  |
| 0x1ECFE8-0x1EDFA7 | mapGraphics7 |  |  |
| 0x1EDFA8-0x1EFC1F | mapGraphics12 |  |  |
| 0x1EDFA8-0x1EFC27 | mapGraphics1 |  |  |
| 0x1EFEE0-0x1EFFDF | telescopeGraphics |  |  |
| 0x1EFFE0-0x1EFFFF | telescopePalette |  |  |
| 0x1F8000-0x1F94FF | mapGraphics9 |  |  |
| 0x1F9500-0x1FB9BF | mapGraphics10 |  |  |
| 0x1F9500-0x1FB9BF | mapGraphics11 |  |  |
| 0x1F9500-0x1FB9BF | mapGraphics8 |  |  |
| 0x1FB9C0-0x1FD207 | mapAnimationGraphics |  |  |
| 0x1FD208-0x1FE887 | mapGraphics13 |  |  |
| 0x1FE888-0x1FFFF7 | mapGraphics14 |  |  |

## Never-decoded-by-decomp regions (from the IPS)
Battle sprites (character battle gfx) 0x0D1000-0x0E7E00: the
IPS battle-sprite patches all hit inside this span; the decomp
has no key under it (npcPalettes 0x0D8000 + attackPalette
0x0ECB00 flank it). Tiles are 3bpp (24B) per patch run sizes.
