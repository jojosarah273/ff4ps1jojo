
void FUN_8014d98c(void)

{
  int iVar1;
  
  FUN_800f6564(0xf451);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6564(0xf453);
    FUN_800f4280(0xf452);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f6240(0xf454);
      FUN_800f6564(0xf454);
      FUN_800f4248(1);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f6b68(0xf455);
      FUN_800f71dc(0xf);
      FUN_800760d0();
    }
    FUN_800f6240(0xf453);
  }
  return;
}



