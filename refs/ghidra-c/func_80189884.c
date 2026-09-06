
void FUN_80189884(uchar *param_1,ulong param_2,short param_3)

{
  ulong addr;
  
  addr = SpuMallocWithStartAddr(param_2,*(long *)((&DAT_801f66e8)[param_3 * 5] + 4));
  if (addr != 0xffffffff) {
    *(ulong *)(&DAT_801f66ec + param_3 * 0x14) = addr;
    SpuSetTransferStartAddr(addr);
    SpuRead(param_1,*(ulong *)((&DAT_801f66e8)[param_3 * 5] + 4));
  }
  return;
}



