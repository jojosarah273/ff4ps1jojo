
void FUN_8014d5a0(void)

{
  int iVar1;
  
  FUN_800f9200();
  FUN_800f5574(0x31);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(0x33);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f6564(0xf485);
      iVar1 = FUN_800f6434(0x80);
      if (iVar1 == 0) {
        FUN_800f654c(0xc0);
      }
      else {
        FUN_800f654c(0x40);
      }
      goto LAB_8014d620;
    }
  }
  FUN_800f654c(0x80);
LAB_8014d620:
  FUN_800f8188(0xf414);
  FUN_800f93dc();
  FUN_800f8188(0xf413);
  FUN_800f654c(0xff);
  FUN_800f8188(0xf415);
  FUN_800f654c(2);
  FUN_800f8188(0xf412);
  FUN_80177dac();
  FUN_800f960c();
  FUN_800f95a0();
  return;
}



