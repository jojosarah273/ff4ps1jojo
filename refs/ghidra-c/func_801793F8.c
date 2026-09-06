
void FUN_801793f8(short param_1)

{
  DrawSync(0);
  VSync(0);
  if (DAT_8019eda8 == 0) {
    SetDispMask(0);
  }
  FUN_801792d0();
  if (DAT_8019eda6 == 2) {
    FUN_8008cb5c();
  }
  else {
    FUN_800888c0((int)param_1);
  }
  if (DAT_8019eda8 == 0) {
    SetDispMask(0);
  }
  DrawSync(0);
  FUN_801792d0();
  return;
}



