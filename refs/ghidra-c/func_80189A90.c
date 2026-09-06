
void FUN_80189a90(short param_1)

{
  if ((&DAT_801f66e8)[param_1 * 5] != 0) {
    (&DAT_801f66e8)[param_1 * 5] = 0;
    SpuFree(*(ulong *)(&DAT_801f66ec + param_1 * 0x14));
  }
  return;
}



