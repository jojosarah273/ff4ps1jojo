
void FUN_800f3f38(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*DAT_8019ed40 + (uint)*param_1 + (*DAT_8019ed68 & 1);
  bVar1 = (byte)uVar2 & 0xc0 | *DAT_8019ed68 & 0x3e;
  *DAT_8019ed40 = (byte)uVar2;
  if ((uVar2 & 0x100) != 0) {
    bVar1 = bVar1 | 1;
  }
  *DAT_8019ed68 = bVar1;
  *DAT_8019ed50 = uVar2;
  return;
}



