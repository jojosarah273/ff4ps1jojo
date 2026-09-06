
int ClearImage2(RECT *rect,u_char r,u_char g,u_char b)

{
  int iVar1;
  
  SYS_OBJ_3E4("ClearImage2",rect);
  iVar1 = (**(code **)(PTR_PTR_8019db4c + 8))
                    (*(undefined4 *)(PTR_PTR_8019db4c + 0xc),rect,8,
                     (uint)b << 0x10 | (uint)g << 8 | 0x80000000 | (uint)r);
  return iVar1;
}



