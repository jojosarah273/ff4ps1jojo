
void FUN_800fe8b4(void)

{
  int iVar1;
  
  FUN_800f3c3c(0);
  iVar1 = FUN_800f3b04(0);
  *DAT_8019ed54 = 0;
  *DAT_8019ed40 = 0xf0;
  do {
    *(undefined1 *)((uint)*DAT_8019ed54 + iVar1 + 0x301) = *DAT_8019ed40;
    *DAT_8019ed54 = *DAT_8019ed54 + 4;
  } while (*DAT_8019ed54 != 0x100);
  *DAT_8019ed54 = 0;
  do {
    *(undefined1 *)((uint)*DAT_8019ed54 + iVar1 + 0x500) = 0;
    FUN_800f6364();
  } while (*DAT_8019ed54 != 0x20);
  return;
}



