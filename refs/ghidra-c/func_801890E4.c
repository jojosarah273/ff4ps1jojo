
int FUN_801890e4(undefined4 param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  
  iVar5 = FUN_80188ae8(4);
  iVar6 = -1;
  iVar4 = DAT_8019ef8c;
  if (iVar5 == 0) {
    FUN_80188d28(param_3);
    puVar8 = (undefined2 *)(DAT_8019ef8c * 0x10 + DAT_8019ed28);
    *puVar8 = 2;
    *(undefined4 *)(puVar8 + 2) = param_2;
    uVar2 = param_3 + 3 & 3;
    uVar7 = param_3 & 3;
    uVar7 = (*(int *)((param_3 + 3) - uVar2) << (3 - uVar2) * 8 | 0xffffffffU >> (uVar2 + 1) * 8 & 2
            ) & -1 << (4 - uVar7) * 8 | *(uint *)(param_3 - uVar7) >> uVar7 * 8;
    uVar2 = (int)puVar8 + 0xbU & 3;
    puVar3 = (uint *)(((int)puVar8 + 0xbU) - uVar2);
    *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar7 >> (3 - uVar2) * 8;
    uVar2 = (uint)(puVar8 + 4) & 3;
    puVar3 = (uint *)((int)(puVar8 + 4) - uVar2);
    *puVar3 = *puVar3 & 0xffffffffU >> (4 - uVar2) * 8 | uVar7 << uVar2 * 8;
    iVar6 = 0;
    bVar1 = DAT_8019ef8c != DAT_8019ef40;
    *(undefined4 *)(DAT_8019ef8c * 0x10 + DAT_8019ed28 + 0xc) = param_1;
    iVar4 = iVar6;
    if (bVar1) {
      iVar6 = DAT_8019ef8c + 1;
      iVar4 = iVar6;
    }
  }
  DAT_8019ef8c = iVar4;
  return iVar6;
}



