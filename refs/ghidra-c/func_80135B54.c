
void FUN_80135b54(void)

{
  uint uVar1;
  
  DAT_8019ee56 = 0;
  if (DAT_8019ee42 == 2) {
    uVar1 = (uint)DAT_800d1a38;
  }
  else if (DAT_8019ee42 < 3) {
    if (DAT_8019ee42 != 1) {
      return;
    }
    uVar1 = (uint)DAT_800d1a37;
  }
  else {
    if (DAT_8019ee42 != 3) {
      return;
    }
    uVar1 = (uint)DAT_800d1a39;
  }
  DAT_8019ee56 = *(undefined2 *)((int)&PTR_DAT_8019a068 + uVar1 * 2);
  return;
}



