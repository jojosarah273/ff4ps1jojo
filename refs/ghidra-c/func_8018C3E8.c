
long SpuReserveReverbWorkArea(long on_off)

{
  int iVar1;
  long lVar2;
  
  if ((on_off != 0) && (iVar1 = _SpuIsInAllocateArea_(DAT_8019b0b0), iVar1 == 0)) {
    DAT_8019b0ac = 1;
    lVar2 = S_RRWA_OBJ_3C();
    return lVar2;
  }
  DAT_8019b0ac = 0;
  return 0;
}



