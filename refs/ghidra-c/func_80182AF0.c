
void FUN_80182af0(int param_1)

{
  DAT_8019edf4 = &DAT_8019ffe8;
  DAT_8019ee88 = param_1 + 0x5088;
  DAT_8019edf0 = 2;
  if ((DAT_8019ee28 & 0x10000) == 0) {
    DAT_8019edf0 = 7;
    if (0x100 < (short)DAT_8019ee28) {
      DAT_8019edf0 = 1;
    }
  }
  if (DAT_8019edf0 == 2) {
    DAT_8019ffe8 = DAT_8019ee60 + -0x80;
    DAT_8019ffea = DAT_8019ee68 - ((short)DAT_8019ee50 + 0x90);
    goto LAB_80182c74;
  }
  if (DAT_8019edf0 < 3) {
    if (DAT_8019edf0 != 1) goto LAB_80182c74;
    if ((DAT_8019ee2c & 0x1000) != 0) {
      DAT_8019ffe8 = DAT_8019ee60 + -0x80;
      DAT_8019ffea = DAT_8019ee68 + -0x70;
      goto LAB_80182c74;
    }
  }
  else {
    if (DAT_8019edf0 != 7) goto LAB_80182c74;
    if (DAT_800d063d == 'p') {
      DAT_8019ffe8 = 0;
      DAT_8019ffea = -2;
      goto LAB_80182c74;
    }
  }
  DAT_8019ffe8 = DAT_8019ee60;
  DAT_8019ffea = DAT_8019ee68;
LAB_80182c74:
  FUN_801825b8(&DAT_80012000,&DAT_801cfd68,&DAT_8019edf0);
  FUN_801826c8(param_1,&DAT_80012000,param_1 + 0x88,&DAT_8019edf0);
  return;
}



