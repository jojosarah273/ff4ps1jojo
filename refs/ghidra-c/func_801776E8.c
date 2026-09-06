
void FUN_801776e8(void)

{
  DAT_800d2100 = 0x80;
  ClearOTag((u_long *)&DAT_801a0b00,0x29);
  ClearOTag((u_long *)&DAT_801b5810,0x29);
  DAT_8019ee08 = 0xffff;
  DAT_8019ed30 = 0;
  DAT_8019ee54 = 0;
  DAT_8019ee02 = 0;
  DAT_8019ee00 = 0;
  DAT_8019ee32 = 0;
  DAT_8019ed08 = 0;
  DAT_8019ed00 = 0;
  DAT_8019ecff = 0;
  DAT_8019ed78 = 0;
  DAT_8019ee98 = 0xffff;
  DAT_801e09cc = 0xffff;
  FUN_800f9bd0();
  FUN_801928c8();
  StopCallback();
  return;
}



