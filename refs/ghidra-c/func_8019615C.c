
uint SYS_OBJ_2144(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 unaff_s2;
  code *unaff_s3;
  
  while ((DAT_8019dc7c + 1 & 0x3f) == DAT_8019dc80) {
    iVar5 = SYS_OBJ_28B4();
    if (iVar5 != 0) {
      return 0xffffffff;
    }
    SYS_OBJ_23A8();
  }
  DAT_8019dc84 = SetIntrMask(0);
  DAT_8019db5c = 1;
  if ((DAT_8019db55 != '\0') &&
     (((DAT_8019dc7c != DAT_8019dc80 || ((*(uint *)PTR_DMA_GPU_CHCR_8019dc68 & 0x1000000) != 0)) ||
      (DAT_8019db60 != 0)))) {
    DMACallback(2,SYS_OBJ_23A8);
    iVar5 = 0;
    if (unaff_s1 == 0) {
      *(undefined4 **)(&DAT_801fd3ac + DAT_8019dc7c * 0x60) = unaff_s0;
      *(undefined4 *)(&DAT_801fd3b0 + DAT_8019dc7c * 0x60) = unaff_s2;
      *(code **)(&DAT_801fd3a8 + DAT_8019dc7c * 0x60) = unaff_s3;
      DAT_8019dc7c = DAT_8019dc7c + 1 & 0x3f;
      SetIntrMask(DAT_8019dc84);
      SYS_OBJ_23A8();
      return DAT_8019dc7c - DAT_8019dc80 & 0x3f;
    }
    while( true ) {
      iVar2 = unaff_s1;
      if (unaff_s1 < 0) {
        iVar2 = unaff_s1 + 3;
      }
      iVar3 = iVar5 * 4;
      if (iVar2 >> 2 <= iVar5) break;
      uVar4 = *unaff_s0;
      unaff_s0 = unaff_s0 + 1;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(&DAT_801fd3b4 + iVar3 + DAT_8019dc7c * 0x60) = uVar4;
    }
    *(undefined **)(&DAT_801fd3ac + DAT_8019dc7c * 0x60) = &DAT_801fd3b4 + DAT_8019dc7c * 0x60;
    uVar1 = SYS_OBJ_22FC();
    return uVar1;
  }
  do {
  } while ((*(uint *)PTR_GPU_REG1_8019dc5c & 0x4000000) == 0);
  (*unaff_s3)();
  SetIntrMask(DAT_8019dc84);
  uVar1 = SYS_OBJ_238C();
  return uVar1;
}



