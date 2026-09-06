
ulong SpuWrite0(ulong size)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  int local_28;
  
  iVar2 = DAT_8019b130;
  local_28 = 0;
  bVar1 = DAT_8019b130 == 1;
  if (bVar1) {
    DAT_8019b130 = 0;
  }
  if (DAT_8019b14c != 0) {
    local_28 = DAT_8019b14c;
    DAT_8019b14c = 0;
  }
  if (size < 0x401) {
    uVar3 = size & 0xffffffc0;
    if (uVar3 < size) {
      uVar3 = uVar3 + 0x40;
    }
    _spu_t(2,(uint)DAT_8019b12c << (DAT_8019b13c & 0x1f));
    _spu_t(1);
    _spu_t(3,&DAT_8019b184,uVar3);
    WaitEvent(DAT_8019b09c);
    if (bVar1) {
      DAT_8019b130 = iVar2;
    }
    if (local_28 != 0) {
      DAT_8019b14c = local_28;
    }
    return uVar3;
  }
  uVar3 = S_W0_OBJ_B8();
  return uVar3;
}



