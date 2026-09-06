
void FUN_801026ec(void)

{
  int iVar1;
  
  iVar1 = FUN_800f3c3c(0);
  if (((((*(byte *)(iVar1 + 0x5a) & 0xf) == 0) && ((*(byte *)(iVar1 + 0x5c) & 0xf) == 0)) &&
      ((*(byte *)(iVar1 + 3) & 0x80) == 0)) && (DAT_8019ed30 == '\x02')) {
    DAT_8019ed30 = '\0';
    *(undefined1 *)(iVar1 + 0xab) = 0;
    *(undefined1 *)(iVar1 + 0xac) = DAT_8019ed31;
  }
  return;
}



