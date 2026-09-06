
undefined4 S_CRWA_OBJ_9C(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint unaff_s1;
  int unaff_s2;
  int unaff_s5;
  int in_stack_00000010;
  
  iVar2 = DAT_8019b130;
  if (DAT_8019b130 == 1) {
    DAT_8019b130 = 0;
    unaff_s5 = 1;
  }
  bVar1 = true;
  if (DAT_8019b14c != 0) {
    in_stack_00000010 = DAT_8019b14c;
    DAT_8019b14c = 0;
  }
  do {
    uVar3 = 0x400;
    if (unaff_s1 < 0x401) {
      bVar1 = false;
      uVar3 = unaff_s1;
    }
    _spu_t(2,unaff_s2);
    _spu_t(1);
    _spu_t(3,&DAT_8019b184,uVar3);
    unaff_s1 = unaff_s1 - 0x400;
    unaff_s2 = unaff_s2 + 0x400;
    WaitEvent(DAT_8019b09c);
  } while (bVar1);
  if (unaff_s5 != 0) {
    DAT_8019b130 = iVar2;
  }
  if (in_stack_00000010 != 0) {
    DAT_8019b14c = in_stack_00000010;
  }
  return 0;
}



