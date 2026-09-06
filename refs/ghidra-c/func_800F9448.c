
void FUN_800f9448(void)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  
  uVar2 = *DAT_8019ed4c;
  bVar1 = (&DAT_800d0000)[(ushort)(uVar2 + 1)];
  bVar3 = bVar1 & 0x80 | *DAT_8019ed68 & 0x7d;
  *DAT_8019ed6c = (uint)bVar1 << 0x10;
  if (bVar1 == 0) {
    bVar3 = bVar3 | 2;
  }
  *DAT_8019ed70 = bVar1;
  *DAT_8019ed68 = bVar3;
  *DAT_8019ed4c = uVar2 + 1;
  return;
}



