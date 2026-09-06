
void FUN_801223a4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f926c();
  (&DAT_800d0000)[*DAT_8019ed4c] = 1;
  *DAT_8019ed4c = *DAT_8019ed4c - 1;
  FUN_800f9448();
  FUN_800f9644(0x20);
  *DAT_8019ed44 = *DAT_8019ed54;
  FUN_800f5410();
  uVar1 = FUN_800f3c3c(0x29);
  FUN_800f3f94(uVar1);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f9660(0x20);
  while( true ) {
    *DAT_8019ed40 = S_SAV_OBJ_2A4[*DAT_8019ed58 + 7];
    iVar2 = FUN_800f6434(2);
    if (iVar2 != 0) break;
    FUN_800f885c(0x7e0000);
    *DAT_8019ed54 = *DAT_8019ed54 + 2;
    FUN_800f63bc();
  }
  FUN_800f9448();
  return;
}



