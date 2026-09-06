
void S_GCA_OBJ_2D0(int param_1)

{
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    S_GCA_OBJ_2FC();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



