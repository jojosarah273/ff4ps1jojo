
void FUN_8016d160(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = FUN_800f3c3c(0);
  FUN_800f9330();
  FUN_800f9644(0x20);
  sVar2 = 0x10;
  *(undefined1 *)(iVar3 + 0x20) = 0;
  *(undefined1 *)(iVar3 + 0x21) = 0;
  *(undefined1 *)(iVar3 + 0x1c) = 0;
  *(undefined1 *)(iVar3 + 0x1d) = 0;
  *(undefined1 *)(iVar3 + 0x1e) = 0;
  *(undefined1 *)(iVar3 + 0x1f) = 0;
  do {
    uVar1 = *(ushort *)(iVar3 + 0x18);
    *(char *)(iVar3 + 0x18) = (char)(uVar1 >> 1);
    *(byte *)(iVar3 + 0x19) = (byte)(uVar1 >> 9);
    if ((uVar1 & 1) != 0) {
      uVar6 = (uint)*(ushort *)(iVar3 + 0x1c) + (uint)*(ushort *)(iVar3 + 0x1a);
      uVar4 = uVar6 & 0xffff;
      *(char *)(iVar3 + 0x1c) = (char)uVar4;
      *(char *)(iVar3 + 0x1d) = (char)(uVar4 >> 8);
      uVar4 = (uint)*(ushort *)(iVar3 + 0x1e) + (uint)*(ushort *)(iVar3 + 0x20) + (uVar6 >> 0x10) &
              0xffff;
      *(char *)(iVar3 + 0x1e) = (char)uVar4;
      *(char *)(iVar3 + 0x1f) = (char)(uVar4 >> 8);
    }
    uVar1 = *(ushort *)(iVar3 + 0x1a);
    iVar5 = (uVar1 & 0x7fff) << 1;
    sVar2 = sVar2 + -1;
    *(char *)(iVar3 + 0x1a) = (char)iVar5;
    *(char *)(iVar3 + 0x1b) = (char)((uint)iVar5 >> 8);
    uVar4 = (uint)CONCAT11(*(undefined1 *)(iVar3 + 0x21),*(undefined1 *)(iVar3 + 0x20)) * 2 +
            (uint)(uVar1 >> 0xf) & 0xffff;
    *(char *)(iVar3 + 0x20) = (char)uVar4;
    *(char *)(iVar3 + 0x21) = (char)(uVar4 >> 8);
  } while (sVar2 != 0);
  FUN_800f95a0();
  return;
}



