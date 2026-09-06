
void SPU_OBJ_A88(void)

{
  *(uint *)PTR_SPU_DELAY_8019b128 = *(uint *)PTR_SPU_DELAY_8019b128 & 0xf0ffffff | 0x20000000;
  return;
}



