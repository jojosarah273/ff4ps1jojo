
void SYS_OBJ_100C(uint param_1,uint param_2)

{
  int in_v0;
  uint in_v1;
  uint unaff_s0;
  uchar *unaff_s1;
  uint unaff_s2;
  
  if (in_v0 != 0) {
    param_2 = unaff_s2;
  }
  (**(code **)(PTR_PTR_8019db4c + 0x10))((in_v1 & 0xfff) << 0xc | param_1 & 0xfff | 0x6000000);
  (**(code **)(PTR_PTR_8019db4c + 0x10))((param_2 & 0x3ff) << 10 | unaff_s0 & 0x3ff | 0x7000000);
  memcpy("",unaff_s1,0x14);
  return;
}



