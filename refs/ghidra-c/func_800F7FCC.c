
void FUN_800f7fcc(ushort *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *DAT_8019ed68;
  uVar2 = ((uint)*DAT_8019ed44 - (uint)*param_1) - ((bVar1 ^ 1) & 1);
  *DAT_8019ed44 = (ushort)uVar2;
  bVar1 = bVar1 & 0x3c | *(byte *)(DAT_8019ed40 + 1) & 0xc0;
  if ((uVar2 & 0x10000) == 0) {
    bVar1 = bVar1 | 1;
  }
  if ((uVar2 & 0xffff) == 0) {
    bVar1 = bVar1 | 2;
  }
  *DAT_8019ed50 = uVar2;
  *DAT_8019ed68 = bVar1;
  return;
}



