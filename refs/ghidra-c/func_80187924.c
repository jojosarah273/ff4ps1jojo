
void FUN_80187924(int param_1,undefined1 param_2)

{
  DAT_8019ef1c = 0x48;
  CdControlB('\x0e',&DAT_8019ef1c,(u_char *)0x0);
  DAT_8019ef1c = 1;
  DAT_8019ef1d = param_2;
  CdControl('\r',&DAT_8019ef1c,"");
  CdControl('\x15',(u_char *)(&DAT_801f6230 + param_1 * 6),(u_char *)0x0);
  DAT_8019ef0a = 1;
  DAT_8019eece = *(undefined2 *)(&DAT_8019affc + (DAT_8019eee0 * 4 + (uint)DAT_8019eecc) * 4);
  return;
}



