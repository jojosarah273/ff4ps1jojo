
void FUN_8011ef30(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_800f3c3c(0);
  FUN_800f939c();
  FUN_800f926c();
  (&DAT_800d0000)[*DAT_8019ed4c] = 1;
  *DAT_8019ed4c = *DAT_8019ed4c - 1;
  FUN_800f9448();
  uVar3 = (uint)*DAT_8019ed58;
  *(code *)(iVar2 + 0x2b) = S_SAV_OBJ_2A4[uVar3 + 7];
  *(code *)(iVar2 + 0x2c) = S_SAV_OBJ_2AC[uVar3];
  *(undefined1 *)(iVar2 + 0x2d) = *(undefined1 *)(uVar3 + 0x8018b825);
  uVar1 = *(undefined1 *)(uVar3 + 0x8018b826);
  *(undefined1 *)(iVar2 + 0x2f) = *(undefined1 *)(iVar2 + 0x34);
  *(undefined1 *)(iVar2 + 0x2e) = uVar1;
  FUN_800f9448();
  FUN_8011f030();
  FUN_800f960c();
  return;
}



