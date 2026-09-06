
void SPU_OBJ_390(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint unaff_s0;
  uint unaff_s1;
  undefined2 *unaff_s2;
  ushort unaff_s3;
  
  do {
    do {
      unaff_s1 = unaff_s1 - unaff_s0;
      _spu_Fw1ts();
      _spu_Fw1ts();
      puVar2 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
      if (unaff_s1 == 0) {
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) & 0xffcf;
        if ((*(ushort *)(puVar2 + 0x1ae) & 0x7ff) != unaff_s3) {
          uVar4 = 1;
          do {
            if (0xf00 < uVar4) {
              printf("SPU:T/O [%s]\n","wait (dmaf clear/W)");
              SPU_OBJ_424();
              return;
            }
            uVar4 = uVar4 + 1;
          } while ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1ae) & 0x7ff) != unaff_s3);
        }
        return;
      }
      unaff_s0 = 0x40;
      if (unaff_s1 < 0x41) {
        unaff_s0 = unaff_s1;
      }
      iVar3 = 0;
      if (0 < (int)unaff_s0) {
        do {
          uVar1 = *unaff_s2;
          unaff_s2 = unaff_s2 + 1;
          iVar3 = iVar3 + 2;
          *(undefined2 *)(puVar2 + 0x1a8) = uVar1;
        } while (iVar3 < (int)unaff_s0);
      }
      *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
           *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) & 0xffcf | 0x10;
      _spu_Fw1ts();
    } while ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1ae) & 0x400) == 0);
    uVar4 = 1;
    do {
      if (0xf00 < uVar4) {
        printf("SPU:T/O [%s]\n","wait (wrdy H -> L)");
        SPU_OBJ_390();
        return;
      }
      uVar4 = uVar4 + 1;
    } while ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1ae) & 0x400) != 0);
  } while( true );
}



