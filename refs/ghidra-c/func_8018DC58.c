
long SpuStTransfer(long flag,ulong voice_bit)

{
  long lVar1;
  
  if (DAT_8019b584 == 0) {
    lVar1 = ST_OBJ_E30();
    return lVar1;
  }
  lVar1 = -2;
  if ((voice_bit & 0xffffff) != 0) {
    if (flag == 4) {
      ST_OBJ_160();
      lVar1 = ST_OBJ_E30();
      return lVar1;
    }
    lVar1 = -2;
    if ((3 < flag) && (lVar1 = -2, flag < 7)) {
      lVar1 = ST_OBJ_C1C();
    }
  }
  return lVar1;
}



