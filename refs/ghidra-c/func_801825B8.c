
void FUN_801825b8(int param_1,int param_2,int *param_3)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = ((ushort *)param_3[1])[1] >> 3 & 0x7f;
  uVar7 = *(ushort *)param_3[1] >> 3 & 0x7f;
  iVar5 = 0;
  if (*param_3 != 7) {
    if ((DAT_8019ee2c & 0x1000) != 0) {
      do {
        iVar6 = iVar5 + 1;
        puVar2 = (ushort *)(iVar5 * 0x40 + param_1);
        iVar5 = 0x1f;
        uVar3 = uVar7;
        do {
          iVar1 = uVar3 * 2;
          uVar3 = uVar3 + 2 & 0x7f;
          iVar5 = iVar5 + -1;
          *puVar2 = (ushort)*(byte *)(iVar1 + param_2 + uVar4 * 0x100);
          puVar2 = puVar2 + 1;
        } while (-1 < iVar5);
        uVar4 = uVar4 + 2 & 0x7f;
        iVar5 = iVar6;
      } while (iVar6 < 0x20);
      return;
    }
    iVar5 = 0;
  }
  do {
    iVar6 = iVar5 + 1;
    puVar2 = (ushort *)(iVar5 * 0x42 + param_1);
    iVar5 = 0x20;
    uVar3 = uVar7;
    do {
      iVar1 = uVar3 * 2;
      uVar3 = uVar3 + 1 & 0x7f;
      iVar5 = iVar5 + -1;
      *puVar2 = (ushort)*(byte *)(iVar1 + param_2 + uVar4 * 0x100);
      puVar2 = puVar2 + 1;
    } while (-1 < iVar5);
    uVar4 = uVar4 + 1 & 0x7f;
    iVar5 = iVar6;
  } while (iVar6 < 0x1f);
  return;
}



