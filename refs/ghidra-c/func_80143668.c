
void FUN_80143668(void)

{
  int iVar1;
  
  FUN_800f654c(0x1f);
  FUN_8014a488();
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  do {
    FUN_800f6b68(0xf123);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      *DAT_8019ed40 = *DAT_8019ed5c;
      FUN_800f8188(0x34c3);
      FUN_800f8188(0x48);
      FUN_800f9330();
      FUN_800f654c(0x1f);
      FUN_8014a488();
      FUN_800f95a0();
    }
    FUN_800f6364();
    FUN_800f5958(8);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



