
void FUN_8010d458(void)

{
  int iVar1;
  
  FUN_800f9330();
  FUN_800f6630(0xc);
  FUN_800f5574(0x20);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f6630(0xe);
    FUN_800f5574(0x20);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_8010d54c();
      FUN_800f7270(0x3d);
      FUN_800f6c68(0x7f4c00);
      goto LAB_8010d4d4;
    }
  }
  FUN_800f654c(0);
LAB_8010d4d4:
  FUN_800f95a0();
  return;
}



