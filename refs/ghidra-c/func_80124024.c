
void FUN_80124024(void)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  iVar3 = FUN_800f3c3c(0);
  uVar4 = FUN_800f3a70(0x73);
  iVar5 = FUN_800f3b04(uVar4);
  sVar2 = 0x800;
  uVar1 = *DAT_8019ed44;
  uVar7 = (uint)*(ushort *)(iVar3 + 0x41);
  do {
    sVar2 = sVar2 + -1;
    puVar6 = (undefined1 *)(iVar5 + uVar7);
    uVar7 = uVar7 + 2 & 0xffff;
    *puVar6 = (char)uVar1;
    puVar6[1] = (char)((ushort)uVar1 >> 8);
  } while (sVar2 != 0);
  *(undefined1 *)(iVar3 + 0x44) = 0;
  return;
}



