
void FUN_80174f64(void)

{
  int iVar1;
  
  FUN_800f6564(0x1704);
  FUN_800f5574(6);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f6630(0x7a);
    *DAT_8019ed40 = *DAT_8019ed40 >> 2;
    FUN_800f4248(0xe);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6c68(0x15c3da);
    FUN_800f8188(0xec7);
    FUN_800f6c68(0x15c3db);
    FUN_800f8188(0xec8);
  }
  return;
}



