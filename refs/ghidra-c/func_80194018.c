
int ResetGraph(int mode)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = mode & 7;
  if (uVar2 != 3) {
    if (3 < uVar2) {
      if (uVar2 != 5) {
        iVar1 = SYS_OBJ_110();
        return iVar1;
      }
      goto SYS_OBJ_68;
    }
    if (uVar2 != 0) {
      iVar1 = SYS_OBJ_110();
      return iVar1;
    }
  }
  printf("ResetGraph:jtb=%08x,env=%08x\n",&PTR_s__Id__sys_c_v_1_140_1998_01_12_07_8019db0c,
         &DAT_8019db54);
SYS_OBJ_68:
  SYS_OBJ_2ED8(&DAT_8019db54,0,0x80);
  ResetCallback();
  GPU_cw((uint)PTR_PTR_8019db4c & 0xffffff);
  DAT_8019db54 = SYS_OBJ_2608(mode);
  DAT_8019db55 = 1;
  DAT_8019db58 = *(undefined2 *)(&DAT_8019dbd4 + (uint)DAT_8019db54 * 4);
  DAT_8019db5a = *(undefined2 *)(&DAT_8019dbe0 + (uint)DAT_8019db54 * 4);
  SYS_OBJ_2ED8(&DAT_8019db64,0xffffffff,0x5c);
  SYS_OBJ_2ED8(&DAT_8019dbc0,0xffffffff,0x14);
  iVar1 = SYS_OBJ_160();
  return iVar1;
}



