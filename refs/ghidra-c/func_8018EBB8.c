
uint _spu_pitch2note(int param_1,int param_2,ushort param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int in_t1;
  uint in_t2;
  uint uVar5;
  
  uVar5 = 0;
  if (0x3fff < param_3) {
    param_3 = 0x3fff;
  }
  uVar2 = 0;
  uVar1 = (uint)param_3;
  do {
    if ((uVar1 & 1) != 0) {
      uVar5 = uVar2;
    }
    uVar2 = uVar2 + 1;
    uVar1 = (int)(uint)param_3 >> (uVar2 & 0x1f);
  } while ((int)uVar2 < 0xe);
  uVar1 = (uint)param_3 << (0xf - uVar5 & 0x1f);
  iVar3 = 0xb;
  puVar4 = &DAT_8019b5ca;
  do {
    if ((uint)*puVar4 <= (uVar1 & 0xffff)) {
      uVar5 = S_N2P_OBJ_158();
      return uVar5;
    }
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -1;
  } while (-1 < iVar3);
  if (*(ushort *)(&DAT_8019b5b4 + (in_t2 & 0xffff) * 2) == 0) {
    trap(0x1c00);
  }
  iVar3 = 0x7f;
  puVar4 = &DAT_8019b6ca;
  do {
    if ((uint)*puVar4 <=
        (((uVar1 & 0xffff) << 0xf) / (uint)*(ushort *)(&DAT_8019b5b4 + (in_t2 & 0xffff) * 2) &
        0xffff)) {
      uVar5 = S_N2P_OBJ_1C0();
      return uVar5;
    }
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -1;
  } while (-1 < iVar3);
  uVar1 = param_2 + in_t1 + 1;
  return (in_t2 + param_1 + (uVar5 - 0xc) * 0xc + ((uVar1 & 0xffff) >> 7) & 0xffff) << 8 |
         uVar1 & 0x7e;
}



