
void FUN_80189d38(uint param_1,short param_2,int param_3,int param_4,short param_5,short param_6,
                 short param_7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  SpuVoiceAttr local_60;
  
  iVar2 = (int)param_2;
  local_60.voice = 1 << (param_1 & 0x1f);
  iVar3 = (&DAT_801f66e8)[iVar2 * 5] + ((param_3 << 0x10) >> 0xc) + 0x10;
  uVar1 = *(ushort *)((uint)*(byte *)(iVar3 + 1) * 2 + (&DAT_801f66f0)[iVar2 * 5]);
  local_60.mask = 0x600e3;
  FUN_80189e44(&local_60.volume,(int)param_6,(int)param_7,(&DAT_801f66f8)[iVar2 * 0x14],iVar3);
  local_60.note = (short)((uint)(param_4 << 0x18) >> 0x10) + param_5;
  local_60.sample_note = *(ushort *)(iVar3 + 4);
  local_60.addr = *(int *)(&DAT_801f66ec + iVar2 * 0x14) + (uint)uVar1 * 8;
  local_60.adsr1 = *(ushort *)(iVar3 + 8);
  local_60.adsr2 = *(ushort *)(iVar3 + 10);
  SpuSetKeyOnWithAttr(&local_60);
  return;
}



