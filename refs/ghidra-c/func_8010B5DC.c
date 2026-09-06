
void FUN_8010b5dc(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_800f3c3c(0);
  iVar2 = FUN_800f3b04(0);
  *(undefined1 *)(iVar1 + 0xd7) = 0;
  iVar2 = (uint)*(ushort *)(iVar1 + 0xaf) + iVar2;
  uVar3 = ((uint)*(byte *)(iVar2 + 0x904) * 0x10 + (uint)*(ushort *)(iVar1 + 0xc) & 0xffff) -
          (uint)*(ushort *)(iVar1 + 0x5a) & 0x3ff;
  *(char *)(iVar1 + 0x18) = (char)uVar3;
  *(char *)(iVar1 + 0x19) = (char)(uVar3 >> 8);
  if (uVar3 < 0x100) {
    uVar3 = ((uint)*(byte *)(iVar2 + 0x906) * 0x10 + (uint)*(ushort *)(iVar1 + 0xe) & 0xffff) -
            (uint)*(ushort *)(iVar1 + 0x5c) & 0x3ff;
    *(char *)(iVar1 + 0x1a) = (char)uVar3;
    *(char *)(iVar1 + 0x1b) = (char)(uVar3 >> 8);
    if (uVar3 < 0xf0) goto LAB_8010b6d0;
  }
  uVar3 = *(ushort *)(iVar1 + 0xd7) + 1 & 0xffff;
  *(char *)(iVar1 + 0xd7) = (char)uVar3;
  *(char *)(iVar1 + 0xd8) = (char)(uVar3 >> 8);
LAB_8010b6d0:
  *DAT_8019ed40 = 0;
  return;
}



