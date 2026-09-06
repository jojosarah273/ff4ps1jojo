
long SpuClearReverbWorkArea(long mode)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int local_28;
  
  local_28 = 0;
  if ((uint)mode < 10) {
    iVar4 = _SpuIsInAllocateArea_((&DAT_8019b6d4)[mode]);
    iVar3 = DAT_8019b130;
    if (iVar4 == 0) {
      if (mode != 0) {
        iVar4 = (&DAT_8019b6d4)[mode];
        uVar7 = 0x10000 - iVar4 << (DAT_8019b13c & 0x1f);
        iVar4 = iVar4 << (DAT_8019b13c & 0x1f);
        bVar1 = DAT_8019b130 == 1;
        if (bVar1) {
          DAT_8019b130 = 0;
        }
        bVar2 = true;
        if (DAT_8019b14c != 0) {
          local_28 = DAT_8019b14c;
          DAT_8019b14c = 0;
        }
        do {
          uVar6 = 0x400;
          if (uVar7 < 0x401) {
            bVar2 = false;
            uVar6 = uVar7;
          }
          _spu_t(2,iVar4);
          _spu_t(1);
          _spu_t(3,&DAT_8019b184,uVar6);
          uVar7 = uVar7 - 0x400;
          iVar4 = iVar4 + 0x400;
          WaitEvent(DAT_8019b09c);
        } while (bVar2);
        if (bVar1) {
          DAT_8019b130 = iVar3;
        }
        if (local_28 != 0) {
          DAT_8019b14c = local_28;
        }
        return 0;
      }
      lVar5 = S_CRWA_OBJ_9C();
      return lVar5;
    }
  }
  lVar5 = S_CRWA_OBJ_170();
  return lVar5;
}



