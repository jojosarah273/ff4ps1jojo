
void FUN_8013d5c8(void)

{
  int iVar1;
  
  FUN_8013d690();
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f9644(0x20);
  do {
    FUN_800f6de8(0x340);
    *DAT_8019ed44 = *DAT_8019ed44 ^ 0xff;
    FUN_800f89d4(0x380);
    FUN_800f6de8(0x342);
    FUN_800f89d4(0x382);
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f5a90(0x40);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f971c();
  FUN_800f9660(0x20);
  return;
}



