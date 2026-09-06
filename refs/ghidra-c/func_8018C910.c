
int S_W0_OBJ_B8(void)

{
  int iVar1;
  uint unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined4 unaff_s5;
  int unaff_s6;
  int in_stack_00000010;
  
  while( true ) {
    _spu_t(2,unaff_s2);
    _spu_t(1);
    _spu_t(3,&DAT_8019b184,unaff_s0);
    unaff_s1 = unaff_s1 - 0x400;
    unaff_s2 = unaff_s2 + 0x400;
    unaff_s3 = unaff_s3 + unaff_s0;
    WaitEvent(DAT_8019b09c);
    if (unaff_s4 == 0) {
      if (unaff_s6 != 0) {
        DAT_8019b130 = unaff_s5;
      }
      if (in_stack_00000010 != 0) {
        DAT_8019b14c = in_stack_00000010;
      }
      return unaff_s3;
    }
    if (0x400 < unaff_s1) break;
    unaff_s0 = unaff_s1 & 0xffffffc0;
    unaff_s4 = 0;
    if (unaff_s0 < unaff_s1) {
      unaff_s0 = unaff_s0 + 0x40;
    }
  }
  iVar1 = S_W0_OBJ_B8();
  return iVar1;
}



