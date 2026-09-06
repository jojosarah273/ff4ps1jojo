
void SYS_OBJ_2244(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int in_v0;
  int iVar1;
  undefined4 uVar2;
  int in_t0;
  int unaff_s1;
  
  while( true ) {
    if (in_v0 < 0) {
      in_v0 = in_v0 + 3;
    }
    iVar1 = param_3 * 4;
    if (in_v0 >> 2 <= param_3) break;
    uVar2 = *param_4;
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
    *(undefined4 *)(iVar1 + DAT_8019dc7c * 0x60 + in_t0) = uVar2;
    in_v0 = unaff_s1;
  }
  *(undefined **)(&DAT_801fd3ac + DAT_8019dc7c * 0x60) = &DAT_801fd3b4 + DAT_8019dc7c * 0x60;
  SYS_OBJ_22FC();
  return;
}



