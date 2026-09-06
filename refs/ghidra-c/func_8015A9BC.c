
void FUN_8015a9bc(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  iVar2 = FUN_800f3c3c(0);
  iVar3 = FUN_800f3b04(0x2000);
  iVar4 = (uint)*DAT_8019ed54 + iVar3;
  if (*(char *)(iVar3 + 0x1558) == '\0') {
    cVar5 = *(char *)(iVar4 + 0x17);
    cVar1 = *(char *)(iVar4 + 0x18);
    *(undefined1 *)(iVar2 + 0xae) = 2;
    *(undefined1 *)(iVar2 + 0xe2) = 2;
    cVar5 = cVar5 + cVar1;
  }
  else {
    cVar5 = *(char *)(iVar4 + 0x2f);
    *(undefined1 *)(iVar2 + 0xae) = 4;
    *(undefined1 *)(iVar2 + 0xe2) = 4;
  }
  *(char *)(iVar2 + 0xad) = cVar5;
  *(char *)(iVar2 + 0xdf) = cVar5;
  FUN_8015240c();
  iVar3 = *(byte *)(iVar2 + 0xe3) + 0x1e;
  *(char *)(iVar2 + 0xa9) = (char)iVar3;
  *(char *)(iVar2 + 0xaa) = *(char *)(iVar2 + 0xe4) + (char)((uint)iVar3 >> 8);
  FUN_8015abec();
  FUN_8015a56c();
  return;
}



