
int INTR_OBJ_43C(uint param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = &DAT_8019be70 + param_1;
  iVar4 = *piVar3;
  if ((param_2 != iVar4) && (DAT_8019be6c != 0)) {
    uVar1 = *(ushort *)PTR_I_MASK_8019cefc;
    *(undefined2 *)PTR_I_MASK_8019cefc = 0;
    if (param_2 != 0) {
      *piVar3 = param_2;
      DAT_8019be9c = DAT_8019be9c | (ushort)(1 << (param_1 & 0x1f));
      iVar4 = INTR_OBJ_4EC();
      return iVar4;
    }
    uVar2 = ~(ushort)(1 << (param_1 & 0x1f));
    *piVar3 = 0;
    DAT_8019be9c = DAT_8019be9c & uVar2;
    if (param_1 == 0) {
      ChangeClearPAD(1);
      ChangeClearRCnt(3,1);
    }
    if (param_1 == 4) {
      ChangeClearRCnt(0,1);
    }
    if (param_1 == 5) {
      ChangeClearRCnt(1,1);
    }
    if (param_1 == 6) {
      ChangeClearRCnt(2,1);
    }
    *(ushort *)PTR_I_MASK_8019cefc = uVar1 & uVar2;
  }
  return iVar4;
}



