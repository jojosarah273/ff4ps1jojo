
void FUN_80129b04(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  FUN_800f939c();
  FUN_800f7594(0x41);
  FUN_800f6e30(0x60);
  FUN_800f5140();
  FUN_800f824c(0x45);
  *DAT_8019ed40 = *DAT_8019ed40 << 2;
  FUN_800f5410();
  uVar2 = FUN_800f3c3c(0x45);
  FUN_800f3f38(uVar2);
  uVar2 = FUN_800f3a70(0x5d);
  uVar2 = FUN_800f3b04(uVar2);
  FUN_800f3f38(uVar2);
  FUN_800f824c(0x45);
  FUN_800f8fb8(0x46);
  FUN_800f7594(0x45);
  uVar1 = CONCAT11(DAT_800d015b,DAT_800d015a);
  if (uVar1 == 0xdc0a) {
    puVar3 = &DAT_80199cac;
  }
  else if (uVar1 < 0xdc0b) {
    if (uVar1 != 0xdbba) goto LAB_80129c34;
    puVar3 = &DAT_80199c5c;
  }
  else {
    if (uVar1 != 0xdc5a) goto LAB_80129c34;
    puVar3 = &DAT_80199cfc;
  }
  *DAT_8019ed40 = puVar3[*DAT_8019ed58];
LAB_80129c34:
  FUN_800f960c();
  FUN_800f5574(0);
  return;
}



