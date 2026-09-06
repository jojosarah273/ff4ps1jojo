
void FUN_80178bb4(void)

{
  DAT_8019ee90 = 0;
  DAT_8019ee92 = 0;
  DAT_8019ee94 = 0x100;
  DAT_8019ee96 = 0x1e0;
  ClearImage((RECT *)&DAT_8019ee90,'\b','\b','\b');
  DrawSync(0);
  return;
}



