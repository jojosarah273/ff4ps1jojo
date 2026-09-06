
void FUN_8011b744(void)

{
  FUN_800f9200();
  *DAT_8019ed40 = *DAT_8019ed40 >> 3;
  FUN_800f824c(0x3d);
  FUN_800f8fb8(0x3e);
  FUN_800f93dc();
  FUN_800f4248(7);
  *DAT_8019ed58 = *DAT_8019ed44;
  return;
}



