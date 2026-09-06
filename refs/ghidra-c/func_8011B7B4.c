
void FUN_8011b7b4(void)

{
  int iVar1;
  
  FUN_800f9200();
  *DAT_8019ed40 = *DAT_8019ed40 >> 3;
  FUN_800f824c(0x3d);
  FUN_800f8fb8(0x3e);
  FUN_800f6564(0xfe5);
  iVar1 = FUN_800f6434(0x80);
  if (iVar1 == 0) {
    FUN_800f6564(0x1701);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) goto LAB_8011b83c;
  }
  FUN_800f6630(0x3d);
  FUN_800f5410();
  FUN_800f4008(0x20);
  FUN_800f824c(0x3d);
LAB_8011b83c:
  FUN_800f93dc();
  FUN_800f4248(7);
  *DAT_8019ed58 = *DAT_8019ed44;
  return;
}



