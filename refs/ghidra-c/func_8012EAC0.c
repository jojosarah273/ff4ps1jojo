
void FUN_8012eac0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    FUN_800f7270(0x1d);
    FUN_800f6364();
    FUN_800f8d6c(0x23);
    FUN_800f6e30(0x1d);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f7594(0x1d);
      FUN_800f63bc();
      FUN_800f63bc();
      do {
        FUN_800f6d70(0);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f5574(0xfe);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) {
            FUN_800f8a18(0x1d);
            FUN_800f6d70(1);
            FUN_800f8a18(0x23);
            FUN_800f654c(0);
            FUN_800f8960(0);
            FUN_800f8960(1);
            break;
          }
        }
        FUN_800f63bc();
        FUN_800f63bc();
        uVar2 = FUN_800f3c3c(0x25);
        FUN_800f5804(uVar2);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
    }
    FUN_800f7270(0x1d);
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f8d6c(0x1d);
    uVar2 = FUN_800f3c3c(0x21);
    FUN_800f56ac(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
  } while( true );
}



