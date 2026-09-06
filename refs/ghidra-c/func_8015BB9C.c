
void FUN_8015bb9c(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  iVar2 = FUN_800f3c3c(0);
  iVar3 = FUN_800f3b04(0);
  iVar4 = FUN_800f3b04(0x2000);
  if (((*(char *)(iVar3 + 0x1800) != -0x49) || (*(char *)(iVar3 + 0x1801) == '\0')) ||
     (*(char *)(iVar4 + 0x18f7) != '\0')) {
    if ((*(char *)(iVar4 + 0x18f3) != '\0') ||
       (((cVar1 = *(char *)(iVar4 + 0x282), cVar1 != 'c' && (cVar1 != 'b')) && (cVar1 != 'a')))) {
      *(undefined1 *)(iVar4 + 0x18d6) = 0;
    }
    sVar5 = *DAT_8019ed48;
    do {
      sVar5 = sVar5 + 1;
      if (*(char *)((uint)*DAT_8019ed54 + iVar4 + 0x1929) == *(char *)(iVar2 + 0xd2)) {
        return;
      }
    } while (sVar5 != 5);
    *(undefined1 *)(iVar2 + 0x8c) = *(undefined1 *)(iVar2 + 0xd0);
    *DAT_8019ed40 = *(char *)(iVar2 + 0xd2);
    FUN_80152cdc();
    *DAT_8019ed40 = '\x03';
    FUN_8015310c();
    iVar3 = (uint)*(ushort *)(iVar4 + 0x1598) + iVar4;
    *(byte *)(iVar3 + 0xa06) = *(byte *)(iVar3 + 0xa06) & 0xfe;
    *(undefined1 *)(iVar2 + 0xd0) = *(undefined1 *)(iVar2 + 0xd2);
    FUN_8015c54c();
    cVar1 = *(char *)(iVar2 + 0xd0);
    *(char *)(iVar2 + 0xaa) = cVar1;
    *(undefined1 *)(iVar2 + 0xd0) = *(undefined1 *)(iVar2 + 0x8c);
    if (cVar1 != -1) {
      *(undefined1 *)((uint)*(byte *)(iVar4 + 0x192f) + iVar4 + 0x1929) =
           *(undefined1 *)(iVar2 + 0xd2);
      *(char *)(iVar4 + 0x192f) = *(char *)(iVar4 + 0x192f) + '\x01';
    }
  }
  return;
}



