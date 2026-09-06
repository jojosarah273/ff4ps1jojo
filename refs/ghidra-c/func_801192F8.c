
void FUN_801192f8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_80117594();
  FUN_800f824c(6);
  FUN_800f71dc(0);
  FUN_800f7500(0);
  while( true ) {
    FUN_800f6d70(0x1000);
    FUN_800f4248(0x1f);
    uVar1 = FUN_800f3c3c(6);
    FUN_800f54d4(uVar1);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) break;
    FUN_800f9644(0x20);
    *DAT_8019ed44 = *DAT_8019ed58;
    FUN_800f5410();
    FUN_800f4064(0x40);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f6558(0);
    FUN_800f9660(0x20);
    FUN_800f6364();
  }
  *DAT_8019ed40 = *DAT_8019ed5c;
  FUN_800f8188(0x1703);
  FUN_800f654c(1);
  FUN_800f824c(0xcc);
  FUN_800fe778();
  return;
}



