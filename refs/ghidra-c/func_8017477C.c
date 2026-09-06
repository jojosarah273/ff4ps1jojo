
void FUN_8017477c(void)

{
  int iVar1;
  
  FUN_800f71dc(0);
  FUN_800f7500(0);
  FUN_800f8fb8(7);
  do {
    FUN_800f6c68(0xfc8c0);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f8960(0x1560);
      FUN_800f63bc();
      FUN_800f62bc(7);
      FUN_800f6630(7);
      FUN_800f5574(0x18);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f8fb8(7);
      }
    }
    else {
      do {
        FUN_800f654c(0);
        FUN_800f8960(0x1560);
        FUN_800f63bc();
        FUN_800f62bc(7);
        FUN_800f6630(7);
        FUN_800f5574(0x18);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      FUN_800f8fb8(7);
    }
    FUN_800f6364();
    FUN_800f5a90(0x138);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



