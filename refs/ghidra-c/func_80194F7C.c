
void SYS_OBJ_F64(uint param_1,uint param_2)

{
  uint in_v1;
  uchar *unaff_s1;
  int unaff_s2;
  
  if ((int)(param_2 + 2) <= unaff_s2) {
    SYS_OBJ_100C(param_1,0x131);
    return;
  }
  (**(code **)(PTR_PTR_8019db4c + 0x10))((in_v1 & 0xfff) << 0xc | param_1 & 0xfff | 0x6000000);
  (**(code **)(PTR_PTR_8019db4c + 0x10))((param_2 + 2 & 0x3ff) << 10 | param_2 & 0x3ff | 0x7000000);
  memcpy("",unaff_s1,0x14);
  return;
}



