
undefined4 SYS_OBJ_196C(void)

{
  ushort in_v0;
  undefined4 uVar1;
  uint uVar2;
  ushort uVar3;
  ushort *in_t0;
  uint in_t1;
  
  in_t0[2] = in_v0;
  if ((short)in_t0[3] < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = DAT_8019db5a - 1;
    if ((int)(short)in_t0[3] <= DAT_8019db5a + -1) {
      uVar1 = SYS_OBJ_19AC(in_t0[3]);
      return uVar1;
    }
  }
  in_t0[3] = uVar3;
  if (((*in_t0 & 0x3f) == 0) && ((in_t0[2] & 0x3f) == 0)) {
    DAT_801fd358 = 0x5ffffff;
    DAT_801fd35c = 0xe6000000;
    DAT_801fd364 = in_t1 & 0xffffff | 0x2000000;
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
  DAT_801fd36c = *(uint *)PTR_GPU_REG1_8019dc5c & 0x7ff | (in_t1 >> 0x1f) << 10 | 0xe1000000;
  DAT_801fd374 = *(undefined4 *)in_t0;
  DAT_801fd378 = *(undefined4 *)(in_t0 + 2);
  DAT_801fd380 = 0x3ffffff;
  uVar2 = SYS_OBJ_20A4(3);
  DAT_801fd384 = uVar2 | 0xe3000000;
  uVar2 = SYS_OBJ_20A4(4);
  DAT_801fd388 = uVar2 | 0xe4000000;
  uVar2 = SYS_OBJ_20A4(5);
  DAT_801fd38c = uVar2 | 0xe5000000;
  uVar1 = SYS_OBJ_1B1C();
  return uVar1;
}



