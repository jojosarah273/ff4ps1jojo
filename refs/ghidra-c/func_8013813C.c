
void FUN_8013813c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = DAT_8019eda4 * 0x800;
  uVar2 = (uint)(byte)(&DAT_800d28a4)[iVar3] + (uint)(byte)(&DAT_800d28a5)[iVar3] * 0x100 +
          (uint)(byte)(&DAT_800d28a6)[iVar3] * 0x10000;
  pcVar4 = &DAT_800d2200 + iVar3;
  DAT_8019edb4 = uVar2 / 0xe10;
  DAT_8019edac = uVar2 / 0x3c + DAT_8019edb4 * -0x3c;
  iVar3 = 0;
  if ((*pcVar4 != -0x7f) && (*pcVar4 != -0x75)) {
    iVar1 = 1;
    do {
      iVar3 = iVar1;
      pcVar4 = pcVar4 + 0x40;
      if ((4 < iVar3) || (*pcVar4 == -0x7f)) break;
      iVar1 = iVar3 + 1;
    } while (*pcVar4 != -0x75);
  }
  iVar3 = iVar3 * 0x40 + DAT_8019eda4 * 0x800;
  DAT_8019eda0 = (uint)(byte)(&DAT_800d2207)[iVar3] + (uint)*(byte *)(iVar3 + -0x7ff2ddf8) * 0x100;
  DAT_8019edbc = (uint)*(byte *)(iVar3 + -0x7ff2ddf7) + (uint)*(byte *)(iVar3 + -0x7ff2ddf6) * 0x100
  ;
  return;
}



