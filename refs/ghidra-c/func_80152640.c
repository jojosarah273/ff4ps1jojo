
void FUN_80152640(void)

{
  int iVar1;
  
  FUN_800f824c(0x82);
  FUN_800f8ebc(0x80);
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f6630(0xe5);
  iVar1 = FUN_800f6434(2);
  if (iVar1 != 0) {
    return;
  }
  do {
    FUN_800f67fc(0x80);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f5da0(0xe5);
      FUN_800f6630(0xe5);
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) {
        FUN_800f63bc();
        return;
      }
    }
    FUN_800f63bc();
  } while( true );
}



