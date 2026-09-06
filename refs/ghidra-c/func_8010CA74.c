
void FUN_8010ca74(void)

{
  int iVar1;
  
  FUN_800f8fb8(0xae);
  FUN_800f7210(0x9d1);
  FUN_800f8d00(0x9cf);
  do {
    FUN_800f6c68(0x138300);
    FUN_8010d61c();
    FUN_800f7210(0x9cf);
    *DAT_8019ed54 = *DAT_8019ed54 + 4;
    FUN_800f8d00(0x9cf);
    FUN_800f62bc(0xae);
    FUN_800f6630(0xae);
    FUN_800f5574(0xc);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



