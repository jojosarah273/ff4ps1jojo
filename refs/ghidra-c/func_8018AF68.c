
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

undefined4 S_M_WSA_OBJ_140(void)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int unaff_s1;
  int unaff_s2;
  uint uVar5;
  int unaff_s5;
  uint uVar6;
  int iStack00000010;
  uint uStack00000014;
  
  iVar4 = 0;
  iStack00000010 = DAT_8019b174 - unaff_s5;
  if (0 < DAT_8019b174) {
    do {
      puVar3 = (uint *)(iVar4 * 8 + DAT_8019b17c);
      uVar6 = puVar3[1];
      uStack00000014 = *puVar3;
      uVar5 = uStack00000014 & 0xfffffff;
      if ((int)uVar5 < unaff_s1) {
        uVar6 = uVar6 - (unaff_s1 - uVar5);
      }
      if (((unaff_s2 <= (int)uVar6) &&
          (uStack00000014 = uStack00000014 & 0xf0000000, uStack00000014 != 0)) &&
         (iVar2 = S_M_WSA_OBJ_344(), iVar2 <= iStack00000010)) {
        uVar1 = S_M_WSA_OBJ_1E8();
        return uVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_8019b174);
  }
  return 0xffffffff;
}



