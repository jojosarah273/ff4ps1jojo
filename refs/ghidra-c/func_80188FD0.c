
int FUN_80188fd0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  int iVar6;
  
  iVar3 = FUN_80188ae8(3);
  iVar2 = DAT_8019ef40;
  iVar6 = DAT_8019ed28;
  if (iVar3 != 0) {
    return -1;
  }
  iVar3 = 0;
  bVar1 = DAT_8019ef8c != DAT_8019ef40;
  *(undefined2 *)(DAT_8019ef8c * 0x10 + DAT_8019ed28) = 0;
  if (bVar1) {
    iVar3 = DAT_8019ef8c + 1;
  }
  if (param_1 == 0) {
    puVar5 = (undefined2 *)(iVar3 * 0x10 + iVar6);
    DAT_8019ef44 = DAT_8019ef44 & 0xbe;
    *puVar5 = 4;
    DAT_8019ef8c = 0;
    *(uint *)(puVar5 + 2) = (uint)DAT_8019ef44;
    if (iVar3 != iVar2) {
      DAT_8019ef8c = iVar3 + 1;
    }
    uVar4 = 9;
  }
  else {
    DAT_8019ef8c = iVar3;
    if (param_1 != 1) goto LAB_801890b4;
    puVar5 = (undefined2 *)(iVar3 * 0x10 + iVar6);
    DAT_8019ef44 = DAT_8019ef44 | 0x41;
    *puVar5 = 4;
    DAT_8019ef8c = 0;
    *(uint *)(puVar5 + 2) = (uint)DAT_8019ef44;
    if (iVar3 != iVar2) {
      DAT_8019ef8c = iVar3 + 1;
    }
    uVar4 = 0xb;
  }
  *(undefined2 *)(DAT_8019ef8c * 0x10 + iVar6) = uVar4;
LAB_801890b4:
  iVar6 = 0;
  if (DAT_8019ef8c != DAT_8019ef40) {
    iVar6 = DAT_8019ef8c + 1;
  }
  DAT_8019ef8c = iVar6;
  return iVar6;
}



