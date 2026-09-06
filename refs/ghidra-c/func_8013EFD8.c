
void FUN_8013efd8(void)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  iVar3 = FUN_800f3b04(0x2000);
  puVar4 = (ushort *)FUN_800f3c3c(0);
  if (*(char *)(iVar3 + 0x4cc0) != '\0') {
    do {
      uVar5 = FUN_800f3a70(0);
      puVar6 = (undefined2 *)FUN_800f3b04(uVar5);
      uVar9 = 0;
      puVar7 = puVar6;
      do {
        *DAT_8019ed44 = *puVar7;
        FUN_800f922c();
        uVar9 = uVar9 + 2 & 0xffff;
        puVar7 = (undefined2 *)((int)puVar6 + uVar9);
      } while (uVar9 != 0x40);
      uVar9 = 0;
      do {
        FUN_800f9410();
        puVar8 = (undefined1 *)((int)puVar6 + uVar9);
        uVar1 = *DAT_8019ed44;
        uVar9 = uVar9 + 2 & 0xffff;
        *puVar8 = (char)uVar1;
        puVar8[1] = (byte)((ushort)uVar1 >> 8) ^ 0x40;
      } while (uVar9 != 0x40);
      uVar2 = *puVar4;
      FUN_800f5410();
      uVar9 = uVar2 + 0x40 & 0xffff;
      *(char *)puVar4 = (char)uVar9;
      *(char *)((int)puVar4 + 1) = (char)(uVar9 >> 8);
      uVar9 = puVar4[1] - 1 & 0xffff;
      *(char *)(puVar4 + 1) = (char)uVar9;
      *(char *)((int)puVar4 + 3) = (char)(uVar9 >> 8);
    } while (uVar9 != 0);
    FUN_800f971c();
  }
  return;
}



