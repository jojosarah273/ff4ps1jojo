
void S_GCA_OBJ_EC(int param_1,undefined4 param_2,undefined2 param_3,ushort param_4)

{
  undefined *puVar1;
  ushort in_t0;
  ushort uVar2;
  
  uVar2 = in_t0 & 0xf000;
  if ((in_t0 & 0x8000) == 0) {
    S_GCA_OBJ_1C0(param_1,0);
    return;
  }
  if (uVar2 == 0xb000) {
    S_GCA_OBJ_1BC(param_1,4);
    return;
  }
  if (uVar2 < 0xb001) {
    if (uVar2 == 0x9000) {
      S_GCA_OBJ_1BC(param_1,2);
      return;
    }
    if (uVar2 < 0x9001) {
      if (uVar2 != 0x8000) {
        S_GCA_OBJ_1C0();
        return;
      }
      S_GCA_OBJ_1BC(param_1,1);
      return;
    }
    if (uVar2 != 0xa000) {
      S_GCA_OBJ_1C0();
      return;
    }
    S_GCA_OBJ_1BC(param_1,3);
    return;
  }
  if (uVar2 == 0xd000) {
    S_GCA_OBJ_1BC(param_1,6);
    return;
  }
  if (uVar2 < 0xd001) {
    if (uVar2 != 0xc000) {
      S_GCA_OBJ_1C0();
      return;
    }
    S_GCA_OBJ_1BC(param_1,5);
    return;
  }
  if ((uVar2 != 0xe000) && (uVar2 != 0xf000)) {
    S_GCA_OBJ_1C0();
    return;
  }
  uVar2 = in_t0 & 0xfff;
  if (0x3fff < param_4) {
    *(ushort *)(param_1 + 4) = param_4 + 0x8000;
    S_GCA_OBJ_1E0();
    return;
  }
  *(ushort *)(param_1 + 4) = param_4;
  if (0x3fff < uVar2) {
    *(ushort *)(param_1 + 6) = uVar2 + 0x8000;
    S_GCA_OBJ_200();
    return;
  }
  *(ushort *)(param_1 + 6) = uVar2;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  *(undefined2 *)(param_1 + 8) = param_3;
  *(undefined2 *)(param_1 + 10) = 7;
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



