
void FUN_8011cc98(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  
  FUN_800f7500(0);
  do {
    FUN_800f7270(0x3d);
    FUN_800f6c68(0x7f5c71);
    FUN_800f824c(0x18);
    FUN_800f8fb8(0x19);
    FUN_800f9644(0x20);
    uVar5 = FUN_800f3c3c(0x18);
    FUN_800f5024(uVar5);
    FUN_800f7270(0x18);
    FUN_800f6cf4(0x7f4800);
    uVar1 = *DAT_8019ed44;
    uVar2 = *DAT_8019ed54;
    FUN_800f6cf4(0x7f4900);
    uVar3 = *DAT_8019ed44;
    FUN_800f6cf4(0x7f4a00);
    uVar4 = *DAT_8019ed44;
    FUN_800f6cf4(0x7f4b00);
    *DAT_8019ed44 =
         uVar1 & 0x2000 | uVar2 >> 1 | (ushort)((uVar3 & 0x2000) >> 1) |
         (ushort)((uVar4 & 0x2000) >> 2) | (ushort)((*DAT_8019ed44 & 0x2000) >> 3);
    FUN_800f89d4(0xadb);
    FUN_800f89d4(0xadd);
    FUN_800f89d4(0xb1b);
    FUN_800f89d4(0xb1d);
    FUN_800f6558(0);
    FUN_800f9660(0x20);
    *DAT_8019ed58 = *DAT_8019ed58 + 4;
    FUN_800f62bc(0x3d);
    FUN_800f5a90(0x40);
    iVar6 = FUN_800f53d4();
  } while (iVar6 == 0);
  return;
}



