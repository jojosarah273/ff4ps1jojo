
void FUN_80141334(void)

{
  int iVar1;
  
  *DAT_8019ed40 = *DAT_8019ed40 << 3;
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f6c68(0xdfd1c);
    FUN_800f8960(0xf41b);
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f5a90(8);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f71dc(0x100);
  FUN_800f8d6c(0);
  FUN_800f7210(0xf41b);
  FUN_800f7500(0x4800);
  FUN_800f654c(0x1a);
  FUN_800723d0();
  FUN_800f71dc(0x100);
  FUN_800f8d6c(0);
  FUN_800f7210(0xf41d);
  FUN_800f7500(0x4880);
  FUN_800f654c(0x1a);
  FUN_800723d0();
  FUN_800f6564(0xf41f);
  FUN_800f71dc(4);
  FUN_800761c8();
  FUN_800f6564(0xf420);
  FUN_800f71dc(5);
  FUN_800761c8();
  return;
}



