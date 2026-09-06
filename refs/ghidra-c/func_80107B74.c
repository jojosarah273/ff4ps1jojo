
void FUN_80107b74(void)

{
  int iVar1;
  
  FUN_800f71dc(0);
  do {
    FUN_800f90ec(0x712);
    FUN_800f6364();
    FUN_800f5958(0x60);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f71dc(0);
  FUN_800f7500(0);
  do {
    FUN_800f6b68(0x1440);
    FUN_800f5574(0xce);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      FUN_800f5574(0xe7);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) {
LAB_80107c24:
        FUN_800f8960(0x712);
        FUN_800f6b68(0x1441);
        FUN_800f8960(0x713);
        *DAT_8019ed58 = *DAT_8019ed58 + 2;
      }
      else {
        FUN_800f5574(0xeb);
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) {
          FUN_800f5574(0xfe);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) goto LAB_80107c24;
        }
      }
    }
    *DAT_8019ed54 = *DAT_8019ed54 + 2;
    FUN_800f5958(0x60);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
  } while( true );
}



