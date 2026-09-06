
void FUN_8011fba4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  FUN_800f926c();
  FUN_800f9298();
  FUN_800f9330();
  FUN_800f71dc(0x100);
  FUN_800f9330();
  FUN_800f94b8();
  (&DAT_800d0000)[*DAT_8019ed4c] = 1;
  *DAT_8019ed4c = *DAT_8019ed4c - 1;
  FUN_800f9448();
  FUN_800f9644(0x20);
  if (*DAT_8019ed58 >> 0xc == 0xb) {
    puVar3 = &DAT_80199328;
    *DAT_8019ed40 = *(code *)(*DAT_8019ed58 + 0x8018e117);
    iVar1 = -0xb210;
  }
  else {
    puVar3 = &DAT_80199374;
    *DAT_8019ed40 = S_SAV_OBJ_2A4[*DAT_8019ed58 + 7];
    iVar1 = -0xdb50;
  }
  DAT_8019ed40[1] = (code)puVar3[(uint)*DAT_8019ed58 + iVar1];
  FUN_800f5410();
  uVar2 = FUN_800f3c3c(0x29);
  FUN_800f3f94(uVar2);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f9660(0x20);
  *DAT_8019ed58 = *DAT_8019ed58 + 2;
  FUN_8011fd34();
  return;
}



