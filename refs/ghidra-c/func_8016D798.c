
void FUN_8016d798(void)

{
  int iVar1;
  
  FUN_800f5574(0x42);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f5480();
    FUN_800f8058(0xf);
    FUN_800f5140();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6c68(0x16fa40);
    FUN_800f82ec(0x39);
    FUN_800f6c68(0x16fa41);
    FUN_800f82ec(0x3c);
    FUN_800f63bc();
  }
  else {
    FUN_800f82ec(0x3c);
    FUN_800f654c(0xff);
    FUN_800f82ec(0x39);
    FUN_800f63bc();
  }
  return;
}



