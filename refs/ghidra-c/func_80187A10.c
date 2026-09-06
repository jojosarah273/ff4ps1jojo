
void FUN_80187a10(int param_1)

{
  if (DAT_8019ef0a == 0x10) {
    DAT_8019ef0a = 2;
    DAT_8019ef16 = 0x9f;
    if ((DAT_8019ef0c < 0x33) && (DAT_8019ef16 = 0x4f, DAT_8019ef30 == 0)) {
      DAT_8019ef16 = 0xbf;
    }
    FUN_80189b8c(1,DAT_8019ef16,DAT_8019ef16,0);
    CdControlF('\x06',(u_char *)(&DAT_801f6230 + param_1 * 6));
  }
  return;
}



