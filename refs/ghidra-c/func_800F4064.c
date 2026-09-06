
void FUN_800f4064(uint param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = *DAT_8019ed68;
  uVar1 = (uint)*DAT_8019ed44 + (param_1 & 0xffff) + (bVar2 & 1);
  *DAT_8019ed44 = (ushort)uVar1;
  bVar2 = bVar2 & 0x3e | *(byte *)(DAT_8019ed40 + 1) & 0xc0;
  if ((uVar1 & 0x10000) != 0) {
    bVar2 = bVar2 | 1;
  }
  *DAT_8019ed68 = bVar2;
  *DAT_8019ed50 = uVar1;
  return;
}



