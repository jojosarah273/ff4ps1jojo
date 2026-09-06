
uint S_N2P_OBJ_158(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  int in_t1;
  uint in_t2;
  int in_t3;
  
  if (*(ushort *)(&DAT_8019b5b4 + (in_t2 & 0xffff) * 2) == 0) {
    trap(0x1c00);
  }
  iVar3 = 0x7f;
  puVar2 = &DAT_8019b6ca;
  do {
    if ((uint)*puVar2 <=
        (((param_3 & 0xffff) << 0xf) / (uint)*(ushort *)(&DAT_8019b5b4 + (in_t2 & 0xffff) * 2) &
        0xffff)) {
      uVar1 = S_N2P_OBJ_1C0();
      return uVar1;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar3);
  uVar1 = param_2 + in_t1 + 1;
  return (in_t2 + param_1 + (in_t3 + -0xc) * 0xc + ((uVar1 & 0xffff) >> 7) & 0xffff) << 8 |
         uVar1 & 0x7e;
}



