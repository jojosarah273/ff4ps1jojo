
int FUN_80188c58(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  
  iVar4 = FUN_80188ae8(3);
  iVar3 = DAT_8019ef40;
  iVar2 = DAT_8019ed28;
  iVar5 = -1;
  if (iVar4 == 0) {
    if (param_1 == 0) {
      DAT_8019ef44 = DAT_8019ef44 & 0x7f;
    }
    else {
      DAT_8019ef44 = DAT_8019ef44 | 0x80;
    }
    iVar4 = 0;
    bVar1 = DAT_8019ef8c != DAT_8019ef40;
    *(undefined2 *)(DAT_8019ef8c * 0x10 + DAT_8019ed28) = 0;
    if (bVar1) {
      iVar4 = DAT_8019ef8c + 1;
    }
    puVar6 = (undefined2 *)(iVar4 * 0x10 + iVar2);
    *puVar6 = 4;
    iVar7 = 0;
    *(uint *)(puVar6 + 2) = (uint)DAT_8019ef44;
    if (iVar4 != iVar3) {
      iVar7 = iVar4 + 1;
    }
    iVar5 = 0;
    puVar6 = (undefined2 *)(iVar7 * 0x10 + iVar2);
    *puVar6 = 0x200;
    *(undefined4 *)(puVar6 + 2) = 2;
    DAT_8019ef8c = iVar5;
    if (iVar7 != iVar3) {
      iVar5 = iVar7 + 1;
      DAT_8019ef8c = iVar5;
    }
  }
  return iVar5;
}



