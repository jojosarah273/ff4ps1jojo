
void FUN_800fe028(void)

{
  int iVar1;
  
  FUN_800f654c(0x80);
  FUN_800f8188(0x2115);
  FUN_800f71dc(0);
  do {
    *DAT_8019ed40 = (char)((ushort)(&DAT_801cfd68)[*DAT_8019ed54 + 0x2000] >> 8);
    FUN_800f885c(0x7f5800);
    FUN_800f6364();
    FUN_800f5958(0x100);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f71dc(0);
  do {
    *DAT_8019ed40 = (char)((ushort)(&DAT_801cfd68)[*DAT_8019ed54 + 0x1e80] >> 8);
    FUN_800f885c(0x7f5900);
    FUN_800f6364();
    FUN_800f5958(0x100);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



