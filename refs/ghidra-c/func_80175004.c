
void FUN_80175004(void)

{
  int iVar1;
  
  FUN_800f6564(0x1700);
  FUN_800f5574(2);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f5574(0);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f71dc(0x7e);
    }
    else {
      FUN_800f71dc(0x1e);
    }
    FUN_800f6564(0x1288);
    FUN_800f4248(4);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6630(0x7a);
      FUN_800f5140();
      FUN_800f8768(0xcdb);
      *DAT_8019ed40 = ~*DAT_8019ed40;
      FUN_800f8768(0xcdc);
    }
    else {
      FUN_800f90ec(0xcdb);
      FUN_800f90ec(0xcdc);
    }
  }
  return;
}



