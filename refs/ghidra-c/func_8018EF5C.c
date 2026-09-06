
void S_SCA_OBJ_274(int param_1)

{
  undefined2 in_v0;
  int in_v1;
  uint in_t1;
  int in_t2;
  
  *(undefined2 *)(in_v1 + 0x1aa) = in_v0;
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) | 2;
  }
  return;
}



