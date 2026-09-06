
void FUN_80129910(void)

{
  int iVar1;
  
  FUN_800f7500(0xc852);
  FUN_800f654c(8);
  FUN_800f824c(0x45);
  do {
    FUN_800f654c(2);
    FUN_800f824c(0x4b);
    do {
      FUN_800f654c(5);
      FUN_800f824c(0x48);
      do {
        *DAT_8019ed40 = (&DAT_80199c5c)[*DAT_8019ed54];
        FUN_800f6364();
        FUN_800f5574(0);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_801245b4();
          FUN_800f8960(0);
          FUN_800f3d48();
          FUN_800f8960(0x40);
        }
        else {
          FUN_800f5ccc();
          FUN_800f8960(0);
          FUN_800f8960(0x40);
        }
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f5da0(0x48);
        iVar1 = FUN_800f5b8c(0x202);
      } while (iVar1 != 0);
      FUN_800f63bc();
      FUN_800f63bc();
      FUN_800f5da0(0x4b);
      iVar1 = FUN_800f5b8c(0x202);
    } while (iVar1 != 0);
    FUN_800f9644(0x20);
    *DAT_8019ed44 = *DAT_8019ed58;
    FUN_800f5410();
    FUN_800f4064(0x54);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f9660(0x20);
    FUN_800f5da0(0x45);
    iVar1 = FUN_800f5b8c(0x202);
  } while (iVar1 != 0);
  return;
}



