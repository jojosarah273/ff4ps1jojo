
void FUN_8010df98(void)

{
  int iVar1;
  
  FUN_800f71dc(0);
  do {
    FUN_800f6b68(0x1000);
    FUN_800f4248(0x1f);
    FUN_800f5574(0xb);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f654c(0x80);
      FUN_800f8768(0x1003);
      FUN_800f654c(0);
    }
    else {
      FUN_800f90ec(0x1003);
      FUN_800f654c(1);
    }
    FUN_800f8768(0x1007);
    FUN_800f90ec(0x1008);
    FUN_800f90ec(0x1004);
    FUN_80117df8();
    FUN_800f5958(0x140);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_8011ea5c();
  return;
}



