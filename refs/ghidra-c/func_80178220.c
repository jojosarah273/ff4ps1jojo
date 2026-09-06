
void FUN_80178220(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x88;
  iVar1 = 0x3ff;
  do {
    FUN_80197378(param_1);
    *(undefined1 *)(param_1 + 4) = 0x80;
    *(undefined1 *)(param_1 + 5) = 0x80;
    *(undefined1 *)(param_1 + 6) = 0x80;
    *(undefined2 *)(param_1 + 0x10) = 8;
    *(undefined2 *)(param_1 + 0x12) = 8;
    FUN_801972d8(param_1,1);
    FUN_80197308(param_1,1);
    *(undefined1 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    iVar1 = iVar1 + -1;
    *(undefined2 *)(param_1 + 0xe) = DAT_801dfd68;
    param_1 = param_1 + 0x14;
  } while (-1 < iVar1);
  return;
}



