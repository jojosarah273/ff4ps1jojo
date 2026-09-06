
void FUN_8015a5b8(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_800f3c3c(0);
  *(undefined1 *)(iVar1 + 0xa9) = 0;
  *(undefined1 *)(iVar1 + 0xaa) = 0;
  pcVar2 = (char *)FUN_800f3b04(0x3558);
  if (*pcVar2 != '\0') {
    *(undefined1 *)(iVar1 + 0xa9) = 1;
  }
  FUN_8015abec();
  FUN_8015a56c();
  return;
}



