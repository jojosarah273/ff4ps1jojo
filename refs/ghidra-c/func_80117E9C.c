
void FUN_80117e9c(void)

{
  int iVar1;
  
  if (DAT_8019ed30 != '\0') {
    DAT_8019ed30 = '\0';
    FUN_800f8fb8(0xac);
  }
  FUN_800f6630(0xac);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f62bc(0xac);
    FUN_8011ea5c();
  }
  else {
    FUN_800f8fb8(0xac);
    FUN_8011ea5c();
  }
  return;
}



