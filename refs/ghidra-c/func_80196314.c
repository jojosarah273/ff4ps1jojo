
uint SYS_OBJ_22FC(void)

{
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  
  *(undefined4 *)(&DAT_801fd3b0 + DAT_8019dc7c * 0x60) = unaff_s2;
  *(undefined4 *)(&DAT_801fd3a8 + DAT_8019dc7c * 0x60) = unaff_s3;
  DAT_8019dc7c = DAT_8019dc7c + 1 & 0x3f;
  SetIntrMask(DAT_8019dc84);
  SYS_OBJ_23A8();
  return DAT_8019dc7c - DAT_8019dc80 & 0x3f;
}



