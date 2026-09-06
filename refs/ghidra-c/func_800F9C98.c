
void FUN_800f9c98(void)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = 0x2100;
  puVar1 = &DAT_800d2100;
  do {
    *puVar1 = 0;
    uVar2 = uVar2 + 1 & 0xffff;
    puVar1 = &DAT_800d0000 + uVar2;
  } while (uVar2 < 0x2200);
  uVar2 = 0x4200;
  puVar1 = &DAT_800d4200;
  do {
    *puVar1 = 0;
    uVar2 = uVar2 + 1 & 0xffff;
    puVar1 = &DAT_800d0000 + uVar2;
  } while (uVar2 < 0x4400);
  return;
}



