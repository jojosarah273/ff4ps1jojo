
u_long * FntFlush(int id)

{
  u_long *puVar1;
  
  if (((id < 0) || (DAT_8019d0f4 <= id)) &&
     (id = DAT_8019d0f8, *(int *)(&DAT_8019cf98 + DAT_8019d0f8 * 0x30) == 0)) {
    puVar1 = (u_long *)FONT_OBJ_688();
    return puVar1;
  }
  FUN_801972b8(&UNK_8019cf84 + id * 0x30);
  puVar1 = (u_long *)FONT_OBJ_618();
  return puVar1;
}



