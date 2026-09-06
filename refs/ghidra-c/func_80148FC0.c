
void FUN_80148fc0(void)

{
  int iVar1;
  
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6c68(0x1cff00);
  iVar1 = FUN_800f6434(0x8080);
  if (iVar1 == 0) {
    *DAT_8019ed40 = ~*DAT_8019ed40;
    FUN_800f824c(0x26);
    FUN_80072720();
    FUN_800f6630(0x2b);
    *DAT_8019ed40 = ~*DAT_8019ed40;
    FUN_800f61e8();
    iVar1 = FUN_800f60a8(0x8080);
    if (iVar1 != 0) {
LAB_80149094:
      FUN_800f5410();
      return;
    }
  }
  else {
    FUN_800f824c(0x26);
    FUN_80072720();
    FUN_800f6630(0x2b);
    iVar1 = FUN_800f6434(0x80);
    if (iVar1 == 0) goto LAB_80149094;
  }
  FUN_800f5480();
  return;
}



