
undefined4 CD_vol(undefined1 *param_1)

{
  *PTR_CDROM_REG0_8019bcb0 = 2;
  *PTR_CDROM_REG2_8019bcc0 = *param_1;
  *PTR_CDROM_REG3_8019bcb4 = param_1[1];
  *PTR_CDROM_REG0_8019bcb0 = 3;
  *PTR_CDROM_REG1_8019bcbc = param_1[2];
  *PTR_CDROM_REG2_8019bcc0 = param_1[3];
  *PTR_CDROM_REG3_8019bcb4 = 0x20;
  return 0;
}



