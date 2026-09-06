
void FUN_80115bcc(void)

{
  int iVar1;
  
  FUN_800f8fb8(0xe5);
  FUN_800f6564(0xacd);
  *DAT_8019ed40 = *DAT_8019ed40 << 5;
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f71dc(0);
  do {
    FUN_800f6564(0xace);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f6c68(0xd81f0);
      FUN_800f8960(0xddb);
    }
    else {
      FUN_800f6c68(0xd8200);
      FUN_800f8960(0xdfb);
    }
    FUN_800f63bc();
    FUN_800f6364();
    FUN_800f5958(0x10);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f71dc(0);
  do {
    *DAT_8019ed40 = *DAT_8019ed5c;
    *DAT_8019ed40 = *DAT_8019ed40 >> 2;
    FUN_800f4248(3);
    *DAT_8019ed40 = ~*DAT_8019ed40;
    FUN_800f8768(0xa6d);
    *DAT_8019ed54 = *DAT_8019ed54 + 4;
    FUN_800f5958(0x40);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



