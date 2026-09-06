
undefined4 SYS_OBJ_19AC(void)

{
  uint uVar1;
  undefined4 uVar2;
  ushort in_v1;
  ushort *in_t0;
  uint in_t1;
  
  in_t0[3] = in_v1;
  if (((*in_t0 & 0x3f) == 0) && ((in_t0[2] & 0x3f) == 0)) {
    DAT_801fd358 = 0x5ffffff;
    DAT_801fd35c = 0xe6000000;
    DAT_801fd364 = in_t1 & 0xffffff | 0x2000000;
                    /* Probable PsyQ macro: setDrawTPage() if setlen(p, 1), setDrawMode() if
                       setlen(p, 2). */
    DAT_801fd360 = *(uint *)PTR_GPU_REG1_8019dc5c & 0x7ff | (in_t1 >> 0x1f) << 10 | 0xe1000000;
    DAT_801fd368 = *(undefined4 *)in_t0;
    DAT_801fd36c = *(uint *)(in_t0 + 2);
    SYS_OBJ_205C(&DAT_801fd358);
    return 0;
  }
  DAT_801fd358 = 0x81fd380;
  DAT_801fd370 = in_t1 & 0xffffff | 0x60000000;
  DAT_801fd368 = 0xe6000000;
  DAT_801fd35c = 0xe3000000;
  DAT_801fd360 = 0xe4ffffff;
  DAT_801fd364 = 0xe5000000;
                    /* Probable PsyQ macro: setDrawTPage() if setlen(p, 1), setDrawMode() if
                       setlen(p, 2). */
  DAT_801fd36c = *(uint *)PTR_GPU_REG1_8019dc5c & 0x7ff | (in_t1 >> 0x1f) << 10 | 0xe1000000;
  DAT_801fd374 = *(undefined4 *)in_t0;
  DAT_801fd378 = *(undefined4 *)(in_t0 + 2);
  DAT_801fd380 = 0x3ffffff;
  uVar1 = SYS_OBJ_20A4(3);
  DAT_801fd384 = uVar1 | 0xe3000000;
  uVar1 = SYS_OBJ_20A4(4);
  DAT_801fd388 = uVar1 | 0xe4000000;
  uVar1 = SYS_OBJ_20A4(5);
  DAT_801fd38c = uVar1 | 0xe5000000;
  uVar2 = SYS_OBJ_1B1C();
  return uVar2;
}



