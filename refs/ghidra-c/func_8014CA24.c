
void FUN_8014ca24(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  do {
    FUN_800f8768(0xf28f);
    FUN_800f6364();
    FUN_800f5958(0x10);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f6564(0xf2d0);
  FUN_800f5574(6);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f71dc(0xf28f);
    FUN_800f8d6c(8);
    FUN_800f654c(0x80);
    FUN_800f8188(0xf27a);
    FUN_800f654c(200);
    FUN_800f824c(0x2c);
    FUN_800f654c(0x54);
    FUN_800f824c(0x2d);
    return;
  }
  FUN_800f6ea8(2);
  FUN_800f4248(0xf0);
  FUN_800f5574(0xd0);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
LAB_8014cb38:
    FUN_800f654c(0x44);
    FUN_800f824c(0x2d);
    FUN_800f71dc(0xf28f);
    FUN_800f8d6c(8);
    FUN_800f654c(0x80);
    FUN_800f8188(0xf27a);
    FUN_800f6630(0);
    iVar1 = FUN_800f6434(0x202);
    uVar2 = 0x60;
    if (iVar1 == 0) {
      uVar2 = 0xd8;
    }
    FUN_800f654c(uVar2);
    FUN_800f824c(0x2c);
    return;
  }
  FUN_800f5574(0xe0);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) goto LAB_8014cb38;
  FUN_800f5574(0x30);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) goto LAB_8014cb38;
  FUN_800f5574(0x40);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(0x50);
    iVar1 = FUN_800f53d4();
    uVar2 = 0x80;
    if (iVar1 != 0) goto LAB_8014cbf4;
  }
  else {
    FUN_800f6564(0xf49a);
    FUN_800f5574(0x91);
    iVar1 = FUN_800f53d4();
    uVar2 = 0x60;
    if (iVar1 == 0) {
LAB_8014cbf4:
      FUN_800f654c(uVar2);
      FUN_800f824c(0x2c);
      FUN_800f654c(0x44);
      FUN_800f824c(0x2d);
      FUN_800f71dc(0xf28f);
      FUN_800f8d6c(8);
      FUN_800f654c(0x80);
      FUN_800f8188(0xf27a);
      return;
    }
  }
  FUN_800f7500(1);
  FUN_800f67fc(2);
  FUN_800f4248(0x60);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(0);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f8fb8(0x2d);
      FUN_800f654c(0x18);
      FUN_800f824c(0x2c);
      FUN_800f654c(1);
      FUN_800f8188(0xf261);
      FUN_800f71dc(0xf053);
    }
    else {
      FUN_800f971c();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f8d6c(0x2c);
      FUN_800f8188(0xf261);
      FUN_800f71dc(0xf043);
    }
    goto LAB_8014ce7c;
  }
  FUN_800f5574(0x40);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(0x60);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f6630(0);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f8fb8(0x2c);
        FUN_800f654c(0xf8);
        FUN_800f824c(0x2d);
        FUN_8014baa4();
        FUN_800f654c(1);
        FUN_800f8188(0xf261);
        FUN_800f71dc(0xf06d);
      }
      else {
        FUN_800f71dc(0);
        FUN_800f8d6c(0x2c);
        FUN_8014baa4();
        FUN_800f654c(0);
        FUN_800f8188(0xf261);
        FUN_800f71dc(0xf05d);
      }
      goto LAB_8014ce7c;
    }
    FUN_800f6630(0);
    iVar1 = FUN_800f6434(0x202);
    uVar2 = 0xe8;
    if (iVar1 == 0) goto LAB_8014cd6c;
    FUN_800f8fb8(0x2c);
    FUN_800f654c(0xf0);
    FUN_800f824c(0x2d);
  }
  else {
    FUN_800f6630(0);
    iVar1 = FUN_800f6434(0x202);
    uVar2 = 0xf4;
    if (iVar1 == 0) {
LAB_8014cd6c:
      FUN_800f654c(uVar2);
      FUN_800f824c(0x2d);
      FUN_800f654c(0x17);
      FUN_800f824c(0x2c);
      FUN_8014c9cc();
      FUN_800f654c(1);
      FUN_800f8188(0xf261);
      FUN_800f71dc(0xf039);
      goto LAB_8014ce7c;
    }
    FUN_800f71dc(0);
    FUN_800f8d6c(0x2c);
  }
  FUN_8014c9cc();
  FUN_800f971c();
  FUN_800f8188(0xf261);
  FUN_800f71dc(0xf029);
LAB_8014ce7c:
  FUN_800f8d6c(8);
  return;
}



