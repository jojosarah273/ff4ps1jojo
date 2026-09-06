
void FUN_8017953c(void)

{
  RECT local_18;
  
  local_18.x = 0x100;
  local_18.y = 0x100;
  local_18.w = 0x100;
  local_18.h = 0x80;
  MoveImage(&local_18,0x200,0);
  DrawSync(0);
  local_18.x = 0x100;
  local_18.y = 0x180;
  local_18.w = 0x100;
  local_18.h = 0x80;
  MoveImage(&local_18,0x200,0x100);
  DrawSync(0);
  return;
}



