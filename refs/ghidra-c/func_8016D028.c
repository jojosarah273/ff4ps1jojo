
void FUN_8016d028(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = FUN_800f3c3c(0);
  sVar2 = 0x10;
  *(undefined1 *)(iVar3 + 0x16) = 0;
  *(undefined1 *)(iVar3 + 0x17) = 0;
  *(undefined1 *)(iVar3 + 0x12) = 0;
  *(undefined1 *)(iVar3 + 0x13) = 0;
  *(undefined1 *)(iVar3 + 0x14) = 0;
  *(undefined1 *)(iVar3 + 0x15) = 0;
  do {
    uVar1 = *(ushort *)(iVar3 + 0xe);
    *(char *)(iVar3 + 0xe) = (char)(uVar1 >> 1);
    *(byte *)(iVar3 + 0xf) = (byte)(uVar1 >> 9);
    if ((uVar1 & 1) != 0) {
      uVar6 = (uint)*(ushort *)(iVar3 + 0x12) + (uint)*(ushort *)(iVar3 + 0x10);
      uVar5 = uVar6 & 0xffff;
      *(char *)(iVar3 + 0x12) = (char)uVar5;
      *(char *)(iVar3 + 0x13) = (char)(uVar5 >> 8);
      uVar5 = (uint)*(ushort *)(iVar3 + 0x14) + (uint)*(ushort *)(iVar3 + 0x16) + (uVar6 >> 0x10) &
              0xffff;
      *(char *)(iVar3 + 0x14) = (char)uVar5;
      *(char *)(iVar3 + 0x15) = (char)(uVar5 >> 8);
    }
    uVar1 = *(ushort *)(iVar3 + 0x10);
    iVar4 = (uVar1 & 0x7fff) << 1;
    sVar2 = sVar2 + -1;
    *(char *)(iVar3 + 0x10) = (char)iVar4;
    *(char *)(iVar3 + 0x11) = (char)((uint)iVar4 >> 8);
    uVar5 = (uint)CONCAT11(*(undefined1 *)(iVar3 + 0x17),*(undefined1 *)(iVar3 + 0x16)) * 2 +
            (uint)(uVar1 >> 0xf) & 0xffff;
    *(char *)(iVar3 + 0x16) = (char)uVar5;
    *(char *)(iVar3 + 0x17) = (char)(uVar5 >> 8);
  } while (sVar2 != 0);
  return;
}



