
void FUN_80104e14(void)

{
  int iVar1;
  
  FUN_800f6630(0xb1);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
LAB_80104ef4:
    FUN_800f654c(0);
  }
  else {
    FUN_80104f1c();
    FUN_800f5574(0);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6564(0x709);
      FUN_800f5140();
      FUN_800f96e0();
      FUN_800f6630(0xa1);
      FUN_800f4248(4);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f6d70(0x6a1);
        FUN_800f4248(3);
        FUN_800f4370(0xd2);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) goto LAB_80104ef4;
        FUN_800f6d70(0x6a1);
        FUN_800f4248(4);
      }
      else {
        FUN_800f6d70(0x6a1);
        FUN_800f4370(10);
      }
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) goto LAB_80104ef4;
    }
    FUN_800f654c(1);
  }
  return;
}



