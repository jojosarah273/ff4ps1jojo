
void FUN_80142bcc(void)

{
  int iVar1;
  
  FUN_800f8f74(0xf428);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8fb8(0);
  FUN_800f654c(0x40);
  FUN_800f824c(2);
  do {
    FUN_800f6630(0);
    FUN_800f8768(0xf133);
    FUN_800f5410();
    FUN_800f4008(0x20);
    FUN_800f824c(0);
    FUN_800f6630(2);
    FUN_800f8768(0xf173);
    FUN_800f5410();
    FUN_800f4008(0x20);
    FUN_800f824c(2);
    FUN_800f6630(4);
    FUN_800f8768(0xf1b3);
    FUN_800f6630(6);
    FUN_800f8768(0xf1f3);
    FUN_800f6364();
    FUN_800f5958(0x40);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



