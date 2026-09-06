
void FUN_80110664(void)

{
  int iVar1;
  
  FUN_80110024();
  FUN_800f654c(2);
  FUN_800f824c(0xca);
  FUN_800f71dc(0x180);
  FUN_800f8d6c(0x89);
  do {
    FUN_800fe778();
    FUN_800f7270(0x89);
    FUN_800f5958(0x10);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      *DAT_8019ed40 = *DAT_8019ed5c;
      FUN_800f8188(0x2100);
    }
    FUN_800fe870();
    FUN_800f654c(0x70);
    FUN_800f8188(0xad4);
    FUN_800f654c(0x58);
    FUN_800f8188(0xad5);
    FUN_800f654c(3);
    FUN_800f8188(0xad0);
    FUN_800f8188(0xad1);
    FUN_80115d2c();
    FUN_80110474();
    FUN_800f6630(0x89);
    FUN_800f4248(0x3f);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f654c(0x23);
      FUN_800fd804();
    }
    FUN_800f7270(0x89);
    FUN_800f5e48();
    FUN_800f8d6c(0x89);
    iVar1 = FUN_800f5c64(0x202);
  } while (iVar1 != 0);
  FUN_800f8fb8(0x80);
  FUN_8011ea5c();
  return;
}



