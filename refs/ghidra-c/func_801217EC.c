
void FUN_801217ec(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_80121f64();
    FUN_800f62bc(100);
  }
  else {
    FUN_80121e6c();
    FUN_800f5da0(100);
  }
  FUN_80121c0c();
  FUN_800f6630(0x65);
  FUN_800f5480();
  uVar2 = FUN_800f3c3c(99);
  FUN_800f7f48(uVar2);
  FUN_800f5ccc();
  FUN_800f824c(0x1d);
  FUN_800f654c(0xf7);
  FUN_800f8768(0);
  *DAT_8019ed54 = *DAT_8019ed54 + 2;
  FUN_800f654c(0xf8);
  do {
    FUN_800f8768(0);
    *DAT_8019ed54 = *DAT_8019ed54 + 2;
    FUN_800f5da0(0x1d);
    iVar1 = FUN_800f5b8c(0x202);
  } while (iVar1 != 0);
  FUN_800f654c(0xf9);
  FUN_800f8768(0);
  return;
}



