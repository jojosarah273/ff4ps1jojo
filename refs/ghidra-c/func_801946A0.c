
int StoreImage(RECT *rect,u_long *p)

{
  int iVar1;
  
  SYS_OBJ_3E4("StoreImage",rect);
  iVar1 = (**(code **)(PTR_PTR_8019db4c + 8))(*(undefined4 *)(PTR_PTR_8019db4c + 0x1c),rect,8,p);
  return iVar1;
}



