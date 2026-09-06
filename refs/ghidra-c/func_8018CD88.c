
void S_GCA_OBJ_200(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  *(undefined2 *)(param_1 + 8) = param_3;
  *(undefined2 *)(param_1 + 10) = param_2;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(puVar1 + 0x1b8);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(puVar1 + 0x1ba);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(puVar1 + 0x1b0);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(puVar1 + 0x1b2);
  if ((*(ushort *)(puVar1 + 0x1aa) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    S_GCA_OBJ_260();
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
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



