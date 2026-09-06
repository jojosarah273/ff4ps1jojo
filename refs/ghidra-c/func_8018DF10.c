
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long SpuStGetStatus(void)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = DAT_8019b584 & 0xf0;
  if (uVar2 == 0x20) {
    lVar1 = ST_OBJ_10F0();
    return lVar1;
  }
  if (0x20 < uVar2) {
    if (uVar2 == 0x30) {
      lVar1 = ST_OBJ_10F0();
      return lVar1;
    }
    if (uVar2 != 0x40) {
      lVar1 = ST_OBJ_10F0();
      return lVar1;
    }
    return 8;
  }
  if (uVar2 == 0) {
    lVar1 = ST_OBJ_10F0();
    return lVar1;
  }
  if (uVar2 != 0x10) {
    lVar1 = ST_OBJ_10F0();
    return lVar1;
  }
  lVar1 = ST_OBJ_10F0();
  return lVar1;
}



