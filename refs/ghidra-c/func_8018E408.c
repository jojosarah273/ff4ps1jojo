
ulong SpuSetIRQAddr(ulong param_1)

{
  ulong uVar1;
  
  if (param_1 < 0x7fff9) {
    _spu_FsetRXXa(0xd2);
    uVar1 = S_SIA_OBJ_30();
    return uVar1;
  }
  return 0;
}



