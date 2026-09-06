
void FUN_8010d61c(void)

{
  int iVar1;
  
  FUN_800f824c(0x3d);
  FUN_800f8fb8(0x3e);
  FUN_800f6564(0xfe5);
  iVar1 = FUN_800f6434(0x80);
  if (iVar1 == 0) {
    FUN_800f6564(0x1701);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) goto LAB_8010d66c;
  }
  FUN_800f62bc(0x3e);
LAB_8010d66c:
  FUN_800f7270(0x3d);
  FUN_800f6c68(0x12f000);
  FUN_800f824c(6);
  FUN_8010d6a0();
  return;
}



