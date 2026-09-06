
void FUN_80140ac0(void)

{
  int iVar1;
  
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    *DAT_8019ed40 = *DAT_8019ed60;
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_80147414();
    FUN_800f6b68(0x2001);
    FUN_800f4248(0xf);
    FUN_800f5574(0xb);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
    FUN_800f63bc();
    FUN_800f5a90(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  return;
}



