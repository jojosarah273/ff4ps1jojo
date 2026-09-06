
undefined * FUN_800f3c3c(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = (uint)DAT_1f8003d0 + (param_1 & 0xffff);
  puVar2 = (undefined *)0x7ffc8000;
  if (uVar1 < 0x8000) {
    puVar2 = &DAT_800d0000;
  }
  return puVar2 + uVar1;
}



