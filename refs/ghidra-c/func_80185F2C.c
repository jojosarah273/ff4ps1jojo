
void FUN_80185f2c(void)

{
  DAT_8019ef08 = FUN_80189820(&DAT_80010000);
  DAT_8019ef08 = FUN_80189884(&DAT_80028000,0x1020,(int)DAT_8019ef08);
  SpuIsTransferCompleted(1);
  SpuStart();
  FUN_80189ae8(0x7f,0x7f);
  DAT_8019eede = 0;
  DAT_8019ef0c = 0;
  SpuSetKey(0,0xffffff);
  DAT_8019ef1a = 0;
  return;
}



