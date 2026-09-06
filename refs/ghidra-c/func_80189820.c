
int FUN_80189820(int param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_801f66e8;
  iVar2 = 0;
  do {
    if (*piVar3 == 0) {
      *piVar3 = param_1;
      uVar1 = *(ushort *)(param_1 + 8);
      piVar3[3] = 0;
      piVar3[2] = param_1 + (uint)uVar1 * 0x10 + 0x10;
      *(undefined1 *)(piVar3 + 4) = *(undefined1 *)(param_1 + 0xb);
      return (int)(short)iVar2;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 5;
  } while (iVar2 < 8);
  return -1;
}



