
undefined * FUN_800f3b9c(uint param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  
  uVar1 = (int)param_1 >> 0x10 & 0xff;
  uVar3 = (param_2 & 0xffff) + param_1 & 0xffff;
  if (uVar1 == 0x7e) {
    puVar2 = (undefined *)0x800d2400;
    if (uVar3 < 0x2000) {
      puVar2 = &DAT_800d0000;
    }
  }
  else {
    if (uVar1 < 0x7f) {
      if (uVar1 == 0x70) {
        puVar2 = &DAT_800d2200;
        goto LAB_800f3c30;
      }
    }
    else if (uVar1 == 0x7f) {
      puVar2 = (undefined *)0x800e2400;
      goto LAB_800f3c30;
    }
    puVar2 = &DAT_800d0000;
    if ((int)(uVar3 << 0x10) < 0) {
      puVar2 = (undefined *)(((int)(param_1 & 0xff0000) >> 1) + 0x7ffc8000);
    }
  }
LAB_800f3c30:
  return puVar2 + (param_1 & 0xffff);
}



