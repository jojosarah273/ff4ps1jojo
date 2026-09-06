
void SPU_OBJ_AB0(void)

{
  *(uint *)PTR_SPU_DELAY_8019b128 = *(uint *)PTR_SPU_DELAY_8019b128 & 0xf0ffffff | 0x22000000;
  return;
}



