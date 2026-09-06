
void FUN_801506bc(void)

{
  RECT local_18;
  
  local_18.x = 0x100;
  local_18.y = 0;
  local_18.w = 0x100;
  local_18.h = 0x40;
  LoadImage(&local_18,(u_long *)&DAT_80070000);
  local_18.y = 0x40;
  local_18.h = 0xc0;
  LoadImage(&local_18,(u_long *)&DAT_80088000);
  DrawSync(0);
  local_18.x = 0x300;
  local_18.y = 0x100;
  local_18.w = 0x100;
  local_18.h = 0x37;
  StoreImage(&local_18,(u_long *)&DAT_80070000);
  local_18.y = 0x140;
  local_18.h = 0xc0;
  StoreImage(&local_18,(u_long *)&DAT_80088000);
  DrawSync(0);
  local_18.x = 0x100;
  local_18.y = 0;
  local_18.w = 0x100;
  local_18.h = 0x100;
  MoveImage(&local_18,0x300,0x100);
  DrawSync(0);
  local_18.x = 0x100;
  local_18.y = 0;
  local_18.w = 0x100;
  local_18.h = 0x80;
  LoadImage(&local_18,(u_long *)&DAT_80058000);
  DrawSync(0);
  local_18.x = 0x100;
  local_18.y = 0x180;
  local_18.w = 0x100;
  local_18.h = 0x80;
  StoreImage(&local_18,(u_long *)&DAT_80058000);
  DrawSync(0);
  local_18.x = 0x100;
  local_18.y = 0;
  local_18.w = 0x100;
  local_18.h = 0x80;
  MoveImage(&local_18,0x100,0x180);
  DrawSync(0);
  local_18.x = 0x100;
  local_18.y = 0;
  local_18.w = 0x100;
  local_18.h = 0x100;
  ClearImage(&local_18,'\0','\0','\0');
  DrawSync(0);
  return;
}



