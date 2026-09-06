
undefined4 FUN_8017841c(void)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  bVar1 = false;
  uVar4 = 0;
  uVar3 = 0;
  if ((DAT_801dfe68 == '\0') && ((DAT_801dfe69 & 0xf0) == 0x40)) {
    uVar2 = ~CONCAT11(DAT_801dfe6a,DAT_801dfe6b);
  }
  else {
    uVar2 = 0;
  }
  if ((uVar2 & 0x1000) != 0) {
    uVar3 = 0x800;
  }
  if ((uVar2 & 0x4000) != 0) {
    uVar3 = uVar3 | 0x400;
  }
  if ((uVar2 & 0x8000) != 0) {
    uVar3 = uVar3 | 0x200;
  }
  if ((uVar2 & 0x2000) != 0) {
    uVar3 = uVar3 | 0x100;
  }
  if ((uVar2 & 0x10) != 0) {
    uVar3 = uVar3 | 0x40;
  }
  if ((uVar2 & 0x40) != 0) {
    uVar3 = uVar3 | 0x80;
  }
  if ((uVar2 & 0x80) != 0) {
    uVar3 = uVar3 | 0x4000;
  }
  if ((uVar2 & 0x20) != 0) {
    uVar3 = uVar3 | 0x8000;
  }
  if ((uVar2 & 0x800) != 0) {
    uVar3 = uVar3 | 0x1000;
  }
  if ((uVar2 & 0x100) != 0) {
    uVar3 = uVar3 | 0x2000;
  }
  if ((uVar2 & 4) != 0) {
    uVar3 = uVar3 | 0x20;
  }
  if ((uVar2 & 8) != 0) {
    uVar3 = uVar3 | 0x10;
  }
  if (DAT_800d1a64 != '\0') {
    if ((DAT_8019ee56 != 0) && ((uVar2 & 1) != 0)) {
      uVar3 = DAT_8019ee56 | uVar3;
    }
  }
  if ((((uVar2 & 0x90f) == 0x90f) && (DAT_8019ee54 == 0)) && ((DAT_800d2106 & 0xf0) == 0)) {
    bVar1 = true;
  }
  if ((DAT_801dfe90 == '\0') && ((DAT_801dfe91 & 0xf0) == 0x40)) {
    uVar2 = ~CONCAT11(DAT_801dfe92,DAT_801dfe93);
  }
  else {
    uVar2 = 0;
  }
  if ((uVar2 & 0x1000) != 0) {
    uVar4 = 0x800;
  }
  if ((uVar2 & 0x4000) != 0) {
    uVar4 = uVar4 | 0x400;
  }
  if ((uVar2 & 0x8000) != 0) {
    uVar4 = uVar4 | 0x200;
  }
  if ((uVar2 & 0x2000) != 0) {
    uVar4 = uVar4 | 0x100;
  }
  if ((uVar2 & 0x10) != 0) {
    uVar4 = uVar4 | 0x40;
  }
  if ((uVar2 & 0x40) != 0) {
    uVar4 = uVar4 | 0x80;
  }
  if ((uVar2 & 0x80) != 0) {
    uVar4 = uVar4 | 0x4000;
  }
  if ((uVar2 & 0x20) != 0) {
    uVar4 = uVar4 | 0x8000;
  }
  if ((uVar2 & 0x800) != 0) {
    uVar4 = uVar4 | 0x1000;
  }
  if ((uVar2 & 0x100) != 0) {
    uVar4 = uVar4 | 0x2000;
  }
  if ((uVar2 & 4) != 0) {
    uVar4 = uVar4 | 0x20;
  }
  if ((uVar2 & 8) != 0) {
    uVar4 = uVar4 | 0x10;
  }
  if (DAT_800d1a64 != '\0') {
    if ((DAT_8019ee56 != 0) && ((uVar2 & 1) != 0)) {
      uVar4 = DAT_8019ee56 | uVar4;
    }
  }
  if ((((uVar2 & 0x90f) == 0x90f) && (DAT_8019ee54 == 0)) && ((DAT_800d2106 & 0xf0) == 0)) {
    bVar1 = true;
  }
  DAT_800d4219 = (undefined1)(uVar3 >> 8);
  DAT_800d4218 = (undefined1)uVar3;
  DAT_800d421a = (undefined1)uVar4;
  DAT_800d421b = (undefined1)(uVar4 >> 8);
  if (bVar1) {
    ResetGraph(1);
    FUN_80187d1c();
    FUN_80178890();
    FUN_80178bb4();
    FUN_80187b00();
    DrawSync(0);
    FUN_80197708(DAT_8019ee44);
    FUN_801776e8();
  }
  return 0;
}



