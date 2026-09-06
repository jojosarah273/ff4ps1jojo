
void FUN_80187d1c(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_8019ed88 == 0) {
    puVar1 = &DAT_800d2200;
    iVar2 = 0x1fff;
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 1;
    } while (-1 < iVar2);
  }
  else if (DAT_8019edaa == 0) {
    FUN_80187cd0(1);
  }
  DAT_8019edaa = 1;
  DAT_8019ed8c = 0;
  DAT_8019eda8 = 0;
  DAT_8019edb8 = 0;
  DAT_8019edc2 = 0;
  DAT_8019ed8a = 0;
  DAT_8019edc8 = 0;
  DAT_8019ed98 = 0;
  DAT_8019edc4 = 0;
  DAT_8019ed9c = 0;
  DAT_8019ef0c = 0;
  DAT_8019eeec = 0;
  DAT_8019ed90 = 0;
  return;
}



