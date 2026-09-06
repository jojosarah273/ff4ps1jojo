
void FUN_800fdd8c(void)

{
  int iVar1;
  
  FUN_800f6630(0x7c);
  FUN_800f4248(1);
  iVar1 = FUN_800f4120(2);
  if (iVar1 != 0) {
    FUN_800f6630(0x7c);
    FUN_800f7864();
    FUN_800f4248(0xf);
    FUN_800f9690();
    *DAT_8019ed40 = (&DAT_80198aa4)[*DAT_8019ed54];
    *DAT_8019ed40 = *DAT_8019ed40 | 7;
    FUN_800f9690();
    FUN_800f6c68(0x7f5800);
    FUN_800f824c(6);
    FUN_800f7500(7);
    do {
      FUN_800f6c68(0x7f57ff);
      FUN_800f885c(0x7f5800);
      FUN_800f5e48();
      FUN_800f5ea0();
      iVar1 = FUN_800f5c64(0x202);
    } while (iVar1 != 0);
    *DAT_8019ed40 = *DAT_8019ed5c;
    FUN_800f4248(0xf8);
    FUN_800f5410();
    FUN_800f4008(0x47);
    FUN_800f9690();
    FUN_800f6c68(0x7f5800);
    FUN_800f885c(0x7f57b9);
    FUN_800f7500(7);
    do {
      FUN_800f6c68(0x7f57ff);
      FUN_800f885c(0x7f5800);
      FUN_800f5e48();
      FUN_800f5ea0();
      iVar1 = FUN_800f5c64(0x202);
    } while (iVar1 != 0);
    *DAT_8019ed40 = *DAT_8019ed5c;
    FUN_800f4248(0xf8);
    FUN_800f9690();
    FUN_800f6630(6);
    FUN_800f885c(0x7f5800);
  }
  return;
}



