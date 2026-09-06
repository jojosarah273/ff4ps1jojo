
undefined4 FUN_80135de4(void)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = TestEvent(DAT_8019ee0c);
  uVar2 = 0;
  if (lVar1 == 0) {
    lVar1 = TestEvent(DAT_8019ee1c);
    uVar2 = 1;
    if (lVar1 == 0) {
      lVar1 = TestEvent(DAT_8019ee38);
      if (lVar1 == 0) {
        lVar1 = TestEvent(DAT_8019edf8);
        uVar2 = 3;
        if (lVar1 == 0) {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 2;
      }
    }
  }
  return uVar2;
}



