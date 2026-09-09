# Device layer notes (Phase B.2)

The 800F window primitives write into the catalog VRAM cells
(0x800D0000+ / 0x800E0000+ banks; base selected by the scratch byte at
0x1F8003D2 — see panel.c / 800F3B04). A native device layer maps:
- txt/cell writes  -> glyph atlas blits (once the text encoding 0x20xx
  table is decoded from the PCI data)
- page painters    -> SDL render commands
- key polls (0x5574/53D4/53C0) -> SDL input translation table
Boot path: platform/boot.c opens the window and drives the config root
(port/src/config/root.c).
