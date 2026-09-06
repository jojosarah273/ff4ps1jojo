
void FUN_801694a4(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_800f6630(100);
  FUN_800f5574(2);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f71dc(0x1b);
    FUN_800f8d00(0x2107);
    FUN_800f926c();
    FUN_800f971c();
    FUN_800f9200();
    FUN_800f9448();
    FUN_800f71dc(0x3000);
    uVar2 = (uint)*DAT_8019ed54;
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    do {
      FUN_800f6c68(0x13f016);
      FUN_800f9200();
      FUN_800f4248(0xf);
      uVar3 = uVar2 + 1 & 0xffff;
      (&DAT_801cfd68)[uVar2] = CONCAT11(*DAT_8019ed40,*(undefined1 *)(&DAT_801cfd68 + uVar2));
      FUN_800f93dc();
      FUN_800f4248(0xf0);
      uVar2 = uVar3 + 1 & 0xffff;
      *DAT_8019ed40 = *DAT_8019ed40 >> 4;
      (&DAT_801cfd68)[uVar3] = CONCAT11(*DAT_8019ed40,*(undefined1 *)(&DAT_801cfd68 + uVar3));
      FUN_800f6364();
      FUN_800f5958(800);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f9448();
  }
  return;
}



