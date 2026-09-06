
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

long SpuMallocWithStartAddr(ulong addr,long size)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (DAT_8019b0ac == 0) {
    lVar1 = S_M_WSA_OBJ_64(addr,size,0);
    return lVar1;
  }
  if ((size & ~DAT_8019b144) != 0) {
    size = size + DAT_8019b144;
  }
  iVar7 = (size >> (DAT_8019b13c & 0x1f)) << (DAT_8019b13c & 0x1f);
  if ((addr & ~DAT_8019b144) != 0) {
    addr = addr + DAT_8019b144;
  }
  iVar6 = ((int)addr >> (DAT_8019b13c & 0x1f)) << (DAT_8019b13c & 0x1f);
  if (0x100f < iVar6) {
    if ((0x10000 << (DAT_8019b13c & 0x1f)) - (0x10000 - DAT_8019b0b0 << (DAT_8019b13c & 0x1f)) <
        iVar6 + iVar7) {
      lVar1 = S_M_WSA_OBJ_314();
      return lVar1;
    }
    iVar5 = 0;
    _spu_gcSPU();
    puVar3 = DAT_8019b17c;
    if (0 < DAT_8019b174) {
      do {
        if ((*puVar3 & 0x40000000) != 0) {
          lVar1 = S_M_WSA_OBJ_140();
          return lVar1;
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
          lVar1 = S_M_WSA_OBJ_1E8();
          return lVar1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_8019b174);
    }
  }
  return -1;
}



