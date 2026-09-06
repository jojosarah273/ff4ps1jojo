
void FUN_80104934(void)

{
  int iVar1;
  
  FUN_800f6630(0xd5);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    return;
  }
  FUN_800f8fb8(0xc4);
  FUN_80102c30();
  FUN_800f6630(0xb1);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6630(4);
    FUN_800f824c(2);
    FUN_800f6630(5);
    FUN_800f824c(3);
  }
  FUN_800f6630(0xa1);
  FUN_800f4248(4);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(0xa1);
    FUN_800f4248(3);
    FUN_800f824c(0xd2);
  }
  FUN_801051a8();
  FUN_800f6630(0xa1);
  FUN_800f4248(3);
  FUN_800f5410();
  FUN_800f4008(4);
  FUN_800f824c(10);
  FUN_800f6630(3);
  FUN_800f4248(1);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f6630(0xcf);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f654c(1);
      FUN_800f8188(0x1705);
    }
    FUN_800f654c(2);
    FUN_800f8188(0x709);
    FUN_801048ec();
    FUN_80104e14();
    FUN_800f5574(0);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) goto LAB_80104a84;
LAB_80104c34:
    FUN_800f6630(0xe0);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f6564(0x709);
      FUN_800f824c(0xab);
      FUN_80105098();
      FUN_800f6630(0xea);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f62bc(0xea);
      }
      FUN_800f6630(0xb1);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) goto LAB_80104d8c;
    }
    FUN_800f6630(0xab);
    FUN_800f7864();
    iVar1 = FUN_800f7728(0x101);
    if (iVar1 == 0) {
      FUN_800f5574(0);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6564(0x70e);
        FUN_800f5574(0x70);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f5574(0x71);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) goto LAB_80104d8c;
        }
        FUN_800f6564(0x1707);
        FUN_800f61e8();
        FUN_800f824c(0xe);
        FUN_80104db4();
      }
      else {
        FUN_800f6564(0x70c);
        FUN_800f5574(0x70);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f5574(0x71);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) goto LAB_80104d8c;
        }
        FUN_800f6564(0x1707);
        FUN_800f5ccc();
        FUN_800f824c(0xe);
        FUN_80104db4();
      }
    }
  }
  else {
LAB_80104a84:
    FUN_800f6630(3);
    FUN_800f4248(2);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6630(0xcf);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f654c(3);
        FUN_800f8188(0x1705);
      }
      FUN_800f654c(4);
      FUN_800f8188(0x709);
      FUN_801048ec();
      FUN_80104e14();
      FUN_800f5574(0);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_80104c34;
    }
    FUN_800f6630(3);
    FUN_800f4248(4);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6630(0xcf);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f654c(2);
        FUN_800f8188(0x1705);
      }
      FUN_800f654c(3);
      FUN_800f8188(0x709);
      FUN_801048ec();
      FUN_80104e14();
      FUN_800f5574(0);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_80104c34;
    }
    FUN_800f6630(3);
    FUN_800f4248(8);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6630(0xcf);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f654c(0);
        FUN_800f8188(0x1705);
      }
      FUN_800f654c(1);
      FUN_800f8188(0x709);
      FUN_801048ec();
      FUN_80104e14();
      FUN_800f5574(0);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_80104c34;
    }
    FUN_800f8fb8(0xab);
    FUN_80105098();
    FUN_800f6630(0xb1);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      return;
    }
  }
LAB_80104d8c:
  FUN_800ffb5c();
  FUN_800ffcac();
  FUN_8011c768();
  return;
}



