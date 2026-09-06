
void FUN_800fda4c(void)

{
  int iVar1;
  
  do {
    FUN_80177dac();
    FUN_800f6630(2);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 != 0) {
      return;
    }
    FUN_800f6630(3);
    iVar1 = FUN_800f6434(2);
  } while (iVar1 != 0);
  return;
}



