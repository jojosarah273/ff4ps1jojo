
void FUN_8010e158(void)

{
  int iVar1;
  
  FUN_800f8fb8(0x7b);
  FUN_800f8fb8(0x7a);
  FUN_800f71dc(100);
  FUN_800f8d6c(0x89);
  do {
    FUN_800fe778();
    FUN_800f6630(0x89);
    FUN_800f5574(0x40);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      *DAT_8019ed40 = *DAT_8019ed40 >> 2;
      FUN_800f824c(0xb7);
      FUN_800f5410();
      FUN_800f4008(0x10);
      FUN_800f824c(0xad);
    }
    FUN_800f654c(1);
    FUN_800f824c(0xd5);
    FUN_800fe870();
    FUN_800f654c(2);
    FUN_800f824c(5);
    FUN_800f8fb8(4);
    FUN_800f654c(1);
    FUN_800f824c(0xd5);
    FUN_8010543c();
    FUN_80102770();
    FUN_80172ba8();
    FUN_800f7270(0x89);
    FUN_800f5e48();
    FUN_800f8d6c(0x89);
    iVar1 = FUN_800f5c64(0x202);
  } while (iVar1 != 0);
  FUN_8011ea5c();
  return;
}



