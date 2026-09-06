
void FUN_80104354(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6564(0x6d0);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f654c(0x36);
    FUN_8011b6b4();
    FUN_800f5574(0);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f6564(0x171f);
      uVar2 = FUN_800f3b04(0x171b);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f7210(0x1719);
        uVar2 = FUN_800f3b04(0x1706);
        FUN_800f56ac(uVar2);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_80104804();
          return;
        }
      }
    }
    FUN_800f654c(0x30);
    FUN_800f824c(0x79);
    FUN_800f8fb8(0x7a);
    do {
      while( true ) {
        FUN_80102e78();
        FUN_800f6630(0x79);
        FUN_800f5574(0x21);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) break;
        FUN_800f5da0(0xb7);
        FUN_800f6630(0xb7);
        FUN_800f5410();
        FUN_800f4008(0x10);
        FUN_800f824c(0xad);
        FUN_800f6630(0xb7);
        FUN_8017559c();
        FUN_800f5da0(0x79);
      }
      FUN_800f6630(0xa2);
      FUN_800f4248(0x10);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) {
LAB_801045f4:
        FUN_80103310();
        return;
      }
      FUN_800f7210(0x1719);
      uVar2 = FUN_800f3b04(0x1706);
      FUN_800f56ac(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_801045f4;
      FUN_800f6564(0x1723);
      uVar2 = FUN_800f3b04(0x171f);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f7210(0x1721);
        uVar2 = FUN_800f3b04(0x1706);
        FUN_800f56ac(uVar2);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) goto LAB_801045f4;
      }
      FUN_800f6564(0x1727);
      uVar2 = FUN_800f3b04(0x171f);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f7210(0x1725);
        uVar2 = FUN_800f3b04(0x1706);
        FUN_800f56ac(uVar2);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) goto LAB_801045f4;
      }
      FUN_800f6630(0x79);
      FUN_800f7864();
      FUN_800f8188(0x6fd);
      FUN_800f5da0(0x79);
      FUN_800f5da0(0x79);
      iVar1 = FUN_800f5b8c(0x202);
    } while (iVar1 != 0);
    FUN_800f8f74(0x1704);
    FUN_800f8fb8(0xac);
    FUN_800f8fb8(0x7b);
    FUN_800f654c(2);
    FUN_800f8188(0x1705);
    FUN_800f7210(0x1706);
    FUN_800f8d00(0x171d);
    FUN_800f6564(0x1701);
    FUN_800f8188(0x171f);
    FUN_800fd718();
    FUN_800f6240(0x1a02);
  }
  else {
    FUN_800f6564(0x1723);
    uVar2 = FUN_800f3b04(0x1701);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f7210(0x1706);
      uVar2 = FUN_800f3b04(0x1721);
      FUN_800f56ac(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_800f6564(0x1727);
    uVar2 = FUN_800f3b04(0x1701);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f7210(0x1706);
      uVar2 = FUN_800f3b04(0x1725);
      FUN_800f56ac(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_800f6630(0xa1);
    FUN_800f4248(0x10);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_801046f4();
    }
  }
  return;
}



