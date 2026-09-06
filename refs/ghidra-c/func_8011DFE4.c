
void FUN_8011dfe4(void)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar4 = FUN_800f3c3c(0);
  iVar5 = FUN_800f3b9c(0x168000,0);
  uVar7 = (uint)*(ushort *)(iVar4 + 0x40);
  uVar9 = (uint)*(ushort *)(iVar5 + (uint)*(ushort *)(iVar4 + 0x3d));
  while( true ) {
    while( true ) {
      bVar1 = *(byte *)(uVar9 + iVar5 + 0x480);
      if ((bVar1 & 0x80) != 0) break;
      if ((((bVar1 == 0) || (bVar1 == 0x10)) || (bVar1 == 0x20)) || (bVar1 == 0x30)) {
        uVar8 = uVar7 + 1 & 0xffff;
        (&DAT_800e8071)[uVar7] = bVar1;
        cVar2 = (bVar1 >> 3) + (bVar1 >> 4);
        uVar6 = uVar8 + 3;
        (&DAT_800e8072)[uVar8] = cVar2 + 'q';
        (&DAT_800e8071)[uVar8] = cVar2 + 'p';
        (&DAT_800e8073)[uVar8] = cVar2 + 'r';
      }
      else {
        (&DAT_800e8071)[uVar7] = bVar1;
        uVar6 = uVar7 + 1;
      }
      uVar7 = uVar6 & 0xffff;
      if ((uVar6 & 0xff) == 0) goto LAB_8011e144;
      uVar9 = uVar9 + 1 & 0xffff;
    }
    sVar3 = *(byte *)(uVar9 + iVar5 + 0x481) + 1;
    do {
      (&DAT_800e8071)[uVar7] = bVar1 & 0x7f;
      uVar6 = uVar7 + 1;
      sVar3 = sVar3 + -1;
      uVar7 = uVar6 & 0xffff;
    } while (sVar3 != 0);
    if ((uVar6 & 0xff) == 0) break;
    uVar9 = uVar9 + 2 & 0xffff;
  }
LAB_8011e144:
  *(char *)(iVar4 + 0x41) = (char)(uVar7 >> 8);
  *(char *)(iVar4 + 0x40) = (char)uVar7;
  *(char *)(iVar4 + 0x3d) = (char)uVar9;
  *(char *)(iVar4 + 0x3e) = (char)(uVar9 >> 8);
  return;
}



