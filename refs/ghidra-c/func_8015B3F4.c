
void FUN_8015b3f4(void)

{
  undefined2 uVar1;
  ushort uVar2;
  char cVar3;
  short sVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  
  puVar5 = (undefined1 *)FUN_800f3c3c(0);
  iVar6 = FUN_800f3b04(0);
  iVar7 = FUN_800f3b04(0x2000);
  puVar5[0xa9] = 0;
  puVar5[0xaa] = 0;
  puVar5[0xab] = 0;
  puVar5[0xac] = 0;
  iVar8 = (uint)*(ushort *)(puVar5 + 0xa6) + iVar7;
  if ((*(byte *)(iVar8 + 3) & 4) != 0) {
    puVar5[0xa9] = 0x80;
  }
  if ((*(byte *)(iVar8 + 3) & 0x20) != 0) {
    puVar5[0xab] = 0x80;
  }
  if ((*(byte *)(iVar8 + 3) & 8) != 0) {
    puVar5[0xac] = 0x80;
  }
  puVar5[0xad] = *(undefined1 *)(iVar8 + 0xb);
  if (*(char *)(iVar8 + 0xc) != '\0') {
    puVar5[0xad] = 0xff;
  }
  if ((*(byte *)((uint)*(ushort *)(puVar5 + 0xa6) + iVar7 + 6) & 0x80) == 0) {
    sVar4 = 5;
    uVar10 = (uint)*(ushort *)(iVar7 + 0x1534);
    do {
      if (*(char *)(uVar10 + iVar7 + 0x1303) != -1) {
        *DAT_8019ed54 = (short)uVar10;
      }
      FUN_8015b6fc();
      sVar4 = sVar4 + -1;
      uVar10 = uVar10 + 4 & 0xffff;
    } while (sVar4 != 0);
  }
  if (puVar5[0xaa] != '\0') {
    *puVar5 = *(undefined1 *)(iVar6 + 0x1822);
    *DAT_8019ed40 = 9;
    FUN_80150c38();
  }
  puVar5[0xaf] = *(undefined1 *)(iVar7 + 0x1536);
  puVar5[0xb0] = *(undefined1 *)(iVar7 + 0x1537);
  uVar1 = *DAT_8019ed48;
  puVar5[0xb1] = (char)uVar1;
  puVar5[0xb2] = (char)((ushort)uVar1 >> 8);
  do {
    uVar2 = *(ushort *)(puVar5 + 0xaf);
    iVar8 = (uint)uVar2 + iVar7;
    if (*(char *)(iVar8 + 0xc7b) != '\0') {
      bVar9 = puVar5[0xac] | puVar5[0xab] | puVar5[0xa9] | *(byte *)(iVar8 + 0xc7a) & 0x7f;
      *(byte *)(iVar8 + 0xc7a) = bVar9;
      if ((puVar5[0xa9] == '\0') &&
         (((cVar3 = '\x19', (puVar5[0xab] & 0x80) != 0 ||
           (cVar3 = '\x1a', (puVar5[0xac] & 0x80) != 0)) && (*(char *)(iVar8 + 0xc7b) == cVar3)))) {
        *(byte *)(iVar8 + 0xc7a) = bVar9 & 0x7f;
      }
      iVar8 = (uint)uVar2 + iVar7;
      if ((*(byte *)(iVar8 + 0xc7d) != puVar5[0xad]) &&
         ((byte)puVar5[0xad] <= *(byte *)(iVar8 + 0xc7d))) {
        *(byte *)(iVar8 + 0xc7a) = *(byte *)(iVar8 + 0xc7a) | 0x80;
      }
    }
    uVar2 = *(ushort *)(puVar5 + 0xaf);
    uVar10 = uVar2 + 4 & 0xffff;
    cVar3 = puVar5[0xb1];
    puVar5[0xb0] = (char)(uVar10 >> 8);
    puVar5[0xaf] = (char)uVar10;
    puVar5[0xb1] = cVar3 + '\x01';
  } while ((char)(cVar3 + '\x01') != 'H');
  *puVar5 = *(undefined1 *)(iVar6 + 0x1822);
  *DAT_8019ed40 = 0xe;
  *DAT_8019ed54 = (short)(uVar2 + 4);
  FUN_80150c38();
  return;
}



