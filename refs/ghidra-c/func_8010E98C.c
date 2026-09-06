
void FUN_8010e98c(void)

{
  int iVar1;
  
  FUN_8010e0d0();
  FUN_800f654c(0x20);
  FUN_800f824c(0xad);
  FUN_800fe870();
  do {
    FUN_800fe7b0();
    FUN_800f8f74(0x420c);
    FUN_800f62bc(0xad);
    FUN_800fe5d4();
    FUN_800fe6e4();
    FUN_800f6630(0xad);
    *DAT_8019ed40 = *DAT_8019ed40 >> 3;
    FUN_800f61e8();
    FUN_8017559c();
    FUN_800f6630(0xad);
    FUN_800f5574(0x78);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  do {
    FUN_800fe7b0();
    FUN_800f8f74(0x420c);
    FUN_800fe6e4();
    FUN_800f6630(2);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 != 0) break;
    FUN_800f6630(3);
    iVar1 = FUN_800f6434(2);
  } while (iVar1 != 0);
  FUN_8010e128();
  do {
    FUN_800fe7b0();
    FUN_800f8f74(0x420c);
    FUN_800f5da0(0xad);
    FUN_800fe5d4();
    FUN_800fe6e4();
    FUN_800f6630(0xad);
    *DAT_8019ed40 = *DAT_8019ed40 >> 3;
    FUN_8017559c();
    FUN_800f6630(0xad);
    FUN_800f5574(0x20);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f654c(0x10);
  FUN_800f824c(0xad);
  FUN_8011ea5c();
  return;
}



