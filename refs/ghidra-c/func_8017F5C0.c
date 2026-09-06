
/* WARNING: This function may have set the stack pointer */

void FUN_8017f5c0(void)

{
  undefined1 auStack_18 [16];
  
  DAT_1f80037c = auStack_18;
  if ((DAT_800d2105 & 7) == 0) {
    FUN_8017f148();
  }
  else {
    DAT_1f80037c = auStack_18;
    FUN_8017eac8();
  }
  return;
}



