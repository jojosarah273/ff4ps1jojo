
void FUN_80127668(void)

{
  int iVar1;
  
  FUN_800f5ccc();
  iVar1 = FUN_800f5b8c(0x80);
  if (iVar1 == 0) {
    *DAT_8019ed40 = *DAT_8019ed40 << 3;
    FUN_800f824c();
    FUN_800f8fb8(0x45);
    FUN_800f926c();
    FUN_800f9644(0x20);
    FUN_800f7270(0x45);
    FUN_800f7500(0x1000);
    FUN_800f6558(0x7ff);
    FUN_800f3d64(0x7000);
    FUN_800f9660(0x20);
    FUN_80135b54();
    FUN_800f9448();
  }
  else {
    FUN_80127718(0x46);
  }
  return;
}



