
uint _spu_note2pitch(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  iVar4 = (int)(((param_3 + ((param_4 + param_2 & 0xffffU) >> 7)) - param_1) * 0x10000) >> 0x10;
  sVar1 = (short)(iVar4 / 0xc);
  sVar5 = sVar1 + -2;
  iVar4 = iVar4 % 0xc;
  iVar3 = iVar4;
  if (iVar4 * 0x10000 < 0) {
    iVar3 = iVar4 + 0xc;
    sVar5 = sVar1 + -3;
  }
  if (-1 < sVar5) {
    uVar2 = S_N2P_OBJ_C8(iVar4,0x3fff);
    return uVar2;
  }
  uVar2 = -(int)sVar5;
  return (uint)(((int)((uint)*(ushort *)(&DAT_8019b5b4 + ((iVar3 << 0x10) >> 0xf)) *
                      (uint)*(ushort *)((int)&PTR_DAT_8019b5cc + (param_4 + param_2 & 0x7fU) * 2))
                >> 0x10) + (1 << (uVar2 - 1 & 0x1f))) >> (uVar2 & 0x1f) & 0xffff;
}



