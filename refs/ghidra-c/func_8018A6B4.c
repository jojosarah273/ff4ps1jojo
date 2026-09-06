
void _spu_Fr_(undefined4 param_1,undefined2 param_2,int param_3)

{
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1a6) = param_2;
  _spu_Fw1ts();
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) | 0x30;
  _spu_Fw1ts();
  SPU_OBJ_AB0();
  *(undefined4 *)PTR_DMA_SPU_MADR_8019b118 = param_1;
  *(uint *)PTR_DMA_SPU_BCR_8019b11c = param_3 << 0x10 | 0x10;
  DAT_8019b164 = 1;
  *(undefined4 *)PTR_DMA_SPU_CHCR_8019b120 = 0x1000200;
  return;
}



