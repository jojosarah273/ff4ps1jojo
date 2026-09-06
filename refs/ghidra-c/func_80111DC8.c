
void FUN_80111dc8(void)

{
  int iVar1;
  
  FUN_800f6630(0x7a);
  FUN_800f4248(3);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_800f62bc(0x79);
    FUN_800f6630(0x79);
    FUN_800f5574(6);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f8fb8(0x79);
    }
    FUN_800f71dc(0);
    FUN_800f6630(0x79);
    FUN_800f5140();
    *DAT_8019ed58 = *DAT_8019ed44;
    while( true ) {
      FUN_800f6d70(0xaaf);
      FUN_800f8768(0xe1d);
      FUN_800f6d70(0xab0);
      FUN_800f8768(0xe1e);
      *DAT_8019ed54 = *DAT_8019ed54 + 2;
      FUN_800f5958(0xe);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) break;
      *DAT_8019ed58 = *DAT_8019ed58 + 2;
      FUN_800f5a90(0xe);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f7500(0);
      }
    }
  }
  return;
}



