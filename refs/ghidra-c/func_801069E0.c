
void FUN_801069e0(void)

{
  int iVar1;
  
  FUN_800f6630(0x7f);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(0xda);
    *DAT_8019ed40 = *DAT_8019ed40 << 3;
    FUN_800f5410();
    FUN_800f4008(0x90);
    FUN_800f8188(0x4209);
    FUN_800f8f74(0x420a);
    DAT_801a0026 = DAT_801a001c;
    DAT_801a0020 = 0x100;
    DAT_801a002a = (ushort)*DAT_8019ed40 - DAT_801a001c;
    FUN_800f6630(0xbb);
    DAT_801a0022 = (ushort)*DAT_8019ed40;
  }
  else {
    DAT_8019ee64 = 0;
    DAT_801a002e = 0;
    FUN_800f6630(0xda);
    *DAT_8019ed40 = *DAT_8019ed40 << 3;
    *DAT_8019ed40 = ~*DAT_8019ed40;
    FUN_800f5410();
    FUN_800f4008(0x89);
    DAT_8019ee6c = (ushort)*DAT_8019ed40;
    DAT_801a0034 = DAT_801a002a;
    DAT_801a0030 = (ushort)*DAT_8019ed40;
    FUN_800f654c(0x81);
    FUN_800f8188(0x4200);
  }
  return;
}



