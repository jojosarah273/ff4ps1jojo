
void FUN_800f94b8(void)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  
  uVar1 = *DAT_8019ed4c;
  sVar2 = CONCAT11((&DAT_800d0001)[uVar1],(&DAT_800d0002)[uVar1]);
  if (((&DAT_800d0001)[uVar1] & 0x80) == 0) {
    bVar3 = *DAT_8019ed68 & 0x7d;
  }
  else {
    bVar3 = *DAT_8019ed68 & 0x7d | 0x80;
  }
  if (sVar2 == 0) {
    bVar3 = bVar3 | 2;
  }
  *DAT_8019ed48 = sVar2;
  *DAT_8019ed68 = bVar3;
  *DAT_8019ed4c = uVar1 + 2;
  return;
}



