
void FUN_8012833c(void)

{
  int iVar1;
  
  FUN_800f824c(0x51);
  *DAT_8019ed40 = *DAT_8019ed40 << 3;
  FUN_800f824c(0x46);
  FUN_800f8fb8(0x45);
  FUN_800f7270(0x45);
  FUN_800f9644(0x20);
  FUN_800f6cf4(0x7007fe);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f9660(0x20);
  FUN_800f5a90(0x1be4);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f6630(0x51);
    FUN_800f61e8();
    FUN_801387d8();
    FUN_800f9644(0x20);
    *DAT_8019ed44 = *DAT_8019ed54;
    FUN_800f7270(0x45);
    iVar1 = FUN_800f3b9c(0x7007fc,*DAT_8019ed54);
    FUN_800f5520(iVar1 + (uint)*DAT_8019ed54);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f9660(0x20);
      FUN_800f5480();
      return;
    }
  }
  FUN_800f9660(0x20);
  FUN_800f5410();
  return;
}



