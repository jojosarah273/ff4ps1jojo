
void FUN_80114dc8(void)

{
  int iVar1;
  
  FUN_80114fd0();
  FUN_800f71dc(0xc0);
  FUN_800f8d6c(0x89);
  do {
    FUN_800fe778();
    FUN_800f7270(0x89);
    FUN_800f5958(0xf);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      *DAT_8019ed40 = *DAT_8019ed5c;
      FUN_800f8188(0x2100);
    }
    FUN_800fe870();
    FUN_80172ba8();
    FUN_80115080();
    FUN_800f654c(0x40);
    FUN_8011511c();
    FUN_800f654c(4);
    FUN_800f824c(5);
    FUN_800f8fb8(4);
    FUN_80115038();
    FUN_800f7270(0x89);
    FUN_800f5e48();
    FUN_800f8d6c(0x89);
    iVar1 = FUN_800f5c64(0x202);
  } while (iVar1 != 0);
  FUN_800f8fb8(0x80);
  FUN_8011ea5c();
  return;
}



