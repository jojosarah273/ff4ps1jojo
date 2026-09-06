
int FUN_80188d28(uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar4 = FUN_80188ae8(3);
  iVar8 = DAT_8019ed28;
  iVar5 = -1;
  if (iVar4 == 0) {
    iVar4 = 0;
    bVar1 = DAT_8019ef8c != DAT_8019ef40;
    *(undefined2 *)(DAT_8019ef8c * 0x10 + DAT_8019ed28) = 0;
    if (bVar1) {
      iVar4 = DAT_8019ef8c + 1;
    }
    puVar6 = (undefined2 *)(iVar4 * 0x10 + iVar8);
    DAT_8019ef8c = iVar4;
    *puVar6 = 3;
    uVar2 = param_1 + 3 & 3;
    uVar7 = param_1 & 3;
    uVar7 = (*(int *)((param_1 + 3) - uVar2) << (3 - uVar2) * 8 | 0xffffffffU >> (uVar2 + 1) * 8 & 3
            ) & -1 << (4 - uVar7) * 8 | *(uint *)(param_1 - uVar7) >> uVar7 * 8;
    uVar2 = (int)puVar6 + 0xbU & 3;
    puVar3 = (uint *)(((int)puVar6 + 0xbU) - uVar2);
    *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar7 >> (3 - uVar2) * 8;
    uVar2 = (uint)(puVar6 + 4) & 3;
    puVar3 = (uint *)((int)(puVar6 + 4) - uVar2);
    *puVar3 = *puVar3 & 0xffffffffU >> (4 - uVar2) * 8 | uVar7 << uVar2 * 8;
    iVar8 = 0;
    if (DAT_8019ef8c != DAT_8019ef40) {
      iVar8 = DAT_8019ef8c + 1;
    }
    iVar5 = 0;
    bVar1 = iVar8 != DAT_8019ef40;
    *(undefined2 *)(iVar8 * 0x10 + DAT_8019ed28) = 6;
    DAT_8019ef8c = iVar5;
    if (bVar1) {
      iVar5 = iVar8 + 1;
      DAT_8019ef8c = iVar5;
    }
  }
  return iVar5;
}



