
undefined4 FUN_801881ac(void)

{
  int iVar1;
  
  if (DAT_801f6678 == 1) {
    DAT_801f6678 = 3;
    *(undefined1 *)(DAT_8019ef5c + (uint)DAT_801f6690 * 0x10 + 8) = 2;
    iVar1 = DAT_8019ef5c;
    *(undefined4 *)(DAT_8019ef5c + (uint)DAT_801f6690 * 0x10 + 0xc) = 0x800;
    if (DAT_801f668c != 0) {
      *(undefined1 *)(iVar1 + (uint)DAT_801f6691 * 0x10 + 8) = 2;
      *(undefined4 *)(DAT_8019ef5c + (uint)DAT_801f6691 * 0x10 + 0xc) = 0x800;
    }
    return 0;
  }
  return 0xffffffff;
}



