
long SpuIsTransferCompleted(long flag)

{
  long lVar1;
  
  if ((DAT_8019b0a4 != 1) && (DAT_8019b148 != 1)) {
    lVar1 = TestEvent(DAT_8019b09c);
    if (flag == 1) {
      if (lVar1 == 0) {
        do {
          lVar1 = TestEvent(DAT_8019b09c);
        } while (lVar1 == 0);
        lVar1 = S_ITC_OBJ_88();
        return lVar1;
      }
    }
    else if (lVar1 != 1) {
      return lVar1;
    }
    DAT_8019b148 = 1;
    return 1;
  }
  lVar1 = S_ITC_OBJ_90();
  return lVar1;
}



