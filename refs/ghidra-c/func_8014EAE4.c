
void FUN_8014eae4(void)

{
  int iVar1;
  
  FUN_800f6564(0xf261);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    *DAT_8019ed40 = *DAT_8019ed5c;
    FUN_800f5410();
    FUN_800f4008(0x10);
    *DAT_8019ed54 = *DAT_8019ed44;
  }
  switch(*DAT_8019ed5c) {
  case 0:
  case 0x14:
    FUN_8014ec18();
    break;
  case 2:
  case 0x12:
    FUN_8014ec68();
    break;
  case 4:
  case 0x10:
    FUN_8014ec98();
    break;
  case 6:
  case 0x18:
    FUN_8014ecc8();
    break;
  case 8:
  case 0x16:
    FUN_8014ed10();
    break;
  case 10:
    FUN_8014ed40();
    break;
  case 0xc:
  case 0x1c:
    FUN_8014ed88();
    break;
  case 0xe:
  case 0x1a:
    FUN_8014edd0();
    break;
  case 0x1e:
    FUN_8014ed40();
  }
  return;
}



