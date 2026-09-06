
/* WARNING: Removing unreachable block (ram,0x8018b018) */
/* WARNING: Removing unreachable block (ram,0x8018b020) */
/* WARNING: Removing unreachable block (ram,0x8018b04c) */
/* WARNING: Removing unreachable block (ram,0x8018b058) */
/* WARNING: Removing unreachable block (ram,0x8018b06c) */
/* WARNING: Removing unreachable block (ram,0x8018b07c) */
/* WARNING: Removing unreachable block (ram,0x8018b094) */
/* WARNING: Removing unreachable block (ram,0x8018b0a4) */
/* WARNING: Removing unreachable block (ram,0x8018b0b0) */
/* WARNING: Removing unreachable block (ram,0x8018b0e0) */
/* WARNING: Removing unreachable block (ram,0x8018b0fc) */
/* WARNING: Removing unreachable block (ram,0x8018b104) */

undefined4 S_M_WSA_OBJ_64(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint unaff_s2;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if ((unaff_s2 & ~DAT_8019b144) != 0) {
    unaff_s2 = unaff_s2 + DAT_8019b144;
  }
  iVar7 = ((int)unaff_s2 >> (DAT_8019b13c & 0x1f)) << (DAT_8019b13c & 0x1f);
  if ((param_4 & ~DAT_8019b144) != 0) {
    param_4 = param_4 + DAT_8019b144;
  }
  iVar6 = ((int)param_4 >> (DAT_8019b13c & 0x1f)) << (DAT_8019b13c & 0x1f);
  if (0x100f < iVar6) {
    if ((0x10000 << (DAT_8019b13c & 0x1f)) - param_3 < iVar6 + iVar7) {
      uVar1 = S_M_WSA_OBJ_314();
      return uVar1;
    }
    iVar5 = 0;
    _spu_gcSPU();
    puVar3 = DAT_8019b17c;
    if (0 < DAT_8019b174) {
      do {
        if ((*puVar3 & 0x40000000) != 0) {
          uVar1 = S_M_WSA_OBJ_140();
          return uVar1;
        }
        iVar5 = iVar5 + 1;
        puVar3 = puVar3 + 2;
      } while (iVar5 < DAT_8019b174);
    }
    iVar5 = 0;
    if (0 < DAT_8019b174) {
      do {
        uVar9 = (DAT_8019b17c + iVar5 * 2)[1];
        uVar4 = DAT_8019b17c[iVar5 * 2];
        uVar8 = uVar4 & 0xfffffff;
        if ((int)uVar8 < iVar6) {
          uVar9 = uVar9 - (iVar6 - uVar8);
        }
        if (((iVar7 <= (int)uVar9) && ((uVar4 & 0xf0000000) != 0)) &&
           (iVar2 = S_M_WSA_OBJ_344(iVar6,iVar7), iVar2 < 1)) {
          uVar1 = S_M_WSA_OBJ_1E8();
          return uVar1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_8019b174);
    }
  }
  return 0xffffffff;
}



