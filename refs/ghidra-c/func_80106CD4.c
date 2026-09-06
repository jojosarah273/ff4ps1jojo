
void FUN_80106cd4(void)

{
  if ((DAT_800d4200 & 0x80) != 0) {
    if (DAT_800d0203 == 2) {
      FUN_80071d4c();
    }
    else if (DAT_800d0203 < 3) {
      if (DAT_800d0203 == 0) {
        FUN_80106d6c();
      }
    }
    else if (DAT_800d0203 == 0x13) {
      FUN_8016ca94();
    }
  }
  return;
}



