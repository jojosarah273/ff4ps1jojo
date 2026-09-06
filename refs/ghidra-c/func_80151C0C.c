
void FUN_80151c0c(void)

{
  byte bVar1;
  
  FUN_800f6564(0x352e);
  FUN_800f5140();
  *DAT_8019ed54 = *DAT_8019ed44;
  bVar1 = *DAT_8019ed5c;
  if (bVar1 == 2) {
    FUN_8005a424();
  }
  else if (bVar1 < 3) {
    if (bVar1 == 0) {
      FUN_8015bb9c();
    }
  }
  else if (bVar1 == 4) {
    FUN_8015e84c();
  }
  else if (bVar1 == 6) {
    FUN_8015d1c8();
  }
  return;
}



