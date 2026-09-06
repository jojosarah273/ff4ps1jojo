
void FUN_8018746c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar1 = (int)*(short *)(&DAT_8019ed1c + param_1 * 2);
    iVar3 = 0;
  }
  else {
    iVar3 = 0x2000;
    iVar1 = ((int)((uint)*(ushort *)(&DAT_8019ed1c + param_1 * 2) << 0x10) >> 0x10) -
            ((int)((uint)*(ushort *)(&DAT_8019ed1c + param_1 * 2) << 0x10) >> 0x1f) >> 1;
  }
  uVar2 = (uint)DAT_8019eeb8;
  if (-1 < (short)DAT_8019eeb8) {
    DAT_8019eeb8 = (ushort)(uVar2 - iVar1);
    if ((int)((uVar2 - iVar1) * 0x10000) >> 0x10 <= iVar3) {
      DAT_8019ef24 = 0;
      DAT_8019eeb8 = (ushort)iVar3;
    }
    FUN_8018767c(DAT_8019eeb8);
  }
  return;
}



