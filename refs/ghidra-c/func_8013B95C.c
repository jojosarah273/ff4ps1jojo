
void FUN_8013b95c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f926c();
  FUN_800f9298();
  FUN_8016ea9c();
  FUN_80123d3c();
  FUN_800f8f74(0x1a83);
  FUN_800f7270(0x41);
  *DAT_8019ed40 = *DAT_8019ed5c;
  FUN_800f8d00(0x1bb3);
  FUN_800f8d00(0x1bb5);
  FUN_800f8188(0x1bb7);
  FUN_800f654c(8);
  FUN_800f824c(0x45);
  FUN_800f7270(0x41);
  *DAT_8019ed58 = *DAT_8019ed54;
  do {
    FUN_800f6b68(0x1804);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f5574(0x54);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) {
LAB_8013ba50:
        FUN_800f8960(0xff28);
        uVar2 = 1;
      }
      else {
        FUN_800f5574(0x60);
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) goto LAB_8013ba50;
        FUN_800f8960(0xff28);
        uVar2 = 10;
      }
      FUN_800f654c(uVar2);
      FUN_800f8960(0xff29);
    }
    else {
      FUN_800f654c(0);
      FUN_800f8960(0xff28);
      FUN_800f8960(0xff29);
    }
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f6364();
    FUN_800f5da0(0x45);
    iVar1 = FUN_800f5b8c(0x202);
    if (iVar1 == 0) {
      FUN_8013bb0c();
      FUN_80126610();
      FUN_800f8f74(0x1bc6);
      FUN_80122114();
      FUN_800f654c(0);
      FUN_800f3d48();
      FUN_800f94b8();
      FUN_800f9448();
      return;
    }
  } while( true );
}



