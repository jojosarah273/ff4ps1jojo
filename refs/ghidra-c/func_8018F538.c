
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int CdInit(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4;
  do {
    iVar1 = EVENT_OBJ_90();
    if (iVar1 == 1) {
      DAT_8019b9ec = EVENT_OBJ_CC;
      DAT_8019b9f0 = EVENT_OBJ_F4;
      DAT_8019b9c4 = EVENT_OBJ_11C;
      DAT_8019b9c8 = 0;
      iVar2 = EVENT_OBJ_80();
      return iVar2;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  printf("CdInit: Init failed\n");
  return 0;
}



