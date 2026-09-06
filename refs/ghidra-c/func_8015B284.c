
void FUN_8015b284(void)

{
  int iVar1;
  
  FUN_800f8f74(0x353d);
  FUN_800f5574(0x6d);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
LAB_8015b2ec:
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f8d6c(0xe5);
    FUN_800f71dc(0x9100);
    FUN_800f8d6c(0x80);
    FUN_800f654c(0xf);
    FUN_800f824c(0x82);
    FUN_800f654c(8);
    FUN_801526f8();
    FUN_800f6564(0x28a2);
    FUN_800f4248(0x1f);
    FUN_800f5140();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6c68(0xfa550);
    FUN_800f824c(0xab);
    FUN_800f6c68(0xfa551);
    FUN_800f824c(0xac);
    FUN_800f9644(0x20);
    FUN_800f6658(0xab);
    FUN_800f43a0(0xa9);
    FUN_800f9660(0x20);
    iVar1 = FUN_800f41e8(0x202);
    if (iVar1 != 0) goto LAB_8015b3cc;
  }
  else {
    FUN_800f5574(0xde);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f5574(0xb0);
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) {
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) goto LAB_8015b3cc;
        goto LAB_8015b2ec;
      }
    }
  }
  FUN_800f6240(0x353d);
LAB_8015b3cc:
  FUN_800f9644(0x20);
  FUN_800f971c();
  FUN_800f9660(0x20);
  return;
}



