
void InitCARD(long val)

{
  int iVar1;
  int iVar2;
  
  ChangeClearPAD(0);
  VSync(0);
  iVar1 = FUN_801976e8();
  iVar2 = ReadInitPadFlag();
  if (iVar2 == 0) {
    val = 0;
  }
  InitCARD2(val);
  _copy_memcard_patch();
  _patch_card();
  _patch_card2();
  _patch_card_info();
  if (iVar1 == 1) {
    FUN_801976f8();
  }
  return;
}



