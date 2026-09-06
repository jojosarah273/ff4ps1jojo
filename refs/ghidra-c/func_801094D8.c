
void FUN_801094d8(void)

{
  int iVar1;
  ushort uVar2;
  
  FUN_800f7210(0x772);
  FUN_800f6630(0xdd);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    if (DAT_8019ecfd != 0) {
      *DAT_8019ed40 = (&DAT_80198cbf)[DAT_8019ecfd];
      if ((byte)(DAT_8019ecfd + 1) != '\v') {
        DAT_8019ecfd = DAT_8019ecfd + 1;
        return;
      }
      DAT_800d0772 = 0xd7;
      DAT_8019ecfd = 0;
      return;
    }
    uVar2 = *DAT_8019ed54;
    if (uVar2 < 32000) {
      FUN_800f6c68(0x118300);
      return;
    }
    if (uVar2 < 0x8100) {
      uVar2 = *DAT_8019ed54;
      *DAT_8019ed54 = uVar2 + 0x8300;
      DAT_1f8003c8 = (&DAT_8003e400)[*DAT_8019ed54];
    }
    else {
      *DAT_8019ed54 = uVar2 + 0x7f00;
      DAT_1f8003c8 = (&DAT_800414a0)[*DAT_8019ed54];
    }
  }
  else {
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      if (*DAT_8019ed54 < 0x2500) {
        FUN_800f6c68(0x13a700);
        return;
      }
      uVar2 = *DAT_8019ed54;
      *DAT_8019ed54 = uVar2 + 0xdb00;
      DAT_1f8003c8 = (&DAT_8004cf50)[*DAT_8019ed54];
    }
    else {
      if (*DAT_8019ed54 < 0x7c00) {
        FUN_800f6c68(0x108400);
        return;
      }
      uVar2 = *DAT_8019ed54;
      *DAT_8019ed54 = uVar2 + 0x8400;
      DAT_1f8003c8 = (&DAT_8003e900)[*DAT_8019ed54];
    }
  }
  *DAT_8019ed54 = uVar2;
  return;
}



