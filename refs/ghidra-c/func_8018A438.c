
void SPU_OBJ_280(undefined2 *param_1,uint param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1ae);
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1a6) = DAT_8019b12c;
  _spu_Fw1ts();
  puVar3 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  for (; PTR_VOICE_00_LEFT_RIGHT_8019b114 = puVar3, param_2 != 0; param_2 = param_2 - uVar6) {
    uVar6 = 0x40;
    if (param_2 < 0x41) {
      uVar6 = param_2;
    }
    iVar4 = 0;
    if (0 < (int)uVar6) {
      do {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        iVar4 = iVar4 + 2;
        *(undefined2 *)(puVar3 + 0x1a8) = uVar2;
      } while (iVar4 < (int)uVar6);
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) & 0xffcf | 0x10;
    _spu_Fw1ts();
    if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1ae) & 0x400) != 0) {
      uVar5 = 1;
      do {
        if (0xf00 < uVar5) {
          printf("SPU:T/O [%s]\n","wait (wrdy H -> L)");
          SPU_OBJ_390();
          return;
        }
        uVar5 = uVar5 + 1;
      } while ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1ae) & 0x400) != 0);
    }
    _spu_Fw1ts();
    _spu_Fw1ts();
    puVar3 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  }
  *(ushort *)(puVar3 + 0x1aa) = *(ushort *)(puVar3 + 0x1aa) & 0xffcf;
  if ((*(ushort *)(puVar3 + 0x1ae) & 0x7ff) != (uVar1 & 0x7ff)) {
    uVar6 = 1;
    do {
      if (0xf00 < uVar6) {
        printf("SPU:T/O [%s]\n","wait (dmaf clear/W)");
        SPU_OBJ_424();
        return;
      }
      uVar6 = uVar6 + 1;
    } while ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1ae) & 0x7ff) != (uVar1 & 0x7ff));
  }
  return;
}



