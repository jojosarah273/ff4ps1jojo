
undefined4 CD_initvol(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019bcc4;
  if ((*(short *)(PTR_VOICE_00_LEFT_RIGHT_8019bcc4 + 0x1b8) == 0) &&
     (*(short *)(PTR_VOICE_00_LEFT_RIGHT_8019bcc4 + 0x1ba) == 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019bcc4 + 0x180) = 0x3fff;
    *(undefined2 *)(puVar1 + 0x182) = 0x3fff;
  }
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019bcc4;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019bcc4 + 0x1b0) = 0x3fff;
  *(undefined2 *)(puVar1 + 0x1b2) = 0x3fff;
  *(undefined2 *)(puVar1 + 0x1aa) = 0xc001;
  *PTR_CDROM_REG0_8019bcb0 = 2;
  *PTR_CDROM_REG2_8019bcc0 = 0x80;
  *PTR_CDROM_REG3_8019bcb4 = 0;
  *PTR_CDROM_REG0_8019bcb0 = 3;
  *PTR_CDROM_REG1_8019bcbc = 0x80;
  *PTR_CDROM_REG2_8019bcc0 = 0;
  *PTR_CDROM_REG3_8019bcb4 = 0x20;
  return 0;
}



