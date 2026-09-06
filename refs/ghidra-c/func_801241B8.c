
void FUN_801241b8(void)

{
  int iVar1;
  
  FUN_800f9644(0x20);
  FUN_800f7500(0x80);
  FUN_800f71dc(0);
  do {
    FUN_800f6558(0xf0ff);
    FUN_800f88e4(0x300);
    FUN_800f6558(0x3000);
    FUN_800f88e4(0x302);
    *DAT_8019ed54 = *DAT_8019ed54 + 4;
    FUN_800f5ea0();
    iVar1 = FUN_800f5c64(0x202);
  } while (iVar1 != 0);
  FUN_800f7500(0x10);
  FUN_800f6558(0);
  do {
    FUN_800f88e4(0x300);
    *DAT_8019ed54 = *DAT_8019ed54 + 2;
    FUN_800f5ea0();
    iVar1 = FUN_800f5c64(0x202);
  } while (iVar1 != 0);
  FUN_800f6558(0xaaaa);
  FUN_800f8210(0x500);
  FUN_800f9660(0x20);
  return;
}



