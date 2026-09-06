
void FUN_801218ec(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_80121d64();
    FUN_800f62bc(0x66);
  }
  else {
    FUN_80121e94();
    FUN_800f5da0(0x66);
  }
  FUN_80121ce4();
  FUN_800f6630(0x65);
  FUN_800f5480();
  uVar2 = FUN_800f3c3c(99);
  FUN_800f7f48(uVar2);
  FUN_800f5ccc();
  FUN_800f824c(0x1d);
  FUN_800f654c(0xfc);
  FUN_800f8768(0);
  *DAT_8019ed54 = *DAT_8019ed54 + 2;
  FUN_800f654c(0xfd);
  do {
    FUN_800f8768(0);
    *DAT_8019ed54 = *DAT_8019ed54 + 2;
    FUN_800f5da0(0x1d);
    iVar1 = FUN_800f5b8c(0x202);
  } while (iVar1 != 0);
  FUN_800f654c(0xfe);
  FUN_800f8768(0);
  return;
}



