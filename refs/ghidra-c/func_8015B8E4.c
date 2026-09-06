
void FUN_8015b8e4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f7270(0xa6);
  FUN_800f8fb8(0xb3);
  FUN_800f5574(8);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(0xc);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5574(0x10);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6b68(0x2033);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f5574(0x61);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) {
            return;
          }
        }
        FUN_800f6b68(0x2035);
        iVar1 = FUN_800f6434(2);
        uVar2 = 0x61;
        if (iVar1 != 0) goto LAB_8015bb84;
        goto LAB_8015b9dc;
      }
    }
    else {
      FUN_800f6b68(0x2033);
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) goto LAB_8015bb84;
      FUN_800f5574(0x4d);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) goto LAB_8015bb84;
      FUN_800f5574(0x61);
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) goto LAB_8015bb84;
      FUN_800f6b68(0x2035);
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) goto LAB_8015bb84;
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        return;
      }
    }
    FUN_800f9330();
    FUN_800f7210(0x3536);
    FUN_800f9330();
    FUN_800f7270(0xa6);
    FUN_800f6b68(0x2003);
    FUN_800f4248(0x3c);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f71dc(1);
      FUN_800f6630(0xd0);
      uVar2 = FUN_800f3b04(0x3539);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5e48();
      }
      FUN_800f6b68(0x3539);
      FUN_80152cdc();
      FUN_800f7270(0xa6);
      FUN_800f6b68(0x2003);
      FUN_800f4248(0xfc);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) {
        FUN_800f6b68(0x2004);
        FUN_800f4248(0x3c);
        iVar1 = FUN_800f4120(0x202);
        if (iVar1 == 0) {
          FUN_800f6b68(0x2005);
          FUN_800f4248(0x40);
          iVar1 = FUN_800f4120(0x202);
          if (iVar1 == 0) {
            FUN_800f5da0(0xb3);
          }
        }
      }
    }
    FUN_800f95a0();
    FUN_800f8d00(0x3536);
    FUN_800f95a0();
    FUN_800f8d6c(0xa6);
  }
  else {
    FUN_800f6b68(0x2033);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) {
      FUN_800f6b68(0x2035);
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) goto LAB_8015bb84;
    }
    FUN_800f5574(0x44);
    iVar1 = FUN_800f53c0();
    uVar2 = 0x4d;
    if (iVar1 == 0) goto LAB_8015bb84;
LAB_8015b9dc:
    FUN_800f5574(uVar2);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      return;
    }
  }
LAB_8015bb84:
  FUN_800f62bc(0xb3);
  return;
}



