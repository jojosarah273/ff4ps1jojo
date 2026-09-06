
void FUN_80119ac8(void)

{
  int iVar1;
  
  FUN_8010d9d4();
  FUN_800f5574(0x80);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f6630(0x5c);
    FUN_800f5410();
    FUN_800f4008(8);
    DAT_8019ee68 = (ushort)*DAT_8019ed40;
    FUN_800f6630(0x5d);
    FUN_800f4008(0);
    DAT_8019ee68 = DAT_8019ee68 | (ushort)*DAT_8019ed40 << 8;
    FUN_800f6630(0x60);
    FUN_800f5410();
    FUN_800f4008(8);
    DAT_8019ee6a = (ushort)*DAT_8019ed40;
    FUN_800f6630(0x61);
    FUN_800f4008(0);
    DAT_8019ecfe = 0x11;
    DAT_8019ee6a = DAT_8019ee6a | (ushort)*DAT_8019ed40 << 8;
  }
  return;
}



