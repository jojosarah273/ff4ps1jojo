
void FUN_80127f2c(void)

{
  bool bVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 1;
  do {
    iVar3 = 6;
    puVar2 = &DAT_801dede2 + iVar4 * 0x20;
    do {
      *puVar2 = 0x20ff;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar3);
    bVar1 = iVar5 < 4;
    iVar4 = iVar5;
    iVar5 = iVar5 + 1;
  } while (bVar1);
  if (DAT_8019edc2 == 7) {
    DAT_801dee14 = 0x2071;
    DAT_801dee10 = 0x2054;
    DAT_801dee1c = 0x206e;
    DAT_801dee90 = 0x204e;
    DAT_801dee94 = 0x2068;
    DAT_801dee9a = 0x205f;
    DAT_801dee9e = 0x206f;
    DAT_801dee12 = 0x205c;
    DAT_801dee16 = 0x2060;
    DAT_801dee18 = 0x20ff;
    DAT_801dee1a = 0x205c;
    DAT_801dee92 = 0x2060;
    DAT_801dee96 = 0x206a;
    DAT_801dee98 = 0x20ff;
    DAT_801dee9c = 0x205c;
    DAT_801deea0 = 0x205c;
    DAT_801deea2 = 0x207a;
    return;
  }
  if (DAT_8019edc2 == 8) {
    DAT_801dee16 = 0x2054;
    DAT_801dee18 = 0x205c;
    DAT_801dee1a = 0x2071;
    DAT_801dee1e = 0x20ff;
    DAT_801dee20 = 0x20ff;
    DAT_801dede2 = 0x20ff;
    DAT_801dee22 = 0x20ff;
    DAT_801dee9a = 0x206d;
    DAT_801dee1c = 0x2060;
    DAT_801dee96 = 0x2063;
    DAT_801dee98 = 0x2060;
    DAT_801dee9c = 0x2060;
    DAT_801dee9e = 0x207a;
  }
  return;
}



