
void FUN_80188a60(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  if (-1 < DAT_8019ef40) {
    iVar2 = DAT_8019ef40;
    do {
      bVar1 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar1);
    *(undefined2 *)(DAT_8019ef8c * 0x10 + DAT_8019ed28) = 0xffff;
    param_2 = 0;
  }
  DAT_8019ef88 = 0;
  DAT_8019ef8c = 0;
  if (param_1 == 1) {
    FUN_801917b8(1,param_2);
    CdReset(0);
    DAT_8019ef44 = 3;
    CdControl('\x0e',&DAT_8019ef44,(u_char *)0x0);
  }
  return;
}



