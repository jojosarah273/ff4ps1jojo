
void FUN_80187404(int param_1)

{
  DAT_8019ef30 = (undefined2)param_1;
  if (DAT_8019ef0a == 0) {
    DAT_8019eeb8 = 0x17ff;
    if (param_1 == 0) {
      DAT_8019eeb8 = 0x2fff;
    }
    FUN_8018767c(DAT_8019eeb8);
  }
  else if (param_1 == 0) {
    DAT_8019ef16 = 0x9f;
  }
  else {
    DAT_8019ef16 = 0x4f;
  }
  return;
}



