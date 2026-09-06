
void FUN_80100894(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  FUN_800f9644(0x20);
  FUN_800f65f0(0x7f48ee);
  uVar1 = *DAT_8019ed44;
  FUN_800f65f0(0x7f49ee);
  uVar2 = *DAT_8019ed44;
  FUN_800f65f0(0x7f4aee);
  uVar3 = *DAT_8019ed44;
  FUN_800f65f0(0x7f4bee);
  *DAT_8019ed44 =
       uVar1 & 0x2000 | 0x77 | (ushort)((uVar2 & 0x2000) >> 1) | (ushort)((uVar3 & 0x2000) >> 2) |
       (ushort)((*DAT_8019ed44 & 0x2000) >> 3);
  FUN_800f81b0(0x700);
  FUN_800f81b0(0x702);
  FUN_800f81b0(0x704);
  FUN_800f81b0(0x706);
  FUN_800f6558(0);
  FUN_800f9660(0x20);
  return;
}



