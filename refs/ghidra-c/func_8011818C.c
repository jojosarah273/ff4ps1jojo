
void FUN_8011818c(void)

{
  int iVar1;
  
  FUN_800f4248(0x7f);
  FUN_800f9644(0x20);
  *DAT_8019ed44 = *DAT_8019ed44 << 6;
  FUN_800f8274(0x40);
  FUN_800f6558(0);
  FUN_800f9660(0x20);
  FUN_800f654c(0x40);
  FUN_800f824c(7);
  FUN_800f7594(0x3d);
  FUN_800f7270(0x40);
  do {
    FUN_800f6b68(0x1140);
    FUN_800f8960(0x1000);
    FUN_800f90ec(0x1140);
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f5da0(7);
    iVar1 = FUN_800f5b8c(0x202);
  } while (iVar1 != 0);
  return;
}



