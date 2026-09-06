
void INTR_OBJ_26C(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (DAT_8019be6c == 0) {
    printf("unexpected interrupt(%04x)\n",(uint)*(ushort *)PTR_I_STAT_8019cef8);
    ReturnFromException();
  }
  DAT_8019be6e = 1;
  uVar2 = (uint)(*(ushort *)PTR_I_MASK_8019cefc & DAT_8019be9c & *(ushort *)PTR_I_STAT_8019cef8);
  if (uVar2 != 0) {
    do {
      puVar5 = &DAT_8019be70;
      for (uVar4 = 0; (uVar2 != 0 && ((int)uVar4 < 0xb)); uVar4 = uVar4 + 1) {
        if ((uVar2 & 1) != 0) {
          *(ushort *)PTR_I_STAT_8019cef8 = ~(ushort)(1 << (uVar4 & 0x1f));
          if ((code *)*puVar5 != (code *)0x0) {
            (*(code *)*puVar5)();
          }
        }
        puVar5 = puVar5 + 1;
        uVar2 = uVar2 >> 1;
      }
      uVar2 = (uint)(*(ushort *)PTR_I_MASK_8019cefc & DAT_8019be9c & *(ushort *)PTR_I_STAT_8019cef8)
      ;
    } while (uVar2 != 0);
  }
  if ((*(ushort *)PTR_I_STAT_8019cef8 & *(ushort *)PTR_I_MASK_8019cefc) == 0) {
    DAT_8019cf04 = 0;
  }
  else {
    iVar3 = DAT_8019cf04 + 1;
    bVar1 = 0x800 < DAT_8019cf04;
    DAT_8019cf04 = iVar3;
    if (bVar1) {
      printf("intr timeout(%04x:%04x)\n",(uint)*(ushort *)PTR_I_STAT_8019cef8,
             (uint)*(ushort *)PTR_I_MASK_8019cefc);
      DAT_8019cf04 = 0;
      *(undefined2 *)PTR_I_STAT_8019cef8 = 0;
      INTR_OBJ_410();
      return;
    }
  }
  DAT_8019be6e = 0;
  ReturnFromException();
  return;
}



