
void FUN_80175b60(void)

{
  ushort uVar1;
  int iVar2;
  
  FUN_800f6630(0xd4);
  iVar2 = FUN_800f6434(0x202);
  if (iVar2 != 0) {
    FUN_800f8fb8(0xd4);
    FUN_800f654c(0x80);
    FUN_800f8188(0x2115);
    FUN_800f7210(0x6fe);
    uVar1 = *DAT_8019ed54;
    FUN_800f7210(0x700);
    (&DAT_801cfd68)[uVar1] = *DAT_8019ed54;
    FUN_800f7210(0x702);
    (&DAT_801cfd68)[uVar1 + 1 & 0xffff] = *DAT_8019ed54;
    FUN_800f6564(0x6fe);
    FUN_800f5410();
    FUN_800f4008(0x20);
    FUN_800f8188(0x6fe);
    FUN_800f6564(0x6ff);
    FUN_800f4008(0);
    FUN_800f8188(0x6ff);
    FUN_800f7210(0x6fe);
    uVar1 = *DAT_8019ed54;
    FUN_800f7210(0x704);
    (&DAT_801cfd68)[uVar1] = *DAT_8019ed54;
    FUN_800f7210(0x706);
    (&DAT_801cfd68)[uVar1 + 1 & 0xffff] = *DAT_8019ed54;
  }
  return;
}



