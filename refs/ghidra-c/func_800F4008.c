
void FUN_800f4008(uint param_1)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = (uint)*DAT_8019ed40 + (param_1 & 0xff) + (*DAT_8019ed68 & 1);
  bVar2 = (byte)uVar1 & 0xc0 | *DAT_8019ed68 & 0x3e;
  *DAT_8019ed40 = (byte)uVar1;
  if ((uVar1 & 0x100) != 0) {
    bVar2 = bVar2 | 1;
  }
  *DAT_8019ed68 = bVar2;
  *DAT_8019ed50 = uVar1;
  return;
}



