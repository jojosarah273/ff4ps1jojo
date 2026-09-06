
void ST_OBJ_160(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = 1;
  do {
    if ((param_1 & uVar1) != 0) break;
    uVar2 = uVar2 + 1;
    uVar1 = 1 << (uVar2 & 0x1f);
  } while ((int)uVar2 < 0x18);
  uVar1 = DAT_8019b584 & 0xf0;
  if (uVar1 == 0x20) {
    ST_OBJ_2FC();
    return;
  }
  if (uVar1 < 0x21) {
    if (uVar1 != 0x10) {
      ST_OBJ_2FC();
      return;
    }
    DAT_8019b584 = 0x20;
    ST_OBJ_228();
    return;
  }
  if (uVar1 != 0x30) {
    ST_OBJ_2FC();
    return;
  }
  DAT_801f6960 = 0;
  DAT_8019b594 = param_1;
  DAT_8019b598 = param_1;
  DAT_801f67c0 = uVar2;
  ST_OBJ_2FC();
  return;
}



