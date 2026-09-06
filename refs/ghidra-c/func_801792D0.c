
void FUN_801792d0(void)

{
  RECT local_20;
  
  local_20.x = 0x100;
  local_20.y = 0;
  local_20.w = 0x100;
  local_20.h = 0xc0;
  LoadImage(&local_20,(u_long *)&DAT_80088000);
  DrawSync(0);
  local_20.x = 0x100;
  local_20.y = 0x100;
  local_20.w = 0x100;
  local_20.h = 0x80;
  StoreImage(&local_20,(u_long *)&DAT_80088000);
  local_20.x = 0x200;
  local_20.y = 0xc0;
  local_20.h = 0x40;
  StoreImage(&local_20,(u_long *)&DAT_80098000);
  DrawSync(0);
  local_20.x = 0x100;
  local_20.y = 0;
  local_20.w = 0x100;
  local_20.h = 0x80;
  MoveImage(&local_20,0x100,0x100);
  local_20.x = 0x100;
  local_20.y = 0x80;
  local_20.w = 0x100;
  local_20.h = 0x40;
  MoveImage(&local_20,0x200,0xc0);
  DrawSync(0);
  local_20.x = 0x100;
  local_20.y = 0;
  local_20.w = 0x100;
  local_20.h = 0x100;
  ClearImage(&local_20,'\0','\0','\0');
  DrawSync(0);
  return;
}



