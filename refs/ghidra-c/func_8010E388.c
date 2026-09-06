
void FUN_8010e388(void)

{
  int iVar1;
  
  FUN_800f654c(0x10);
  FUN_800f8188(0xacf);
  FUN_800f71dc(0x20);
  FUN_800f8d00(0xad2);
  FUN_800f654c(7);
  FUN_800f8188(0xacd);
  FUN_800f8f74(0xace);
  FUN_800f654c(2);
  FUN_800f8188(0xad0);
  FUN_800f8188(0xad1);
  FUN_80115bcc();
  FUN_800f654c(1);
  FUN_800f824c(0xe3);
  FUN_800f654c(0x23);
  FUN_800fd804();
  FUN_800f71dc(0xc0);
  FUN_800f8d6c(0x89);
  do {
    FUN_800fe778();
    FUN_800fe870();
    FUN_800f6564(0x1707);
    FUN_800f5480();
    FUN_800f8058(0x10);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6630(0x7a);
    *DAT_8019ed40 = *DAT_8019ed40 >> 4;
    FUN_800f4248(1);
    *DAT_8019ed58 = *DAT_8019ed44;
    *DAT_8019ed40 = (&DAT_80198bd8)[*DAT_8019ed54];
    FUN_800f8188(0xad4);
    *DAT_8019ed40 = (&DAT_80198be8)[*DAT_8019ed58];
    FUN_800f5410();
    FUN_800f4008((&DAT_80198be0)[*DAT_8019ed54]);
    FUN_800f8188(0xad5);
    FUN_80115d2c();
    FUN_800ff024();
    FUN_800f7270(0x89);
    FUN_800f5e48();
    FUN_800f8d6c(0x89);
    iVar1 = FUN_800f5c64(0x202);
  } while (iVar1 != 0);
  FUN_800f8fb8(0xe3);
  FUN_8011ea5c();
  return;
}



