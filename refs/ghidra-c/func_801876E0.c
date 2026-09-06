
void FUN_801876e0(void)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = FUN_80188240();
  if (iVar2 != 0) {
    return;
  }
  if (DAT_8019ef0a == 0) {
    return;
  }
  uVar1 = DAT_8019ef0a;
  switch((int)((DAT_8019ef0a - 1) * 0x10000) >> 0x10) {
  case 0:
    iVar2 = FUN_801917f8(1,0);
    if (iVar2 == 2) {
      DAT_8019ef0a = 0x10;
      FUN_80187a10((int)DAT_8019eee0);
      DAT_8019ef0a = 2;
      return;
    }
    uVar1 = 0x20;
    goto joined_r0x80187908;
  case 1:
    FUN_80189b8c(1,(int)DAT_8019ef16,(int)DAT_8019ef16,0);
    DAT_8019eece = DAT_8019eece + -1;
    uVar1 = 4;
    if (DAT_8019eece != 0) {
      return;
    }
    break;
  case 3:
    DAT_8019ef16 = DAT_8019ef16 + -0x27;
    iVar2 = (int)DAT_8019ef16;
    if (0 < iVar2) {
LAB_8018786c:
      FUN_80189b8c(1,iVar2,iVar2,0);
      return;
    }
    DAT_8019ef16 = 0;
    FUN_80189b8c(1,0,0,0);
    uVar1 = 9;
    break;
  case 7:
    iVar2 = FUN_801917f8(1,0);
    if (iVar2 == 2) {
      DAT_8019ef0a = 0;
      if (DAT_8019ef20 != 0) {
        FUN_80187924((int)DAT_8019eee0,DAT_8019eecc);
        DAT_8019ef0a = 1;
        return;
      }
      DAT_8019ef0a = 0;
      return;
    }
    uVar1 = 9;
joined_r0x80187908:
    if (iVar2 != 5) {
      return;
    }
    break;
  case 8:
    iVar2 = FUN_801917f8(1,0);
    if ((iVar2 != 2) && (iVar2 != 5)) {
      return;
    }
    CdControl('\t',(u_char *)0x0,(u_char *)0x0);
    DAT_8019ef0a = 8;
    return;
  case 0x1f:
    iVar2 = FUN_80188240();
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_801917f8(1,0);
    if (iVar2 == 0) {
      return;
    }
    FUN_80187924((int)DAT_8019eee0,DAT_8019eecc);
    uVar1 = 1;
    break;
  case 0x3f:
    DAT_8019ef16 = DAT_8019ef16 + -5;
    iVar2 = (int)DAT_8019ef16;
    if (0 < iVar2) goto LAB_8018786c;
    DAT_8019ef16 = 0;
    FUN_80189b8c(1,0,0,0);
    uVar1 = 9;
  }
  DAT_8019ef0a = uVar1;
  return;
}



