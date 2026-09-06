
void FUN_8012ae00(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f9200();
  FUN_800f9200();
  FUN_800f6564(0x1b1f);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f93dc();
    FUN_8013441c();
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
LAB_8012af60:
      FUN_800f6630(0x34);
      goto LAB_8012afd0;
    }
LAB_8012af70:
    FUN_800f5574(0x19);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5574(200);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574(0xec);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) goto LAB_8012afb8;
      }
    }
    FUN_800f5574(0xfe);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f6564(0x1bc6);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f654c(8);
        uVar2 = FUN_800f3c3c(0x34);
        FUN_800f78c4(uVar2);
        FUN_800f824c(0xdb);
        FUN_800f93dc();
        return;
      }
    }
  }
  else {
    FUN_800f93dc();
    FUN_800f5574(0xe2);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5574(0xe3);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_8012ae90;
LAB_8012aee0:
      FUN_800f5574(0x19);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574(200);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          uVar2 = FUN_800f3b04(0x1b1d);
          FUN_800f54d4(uVar2);
          iVar1 = FUN_800f53c0();
          if (iVar1 != 0) {
            uVar2 = FUN_800f3b04(0x1b1e);
            FUN_800f54d4(uVar2);
            iVar1 = FUN_800f53d4();
            if ((iVar1 != 0) || (iVar1 = FUN_800f53c0(), iVar1 == 0)) goto LAB_8012af60;
          }
        }
      }
      goto LAB_8012af70;
    }
LAB_8012ae90:
    FUN_800f9200();
    FUN_800f6564(0x1bc9);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) {
      FUN_800f93dc();
      goto LAB_8012aee0;
    }
    FUN_800f93dc();
    FUN_800f6564(0x1a02);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) goto LAB_8012af60;
  }
LAB_8012afb8:
  FUN_800f654c(4);
  uVar2 = FUN_800f3c3c(0x34);
  FUN_800f78c4(uVar2);
LAB_8012afd0:
  FUN_800f824c(0xdb);
  FUN_800f93dc();
  return;
}



