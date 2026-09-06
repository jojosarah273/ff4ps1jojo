
undefined * FUN_800f3b04(int param_1)

{
  undefined *puVar1;
  
  if (DAT_1f8003d2 == 0x7e) {
    puVar1 = (undefined *)0x800d2400;
    if (param_1 < 0x2000) {
      puVar1 = &DAT_800d0000;
    }
  }
  else {
    if (DAT_1f8003d2 < 0x7f) {
      if (DAT_1f8003d2 == 0x70) {
        puVar1 = &DAT_800d2200;
        goto LAB_800f3b94;
      }
    }
    else if (DAT_1f8003d2 == 0x7f) {
      puVar1 = (undefined *)0x800e2400;
      goto LAB_800f3b94;
    }
    puVar1 = &DAT_800d0000;
    if (0x7fff < param_1) {
      puVar1 = (undefined *)((DAT_1f8003c0 >> 1) + 0x7ffc8000);
    }
  }
LAB_800f3b94:
  return puVar1 + param_1;
}



