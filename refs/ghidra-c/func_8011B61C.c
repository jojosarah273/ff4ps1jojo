
void FUN_8011b61c(void)

{
  int iVar1;
  
  FUN_8011b7b4();
  FUN_800f654c(1);
  while( true ) {
    FUN_800f5a90(0);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) break;
    FUN_800f5140();
    FUN_800f5ea0();
  }
  FUN_800f7270(0x3d);
  iVar1 = FUN_800f3b9c(0x12e0,*DAT_8019ed54);
  FUN_800f78c4(iVar1 + (uint)*DAT_8019ed54);
  FUN_800f885c(0x12e0);
  return;
}



