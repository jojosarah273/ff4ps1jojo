
void FUN_801048ec(void)

{
  int iVar1;
  
  iVar1 = FUN_800f3c3c(0);
  if (((*(byte *)(iVar1 + 3) & 0x80) != 0) && (DAT_8019ed30 == '\0')) {
    DAT_8019ed30 = '\x01';
  }
  return;
}



