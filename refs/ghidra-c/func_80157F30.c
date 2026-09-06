
void FUN_80157f30(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f8fb8(0xd1);
  FUN_800f8fb8(0);
  FUN_800f6564(0x38f6);
  FUN_800f824c(0xa9);
  do {
    FUN_800f6564(0x3601);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      uVar2 = FUN_800f3c3c(0xa9);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_80157f98;
    }
    else {
LAB_80157f98:
      FUN_800f8fb8(0xad);
      FUN_800f8fb8(0xae);
      FUN_800f6630(0xa9);
      FUN_800f5140();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f6b68(0x29eb);
      FUN_800f824c(0xab);
      do {
        uVar2 = FUN_800f3c3c(0xab);
        FUN_800f4f28(uVar2);
        iVar1 = FUN_800f4fac(0x101);
        if (iVar1 == 0) {
          FUN_801580b0();
          FUN_800f6630(0xd1);
          iVar1 = FUN_800f6434(0x202);
          if (iVar1 != 0) {
            return;
          }
        }
        FUN_800f62bc(0xad);
        FUN_800f6630(0xad);
        FUN_800f5574(7);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
    }
    FUN_800f62bc(0xa9);
    FUN_800f6630(0xa9);
    FUN_800f5574(0xd);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f8fb8(0xa9);
    }
    FUN_800f62bc(0);
    FUN_800f6630(0);
    FUN_800f5574(0xd);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
  } while( true );
}



