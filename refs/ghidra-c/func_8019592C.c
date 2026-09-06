
undefined4 SYS_OBJ_1914(ushort *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((short)param_1[2] < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = DAT_8019db58 - 1;
    if ((int)(short)param_1[2] <= DAT_8019db58 + -1) {
      uVar2 = SYS_OBJ_196C(param_1[2]);
      return uVar2;
    }
  }
  param_1[2] = uVar1;
  if ((short)param_1[3] < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = DAT_8019db5a - 1;
    if ((int)(short)param_1[3] <= DAT_8019db5a + -1) {
      uVar2 = SYS_OBJ_19AC(param_1[3]);
      return uVar2;
    }
  }
  param_1[3] = uVar1;
  if (((*param_1 & 0x3f) == 0) && ((param_1[2] & 0x3f) == 0)) {
    DAT_801fd358 = 0x5ffffff;
    DAT_801fd35c = 0xe6000000;
    DAT_801fd364 = param_2 & 0xffffff | 0x2000000;
    DAT_801fd360 = *(uint *)PTR_GPU_REG1_8019dc5c & 0x7ff | (param_2 >> 0x1f) << 10 | 0xe1000000;
    DAT_801fd368 = *(undefined4 *)param_1;
    DAT_801fd36c = *(uint *)(param_1 + 2);
    SYS_OBJ_205C(&DAT_801fd358);
    return 0;
  }
  DAT_801fd358 = 0x81fd380;
  DAT_801fd370 = param_2 & 0xffffff | 0x60000000;
  DAT_801fd368 = 0xe6000000;
  DAT_801fd35c = 0xe3000000;
  DAT_801fd360 = 0xe4ffffff;
  DAT_801fd364 = 0xe5000000;
  DAT_801fd36c = *(uint *)PTR_GPU_REG1_8019dc5c & 0x7ff | (param_2 >> 0x1f) << 10 | 0xe1000000;
  DAT_801fd374 = *(undefined4 *)param_1;
  DAT_801fd378 = *(undefined4 *)(param_1 + 2);
  DAT_801fd380 = 0x3ffffff;
  uVar3 = SYS_OBJ_20A4(3);
  DAT_801fd384 = uVar3 | 0xe3000000;
  uVar3 = SYS_OBJ_20A4(4);
  DAT_801fd388 = uVar3 | 0xe4000000;
  uVar3 = SYS_OBJ_20A4(5);
  DAT_801fd38c = uVar3 | 0xe5000000;
  uVar2 = SYS_OBJ_1B1C();
  return uVar2;
}



