
void FUN_80114880(void)

{
  int iVar1;
  
  FUN_800f71dc(0x70);
  FUN_800f8d6c(0x2c);
  FUN_800f71dc(0x70);
  FUN_800f8d6c(0x2e);
  FUN_800f71dc(0xd0);
  FUN_800f8d6c(0x89);
  do {
    do {
      FUN_80114d18();
      FUN_800f7270(0x89);
      FUN_800f5e48();
      FUN_800f8d6c(0x89);
      FUN_800f5958(0x80);
      iVar1 = FUN_800f53c0();
    } while (iVar1 != 0);
    FUN_800f7270(0x2c);
    FUN_800f5e48();
    FUN_800f8d6c(0x2c);
    FUN_800f5958(0xfff0);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_8011ea5c();
  return;
}



