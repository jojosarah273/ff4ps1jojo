#!/usr/bin/env python3
"""content_pack.py - extract THE GAME's content from the SNES decomp JSON.

Input : FF4_FROM_SOURCE/ff4/ff4-en-data.json (the decoded game data:
        dialogue, world/maps, monsters, battles, items, attacks,
        characters, scripts, cinematics).
Output: port/data/*.json  - the host runtime data pack (the port reads
        these at startup) + manifest.json inventory.

Policy: text/lists/dicts are emitted verbatim (they ARE decoded).
        blobs (graphics/sound/map layouts) stay base64 (the existing
        rip tools decode to .rgba at build time; the runtime uses those
        exports). Scripts are emitted raw base64 (the opcode engine
        decodes them) + one decoded-opcode preview for reference.
"""
import json, sys, base64
from pathlib import Path

DATA_JSON = ("/home/jojosarah273/DEV/FF4_FROM_SOURCE/ff4/ff4-en-data.json")
OUT = Path(__file__).resolve().parents[2] / "port/data"

# category -> keys (obj keys)
PACKS = {
    "dialogue.json": ["eventDialog1", "eventDialog2", "battleDialog",
                      "battleMessage", "itemDescription", "prophecyText",
                      "creditsText"],
    "world.json": ["mapProperties", "mapLayouts1", "mapLayouts2",
                   "mapTriggers1", "mapTriggers2", "mapTitle", "mapTilesets",
                   "mapTileProperties", "mapPalettes", "mapBattle",
                   "mapBattleProbability", "mapDialog",
                   "worldLayout1", "worldLayout2", "worldLayout3",
                   "worldTriggers1", "worldTriggers2", "worldTriggers3",
                   "worldTilesets", "worldTileProperties",
                   "worldPaletteAssignments", "worldPalettes"],
    "monsters.json": ["monsterName", "monsterProperties", "monsterAgility",
                      "monsterAttackDefense", "monsterItems", "monsterGP",
                      "monsterExperience", "monsterSize", "monsterPosition",
                      "monsterGraphicsProperties", "monsterBossMap",
                      "monsterBossProperties", "monsterCondition",
                      "monsterConditionHP", "monsterCursor"],
    "battles.json": ["battleProperties", "battleGroup", "battleGroupWorld",
                     "battleCommandNames", "battleBackgroundProperties",
                     "battleBackgroundGraphics", "battleBackgroundLayoutLower",
                     "battleBackgroundLayoutUpper", "battleBackgroundPalette"],
    "items.json": ["itemNames", "itemProperties", "itemDescriptionIndex",
                   "itemEquipability", "itemConsumable", "itemSpellAnimation",
                   "shopProperties"],
    "spells_attacks.json": ["spellNames", "spellListInitial",
                            "spellListLearned", "attackNames",
                            "attackProperties", "attackElementStatus",
                            "attackAnimationFrame", "attackAnimationScript",
                            "attackAnimationSine", "attackGraphicsProperties",
                            "attackPalette", "attackSoundEffect",
                            "weaponAnimationProperties",
                            "weaponArmorProperties", "weaponSpellPower",
                            "weaponGraphics"],
    "characters.json": ["CharProp", "CharInitEquip", "characterNames",
                        "className", "characterBattleCommands",
                        "LevelUpProp", "LevelUpPropHigh", "LevelUpPropLow",
                        "statusName"],
    "scripts.json": ["eventScript", "triggerScript", "npcScript",
                     "monsterScript", "monsterAction", "monsterActionMoon",
                     "monsterConditionScript", "initEventSwitch",
                     "initNPCSwitch"],
    "cinematics.json": ["splashGraphics", "splashPalette", "splashTilemap",
                        "prologueGraphics", "prologuePalette",
                        "prologueTilemap1", "prologueTilemap2",
                        "prologueMoonGraphics", "prologueMoonPalette",
                        "solarSystemGraphics", "solarSystemPalette",
                        "solarSystemSine", "solarSystemSpriteData",
                        "solarSystemBigMoon", "creditsPalette",
                        "creditsStarsGraphics", "theEndGraphics",
                        "telescopeGraphics", "telescopePalette",
                        "telescopeHDMA", "worldGraphics", "worldSpriteGraphics",
                        "vehicleGraphics"],
}


def main():
    data = json.load(open(DATA_JSON))
    obj = data["obj"]
    out = OUT
    out.mkdir(parents=True, exist_ok=True)
    manifest = {
        "game": "Final Fantasy IV (SNES, FF2us 1.1)",
        "source": "FF4_FROM_SOURCE/ff4/ff4-en-data.json",
        "rom": "vanilla/ff2.smc (crc32 0x23084FCD)",
        "packs": {},
    }
    for fname, keys in PACKS.items():
        pack = {}
        for k in keys:
            if k in obj:
                pack[k] = obj[k]
        (out / fname).write_text(
            json.dumps(pack, ensure_ascii=False, indent=1))
        sizes = sum(_size(o) for o in pack.values())
        manifest["packs"][fname] = {"keys": len(pack), "bytes": sizes}
        print(f"{fname:24s} {len(pack):2d} keys  {sizes} bytes")
    # the big art/sound feeds (kept as references; ripped to .rgba at build)
    art = [k for k in obj if isinstance(obj[k], str) and len(obj[k]) > 2000]
    manifest["raw_art_sound_feeds"] = sorted(art)
    manifest["totals"] = {
        "maps": len(obj.get("mapProperties", [])),
        "dialogue_strings": len(obj.get("eventDialog1", []))
                            + len(obj.get("eventDialog2", []))
                            + len(obj.get("battleDialog", [])),
        "monsters": len(obj.get("monsterName", [])),
        "battles": len(obj.get("battleProperties", [])),
        "items": len(obj.get("itemNames", [])),
        "attacks": len(obj.get("attackProperties", [])),
        "shops": len(obj.get("shopProperties", [])),
        "event_scripts": len(obj.get("eventScript", [])),
        "npc_scripts": len(obj.get("npcScript", [])),
        "trigger_scripts": len(obj.get("triggerScript", [])),
    }
    (out / "manifest.json").write_text(
        json.dumps(manifest, ensure_ascii=False, indent=1))
    print("\nmanifest:", out / "manifest.json")
    print("total pack bytes:", sum(v["bytes"] for v in manifest["packs"].values()))


def _size(o):
    if isinstance(o, (list, dict)):
        return len(json.dumps(o))
    return len(str(o))


if __name__ == "__main__":
    main()