
void FUN_80181300(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = DAT_8019ee08 & 0xfe00;
  if (DAT_8019ee08 != 0xffff) {
    DAT_8019ee08 = (ushort)uVar2;
    iVar1 = (int)(((DAT_8019ee0a - uVar2) + -1) * 0x10000) >> 0x10;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar3 = (iVar1 >> 8) << 1;
    if (iVar1 >> 8 == 0) {
      iVar3 = 2;
    }
    iVar1 = uVar2 + (DAT_800d2101 & 7) * -0x2000;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    FUN_801813c0(&DAT_801cfd68 + uVar2,0x300,iVar1 >> 5 & 0xfff8,iVar3);
    DAT_8019ee0a = 0xffff;
    DAT_8019ee08 = 0xffff;
  }
  return;
}



