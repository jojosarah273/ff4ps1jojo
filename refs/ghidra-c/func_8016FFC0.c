
void FUN_8016ffc0(void)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  FUN_800f926c();
  FUN_800f971c();
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f654c(0x80);
  FUN_800f8188(0x2100);
  FUN_800f824c(0x88);
  FUN_800f654c(0x80);
  FUN_800f8188(0x2115);
  uVar2 = 0x2000;
  puVar3 = &DAT_800e0a00;
  iVar4 = 0x800;
  do {
    puVar1 = &DAT_801cfd68 + uVar2;
    iVar4 = iVar4 + -1;
    *puVar3 = *(undefined1 *)puVar1;
    uVar2 = uVar2 + 1 & 0xffff;
    puVar3[1] = (char)((ushort)*puVar1 >> 8);
    puVar3 = puVar3 + 2;
  } while (iVar4 != 0);
  DAT_800d2116 = (undefined1)uVar2;
  DAT_800d2117 = (undefined1)(uVar2 >> 8);
  FUN_800f9448();
  return;
}



