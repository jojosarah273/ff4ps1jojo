
undefined4 PAD_OBJ_16C(void)

{
  FUN_801976e8();
  DAT_801febec = PAD_OBJ_1E4;
  DAT_801febf0 = PAD_OBJ_24C;
  DAT_801febe8 = 0;
  DAT_801febf4 = 0;
  SysDeqIntRP(1,&DAT_801febe8);
  SysEnqIntRP(1,&DAT_801febe8);
  FUN_801976f8();
  return 1;
}



