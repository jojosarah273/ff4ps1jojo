
void FUN_80135be4(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int local_40 [4];
  undefined4 local_30;
  long local_28 [4];
  int local_18 [4];
  
  local_40[0] = DAT_800f28d8;
  local_40[1] = DAT_800f28dc;
  local_40[2] = DAT_800f28e0;
  local_40[3] = DAT_800f28e4;
  local_30 = DAT_800f28e8;
  local_28[0] = DAT_800f28ec;
  local_28[1] = DAT_800f28f0;
  local_28[2] = DAT_800f28f4;
  local_28[3] = DAT_800f28f8;
  local_18[0] = DAT_800f28fc;
  local_18[1] = DAT_800f2900;
  local_18[2] = DAT_800f2904;
  local_18[3] = DAT_800f2908;
  if (-1 < DAT_8019edd0) {
    DAT_8019ede0 = DAT_8019edd0;
  }
  if (-1 < DAT_8019edd4) {
    DAT_8019ede4 = DAT_8019edd4;
  }
  DAT_8019edd0 = 0xffffffff;
  DAT_8019edd4 = 0xffffffff;
  if (DAT_8019edd8 == 1) {
LAB_80135d4c:
    iVar2 = FUN_80135de4();
    if (-1 < iVar2) {
      iVar3 = local_18[DAT_8019edd8];
      iVar2 = local_40[iVar2];
      (&DAT_8019edd0)[iVar3] = iVar2;
      if ((iVar2 == 0) && ((&DAT_8019ede0)[iVar3] == 1)) {
        (&DAT_8019edd0)[iVar3] = 2;
      }
      DAT_8019edd8 = DAT_8019edd8 + 1;
    }
  }
  else {
    if (DAT_8019edd8 < 2) {
      if (DAT_8019edd8 != 0) goto LAB_80135dbc;
    }
    else if (DAT_8019edd8 != 2) {
      if (DAT_8019edd8 != 3) goto LAB_80135dbc;
      goto LAB_80135d4c;
    }
    FUN_80135ee4();
    lVar1 = _card_info(local_28[DAT_8019edd8]);
    if (lVar1 == 1) {
      DAT_8019eddc = 0;
      DAT_8019edd8 = DAT_8019edd8 + 1;
    }
    else if (DAT_8019eddc < 5) {
      DAT_8019eddc = DAT_8019eddc + 1;
    }
    else {
      DAT_8019eddc = 0;
      DAT_8019edd8 = DAT_8019edd8 + 2;
    }
  }
LAB_80135dbc:
  if (3 < DAT_8019edd8) {
    DAT_8019edd8 = 0;
  }
  return;
}



