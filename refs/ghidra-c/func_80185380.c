
void FUN_80185380(void *param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  psVar4 = &DAT_801e1904;
  iVar5 = 0x10000;
  do {
    bVar1 = *param_2;
    uVar2 = (ushort)bVar1 | (param_2[1] & 1) << 8;
    if ((param_2[1] & 1) == 0) {
      psVar4[-0x582] = -uVar2;
      *psVar4 = 0x100 - uVar2;
    }
    else {
      *psVar4 = -(ushort)bVar1;
      psVar4[-0x582] = 0x100 - (ushort)bVar1;
    }
    psVar4 = psVar4 + 10;
    iVar3 = iVar5 >> 0x10;
    param_2 = param_2 + 4;
    iVar5 = iVar5 + 0x10000;
  } while (iVar3 < 0x8c);
  DAT_801e18f0 = DAT_801e18dc;
  DAT_801e23f4 = DAT_801e23e0;
  AddPrims(param_1,&DAT_801e0dc8,&DAT_801e220c);
  if (((DAT_800d4700 & 0xffff00) == 0x600000) && (DAT_800d4709 == -0x26)) {
    AddPrims((void *)((int)param_1 + 0x24),&DAT_801e0de0,&DAT_801e23ec);
  }
  else {
    AddPrims(param_1,&DAT_801e0de0,&DAT_801e23ec);
  }
  return;
}



