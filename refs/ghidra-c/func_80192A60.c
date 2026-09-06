
void VSYNC_OBJ_178(int param_1,int param_2)

{
  param_2 = param_2 << 0xf;
  do {
    if (param_1 <= DAT_8019cf34) {
      return;
    }
    param_2 = param_2 + -1;
  } while (param_2 != -1);
  FUN_80191620("VSync: timeout\n");
  ChangeClearPAD(0);
  ChangeClearRCnt(3,0);
  VSYNC_OBJ_200();
  return;
}



