
void FUN_80128480(void)

{
  int iVar1;
  
  FUN_80127718();
  FUN_800f8fb8(0x48);
  FUN_800f8fb8(0x49);
  do {
    FUN_800f6630(0x48);
    FUN_8012833c();
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f9644(0x20);
      FUN_800f926c();
      FUN_800f6658(0x48);
      FUN_800f3d48();
      *DAT_8019ed44 = *DAT_8019ed44 << 3;
      *DAT_8019ed58 = *DAT_8019ed44;
      FUN_800f939c();
      FUN_800f71dc(0x1000);
      FUN_800f6558(0x7ff);
      FUN_800f3d64(0x7e70);
      FUN_800f95a0();
      FUN_800f6558(0x2000);
      FUN_800f87dc(0x6aa);
      FUN_800f9448();
      FUN_800f9660(0x20);
    }
    FUN_800f6630(0x48);
    FUN_800f61e8();
    FUN_800f824c(0x48);
    FUN_800f5574(4);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



