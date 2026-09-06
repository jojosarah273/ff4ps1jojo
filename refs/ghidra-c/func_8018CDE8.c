
void S_GCA_OBJ_260(int param_1)

{
  undefined *puVar1;
  
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    S_GCA_OBJ_28C();
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1b4);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(puVar1 + 0x1b6);
  if ((*(ushort *)(puVar1 + 0x1aa) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    S_GCA_OBJ_2D0();
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    S_GCA_OBJ_2FC();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



