
uint __addsf3(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if ((param_1 & 0x7fffffff) == 0) {
ADDSF3_OBJ_64:
    uVar7 = ADDSF3_OBJ_194();
    return uVar7;
  }
  if ((param_2 & 0x7fffffff) != 0) {
    uVar5 = (int)param_1 >> 0x17 & 0xff;
    uVar6 = (int)param_2 >> 0x17 & 0xff;
    if (uVar5 <= uVar6 + 0x19) {
      if (uVar6 <= uVar5 + 0x19) {
        uVar2 = param_1 & 0x7fffff | 0x800000;
        iVar3 = uVar2 * 0x40;
        uVar1 = param_2 & 0x7fffff | 0x800000;
        iVar4 = uVar1 * 0x40;
        if ((int)param_1 < 0) {
          iVar3 = uVar2 * -0x40;
        }
        if ((param_2 & 0x80000000) != 0) {
          iVar4 = uVar1 * -0x40;
        }
        if (uVar6 < uVar5) {
          uVar7 = ADDSF3_OBJ_C4(iVar4 >> (uVar5 - uVar6 & 0x1f));
          return uVar7;
        }
        uVar5 = (iVar3 >> (uVar6 - uVar5 & 0x1f)) + iVar4;
        if ((int)uVar5 < 0) {
          uVar5 = -uVar5;
          uVar7 = 0x80000000;
        }
        else if (uVar5 == 0) {
          uVar7 = ADDSF3_OBJ_194();
          return uVar7;
        }
        for (; (uVar5 & 0xe0000000) == 0; uVar5 = uVar5 << 1) {
          uVar6 = uVar6 - 1;
        }
        if ((uVar5 & 0x40000000) != 0) {
          uVar5 = (int)uVar5 >> 1;
          uVar6 = uVar6 + 1;
        }
        uVar1 = uVar5 + 0x20;
        if ((uVar5 & 0x40) == 0) {
          uVar1 = uVar5 + 0x1f;
        }
        if ((uVar1 & 0x40000000) != 0) {
          uVar1 = (int)uVar1 >> 1;
          uVar6 = uVar6 + 1;
        }
        if (uVar6 < 0xff) {
          return uVar7 | uVar6 << 0x17 | (int)uVar1 >> 6 & 0xff7fffffU;
        }
        _err_math(0x22,10);
        uVar7 = ADDSF3_OBJ_190();
        return uVar7;
      }
      goto ADDSF3_OBJ_64;
    }
  }
  uVar7 = ADDSF3_OBJ_194();
  return uVar7;
}



