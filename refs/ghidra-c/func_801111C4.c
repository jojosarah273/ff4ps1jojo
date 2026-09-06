
void FUN_801111c4(void)

{
  FUN_800fe7b0();
  FUN_800f6630(0x60);
  FUN_800f5480();
  FUN_800f8058(0x10);
  DAT_8019ee6a = (ushort)*DAT_8019ed40;
  FUN_800f6630(0x61);
  FUN_800f8058(0);
  DAT_8019ecfe = 1;
  DAT_8019ee6a = DAT_8019ee6a | (ushort)*DAT_8019ed40 << 8;
  return;
}



