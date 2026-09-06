
uint SYS_OBJ_16CC(uint param_1,uint param_2)

{
  return (param_2 & 0x3ff) << 10 | param_1 & 0x3ff | 0xe3000000;
}



