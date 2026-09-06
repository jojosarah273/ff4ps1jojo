
int * FUN_80183048(int *param_1)

{
  short sVar1;
  int iVar2;
  long a;
  int iVar3;
  
  iVar3 = 0x100;
  if ((short)param_1[9] != 0) {
    iVar3 = (int)(short)param_1[9];
  }
  iVar2 = (int)DAT_8019ee5c._2_2_;
  *(short *)(param_1 + 2) = DAT_8019ee5c._2_2_;
  *param_1 = iVar2;
  a = ratan2(iVar2,iVar3);
  param_1[1] = a;
  iVar2 = rcos(a);
  if (iVar3 == 0) {
    trap(7);
  }
  iVar3 = iVar2 / iVar3 << 4;
  *param_1 = iVar3;
  if (iVar3 == 0) {
    *param_1 = 1;
  }
  iVar3 = 0x7000 / *param_1;
  if (*param_1 == 0) {
    trap(7);
  }
  *param_1 = iVar3;
  sVar1 = FUN_80182ddc(iVar3,(int)((0xa00 - (uint)*(ushort *)(param_1 + 1)) * 0x10000) >> 0x10);
  *(short *)(param_1 + 2) = sVar1 + 0x80;
  sVar1 = FUN_80182e18(*param_1,(int)((0xa00 - (uint)*(ushort *)(param_1 + 1)) * 0x10000) >> 0x10);
  *(short *)((int)param_1 + 10) = sVar1 + 0x70;
  sVar1 = FUN_80182ddc(*param_1,(int)((0xe00 - (uint)*(ushort *)(param_1 + 1)) * 0x10000) >> 0x10);
  *(short *)(param_1 + 3) = sVar1 + 0x80;
  sVar1 = FUN_80182e18(*param_1,(int)((0xe00 - (uint)*(ushort *)(param_1 + 1)) * 0x10000) >> 0x10);
  *(short *)((int)param_1 + 0xe) = sVar1 + 0x70;
  sVar1 = FUN_80182ddc(*param_1,(int)((0x600 - (uint)*(ushort *)(param_1 + 1)) * 0x10000) >> 0x10);
  *(short *)(param_1 + 4) = sVar1 + 0x80;
  sVar1 = FUN_80182e18(*param_1,(int)((0x600 - (uint)*(ushort *)(param_1 + 1)) * 0x10000) >> 0x10);
  *(short *)((int)param_1 + 0x12) = sVar1 + 0x70;
  sVar1 = FUN_80182ddc(*param_1,(int)((0x200 - (uint)*(ushort *)(param_1 + 1)) * 0x10000) >> 0x10);
  *(short *)(param_1 + 5) = sVar1 + 0x80;
  sVar1 = FUN_80182e18(*param_1,(int)((0x200 - (uint)*(ushort *)(param_1 + 1)) * 0x10000) >> 0x10);
  *(short *)((int)param_1 + 0x16) = sVar1 + 0x70;
  *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xfffe;
  *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xfffe;
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xfffe;
  *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 5) & 0xfffe;
  return param_1;
}



