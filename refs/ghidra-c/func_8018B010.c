
uint S_M_WSA_OBJ_1E8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint unaff_s1;
  uint unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  uint in_stack_00000014;
  
  iVar2 = DAT_8019b17c;
  iVar1 = DAT_8019b174;
  uVar3 = 0xffffffff;
  if (-1 < unaff_s3) {
    if (unaff_s6 == 0) {
      puVar5 = (uint *)(unaff_s3 * 8 + DAT_8019b17c);
      *puVar5 = *puVar5 & 0xfffffff;
      uVar3 = S_M_WSA_OBJ_310();
      return uVar3;
    }
    if (unaff_s3 < unaff_s5) {
      puVar6 = (undefined4 *)(unaff_s5 * 8 + DAT_8019b17c);
      do {
        if (unaff_s5 + unaff_s6 <= iVar1) {
          puVar4 = (undefined4 *)((unaff_s5 + unaff_s6) * 8 + iVar2);
          *puVar4 = *puVar6;
          puVar4[1] = puVar6[1];
        }
        unaff_s5 = unaff_s5 + -1;
        puVar6 = puVar6 + -2;
      } while (unaff_s3 < unaff_s5);
    }
    if ((int)unaff_s4 < (int)unaff_s1) {
      puVar5 = (uint *)(unaff_s3 * 8 + DAT_8019b17c);
      *puVar5 = unaff_s4 | 0x80000000;
      puVar5[1] = unaff_s1 - unaff_s4;
      puVar5[2] = unaff_s1;
      puVar5[3] = unaff_s2;
      if (unaff_s6 == 2) {
        puVar5[4] = unaff_s1 + unaff_s2 | in_stack_00000014;
        puVar5[5] = (unaff_s7 - (unaff_s1 - unaff_s4)) - unaff_s2;
      }
      uVar3 = S_M_WSA_OBJ_310();
      return uVar3;
    }
    puVar5 = (uint *)(unaff_s3 * 8 + DAT_8019b17c);
    *puVar5 = unaff_s4;
    puVar5[1] = unaff_s2;
    puVar5[2] = unaff_s4 + unaff_s2 | in_stack_00000014;
    puVar5[3] = unaff_s7 - unaff_s2;
    uVar3 = unaff_s4;
  }
  return uVar3;
}



