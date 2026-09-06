
void FUN_801136d4(void)

{
  int iVar1;
  
  FUN_800f8fb8(0x79);
  do {
    FUN_800f654c(0x23);
    FUN_800fd804();
    FUN_800f654c(0x20);
    FUN_800f8188(0xacf);
    FUN_800f654c(2);
    FUN_800f8188(0xad0);
    FUN_800f8188(0xad1);
    FUN_800f71dc(8);
    FUN_800f8d00(0xad2);
    FUN_800f654c(6);
    FUN_800f8188(0xacd);
    FUN_800f8f74(0xace);
    FUN_800f6630(0x79);
    FUN_800f5140();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6c68(0x14fc56);
    FUN_800f8188(0xad4);
    FUN_800f6c68(0x14fc57);
    FUN_800f8188(0xad5);
    FUN_80115bcc();
    do {
      FUN_800fe7d8();
      FUN_80119ac8();
      FUN_80115d2c();
      FUN_800f7210(0xad2);
      FUN_800f5958(4);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f654c(1);
        FUN_800f824c(0xe5);
      }
      FUN_800f5958(0);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f62bc(0x79);
    FUN_800f6630(0x79);
    FUN_800f5574(8);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_8011ea5c();
  return;
}



