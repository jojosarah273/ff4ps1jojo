
void FUN_801172dc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f5574(0xc4);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f5480();
    FUN_800f8058(0xc0);
    FUN_800f5140();
    *DAT_8019ed58 = *DAT_8019ed44;
    *DAT_8019ed40 = (&DAT_80199274)[*DAT_8019ed58];
    FUN_800f824c(4);
    *DAT_8019ed40 = (&DAT_80199275)[*DAT_8019ed58];
    FUN_800f824c(5);
    goto LAB_80117544;
  }
  FUN_800f8fb8(4);
  FUN_800f8fb8(5);
  FUN_800f5574(200);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f5480();
    FUN_800f8058(0xc4);
    FUN_800f8188(0x1705);
    goto LAB_80117544;
  }
  FUN_800f5574(200);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f654c(1);
    FUN_800f824c(0xd3);
    goto LAB_80117544;
  }
  FUN_800f5574(0xc9);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f8fb8(0xd3);
    goto LAB_80117544;
  }
  FUN_800f5574(0xca);
  iVar1 = FUN_800f53d4();
  uVar2 = 5;
  if (iVar1 == 0) {
    FUN_800f5574(0xcb);
    iVar1 = FUN_800f53d4();
    uVar2 = 4;
    if (iVar1 != 0) goto LAB_80117494;
    FUN_800f5574(0xcc);
    iVar1 = FUN_800f53d4();
    uVar2 = 6;
    if (iVar1 != 0) goto LAB_80117494;
    FUN_800f5574(0xcd);
    iVar1 = FUN_800f53d4();
    uVar2 = 7;
    if (iVar1 != 0) goto LAB_80117494;
    FUN_800f5574(0xce);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f6630(0xd8);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f654c(1);
      }
      else {
        FUN_800f654c(0);
      }
      FUN_800f824c(0xd8);
    }
    else {
      FUN_800f6630(0xcf);
      *DAT_8019ed40 = *DAT_8019ed40 ^ 1;
      FUN_800f824c(0xcf);
    }
  }
  else {
LAB_80117494:
    FUN_800f654c(uVar2);
    FUN_800f8188(0x1705);
  }
  FUN_800f8fb8(0xab);
  FUN_800f8fb8(2);
  FUN_800f8fb8(3);
LAB_80117544:
  FUN_800f8fb8(0x7b);
  FUN_800f6564(0x1700);
  FUN_800f5574(3);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_8010543c();
  }
  else {
    FUN_80104934();
  }
  return;
}



