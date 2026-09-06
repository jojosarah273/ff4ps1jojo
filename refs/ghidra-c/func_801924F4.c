
void CDR_1_OBJ_77C(void)

{
  uint unaff_s2;
  
  DAT_8019bda0 = unaff_s2;
  if ((unaff_s2 & 0x30) == 0) {
    DAT_8019bda4 = 0x200;
    CDR_1_OBJ_7F0();
    return;
  }
  if ((unaff_s2 & 0x30) != 0x20) {
    CDR_1_OBJ_7E4();
    return;
  }
  DAT_8019bda4 = 0x249;
  CDR_1_OBJ_7F0();
  return;
}



