
void FUN_80102d68(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_800f3c3c(0);
  iVar2 = FUN_800f3b04(0);
  if (*(char *)(iVar2 + 0x1700) == '\x03') {
    if (((*(byte *)(iVar1 + 0x1a) & 0x80) == 0) && (*(byte *)(iVar1 + 0x1a) < 0x20)) {
      uVar4 = (uint)*(byte *)(iVar1 + 0x1b);
      if (((*(byte *)(iVar1 + 0x1b) & 0x80) == 0) && (uVar4 < 0x20)) goto LAB_80102e0c;
    }
    if ((*(byte *)(iVar2 + 0xfdf) & 0x80) == 0) {
      *(undefined1 *)(iVar1 + 0x1e) = 7;
    }
    else {
      *(undefined1 *)(iVar1 + 0x1e) = 0;
    }
    *(undefined1 *)(iVar1 + 0x1f) = 0;
  }
  else {
    uVar4 = *(byte *)(iVar1 + 0x1b) & 0x3f;
LAB_80102e0c:
    *(char *)(iVar1 + 0x3e) = (char)uVar4;
    *(byte *)(iVar1 + 0x3d) = *(byte *)(iVar1 + 0x1a);
    iVar3 = (uint)(byte)(&DAT_800e8071)[(uint)*(byte *)(iVar1 + 0x1a) | uVar4 << 8] * 2;
    *(undefined *)(iVar1 + 6) = (&DAT_800e8071)[(uint)*(byte *)(iVar1 + 0x1a) | uVar4 << 8];
    *(char *)(iVar1 + 0x18) = (char)iVar3;
    *(char *)(iVar1 + 0x19) = (char)((uint)iVar3 >> 8);
    *(undefined1 *)(iVar1 + 0x1e) = *(undefined1 *)(iVar3 + iVar2 + 0xedb);
    *(undefined1 *)(iVar1 + 0x1f) = *(undefined1 *)(iVar3 + iVar2 + 0xedc);
  }
  return;
}



