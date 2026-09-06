
void FUN_801795bc(void)

{
  RECT local_18;
  
  local_18.x = 0x200;
  local_18.y = 0;
  local_18.w = 0x100;
  local_18.h = 0x80;
  MoveImage(&local_18,0x100,0x100);
  DrawSync(0);
  local_18.x = 0x200;
  local_18.y = 0x100;
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



