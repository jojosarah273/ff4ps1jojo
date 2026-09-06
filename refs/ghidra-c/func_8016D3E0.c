
void FUN_8016d3e0(void)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = FUN_800f3c3c(0);
  iVar4 = FUN_800f3b9c(0x138000,0);
  uVar1 = *(ushort *)((*DAT_8019ed44 & 0x1ff) * 2 + iVar4 + 0x65c5);
  if ((uVar1 & 0x8000) == 0) {
    *(char *)(iVar3 + 0x1a) = (char)uVar1;
    *(char *)(iVar3 + 0x1b) = (char)(uVar1 >> 8);
    FUN_8016d160();
    uVar1 = *(ushort *)(iVar3 + 0x1e);
    uVar6 = (uint)uVar1;
    uVar2 = (undefined1)(uVar1 >> 8);
    if ((uVar1 & 0x8000) == 0) goto LAB_8016d4bc;
  }
  else {
    *(char *)(iVar3 + 0x1a) = (char)(~(uint)uVar1 & 0xffff);
    *(char *)(iVar3 + 0x1b) = (char)((~(uint)uVar1 & 0xffff) >> 8);
    FUN_8016d160();
    uVar5 = ~(uint)*(ushort *)(iVar3 + 0x1e) + 1;
    uVar6 = uVar5 & 0xffff;
    uVar2 = (undefined1)(uVar6 >> 8);
    if ((uVar5 & 0x8000) == 0) {
LAB_8016d4bc:
      *(char *)(iVar3 + 0x1e) = (char)uVar6;
      *(undefined1 *)(iVar3 + 0x1f) = uVar2;
      FUN_800f5410();
      return;
    }
  }
  *(char *)(iVar3 + 0x1e) = (char)uVar6;
  *(undefined1 *)(iVar3 + 0x1f) = uVar2;
  FUN_800f5480();
  return;
}



