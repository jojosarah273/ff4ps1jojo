
/* WARNING: Removing unreachable block (ram,0x801985b8) */
/* WARNING: Removing unreachable block (ram,0x801985cc) */
/* WARNING: Removing unreachable block (ram,0x801985d0) */

uint __divsf3(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = ((int)param_1 >> 0x17 & 0xffU) - ((int)param_2 >> 0x17 & 0xffU);
  iVar5 = iVar6 + 0x7e;
  uVar7 = param_1 & 0x80000000 ^ param_2 & 0x80000000;
  if ((param_2 & 0x7fffffff) == 0) {
    uVar1 = 0x4f000000;
    if (uVar7 != 0) {
      uVar7 = DIVSF3_OBJ_134();
      return uVar7;
    }
  }
  else {
    if ((param_1 & 0x7fffffff) == 0) {
      uVar7 = DIVSF3_OBJ_134();
      return uVar7;
    }
    uVar4 = param_1 & 0x7fffff | 0x800000;
    uVar3 = param_2 & 0x7fffff | 0x800000;
    uVar1 = 0x1000000;
    if (uVar4 < uVar3) {
      uVar4 = uVar4 << 1;
      iVar5 = iVar6 + 0x7d;
    }
    uVar2 = 0;
    do {
      if ((int)uVar3 <= (int)uVar4) {
        uVar2 = uVar2 | uVar1;
        uVar4 = uVar4 - uVar3;
      }
      uVar1 = (int)uVar1 >> 1;
      uVar4 = uVar4 << 1;
    } while (uVar1 != 0);
    if (-1 < iVar5) {
      uVar7 = DIVSF3_OBJ_F0((int)(uVar2 + 1) >> 1,uVar3,uVar4,iVar5 + 1);
      return uVar7;
    }
    uVar1 = uVar7 | (int)(uVar2 + (1 << (-iVar5 & 0x1fU))) >> (-iVar5 + 1U & 0x1f) & 0xff7fffffU;
  }
  return uVar1;
}



