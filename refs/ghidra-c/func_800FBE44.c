
void FUN_800fbe44(void)

{
  RECT local_10;
  
  FUN_800f71dc(0);
  FUN_800f8d6c(0x47);
  FUN_800f71dc(0x2800);
  FUN_800f8d6c(0x45);
  FUN_800f654c(8);
  FUN_800f824c(0x3c);
  FUN_800f71dc(0xc000);
  FUN_800f8d6c(0x3d);
  FUN_801766b0();
  FUN_800f71dc(0x4000);
  FUN_800f8d6c(0x47);
  FUN_801766b0();
  FUN_8017f8f8(&DAT_801cfd68,0x200,0,0);
  FUN_8017f8f8(&DAT_801cfd68,0x200,0,0x11);
  FUN_8017f8f8(&DAT_801cfd68,0x300,0,0xffffffff);
  DAT_8019ee30 = 0xdf;
  DAT_8019ee2e = 0xdf;
  DAT_8019ee2c = 0xdf;
  local_10.x = 0x340;
  local_10.y = 0xf0;
  local_10.w = 2;
  local_10.h = 8;
  MoveImage(&local_10,0x21e,0x30);
  DrawSync(0);
  return;
}



