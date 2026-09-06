
void FUN_80189e44(short *param_1,int param_2,int param_3,ushort param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(byte *)(param_5 + 3) + 1;
  iVar4 = (int)(short)((*(byte *)(param_5 + 2) + 1) * (param_4 & 0xff));
  iVar2 = param_3 * 0x10000 + 0x10000 >> 0x10;
  iVar1 = param_2 * 0x10000 + 0x10000 >> 0x10;
  if (uVar3 == 0x41) {
    *param_1 = (short)(iVar4 * iVar1 >> 7) + -1;
    param_1[1] = (short)(iVar4 * iVar2 >> 7) + -1;
    return;
  }
  if (uVar3 < 0x41) {
    *param_1 = (short)(iVar4 * iVar1 >> 7) + -1;
    param_1[1] = (short)((int)(iVar4 * uVar3 * iVar2) >> 0xd) + -1;
    return;
  }
  param_1[1] = (short)(iVar4 * iVar2 >> 7) + -1;
  *param_1 = (short)((int)(iVar4 * (0x81 - uVar3) * iVar1) >> 0xd) + -1;
  return;
}



