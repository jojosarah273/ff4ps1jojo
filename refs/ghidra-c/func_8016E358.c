
void FUN_8016e358(void)

{
  int iVar1;
  
  FUN_800f6564(0x7d21);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f9644(0x20);
    FUN_800f71dc(0x1c);
    FUN_800f658c(0x2121);
    FUN_800f922c();
    do {
      FUN_800f6be0(0x2103);
      FUN_800f87dc(0x2105);
      FUN_800f5e48();
      FUN_800f5e48();
      FUN_800f5958(4);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f9410();
    FUN_800f81b0(0x2109);
    FUN_800f971c();
    FUN_800f9660(0x20);
    FUN_800f5d24(0x7d24);
    iVar1 = FUN_800f5b8c(0x202);
    if (iVar1 != 0) {
      return;
    }
    FUN_800f6240(0x7d21);
  }
  FUN_800f5d24(0x7d22);
  iVar1 = FUN_800f5b8c(0x202);
  if (iVar1 == 0) {
    FUN_800f8f74(0x7d21);
    FUN_800f8f74(0x7d23);
    FUN_800f654c(0x1a);
    FUN_800f8188(0x7d24);
    FUN_800f6564(0x7d26);
    FUN_800f6240(0x7d26);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6b68(0xee00);
    FUN_800f8188(0x7d22);
  }
  return;
}



