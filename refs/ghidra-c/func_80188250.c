
void FUN_80188250(int *param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = DAT_8019ef5c;
  if (*param_1 == 2) {
    *param_1 = 1;
    *(undefined1 *)(iVar2 + (uint)*(byte *)(param_1 + 6) * 0x10 + 8) = 6;
    if ((short)param_1[5] != 0) {
      *(undefined1 *)(DAT_8019ef5c + (uint)*(byte *)((int)param_1 + 0x19) * 0x10 + 8) = 6;
    }
    DAT_8019ef64 = 0;
    DAT_8019ef60 = 4;
    iVar2 = DAT_8019ef5c + 0x14;
    *(int *)(iVar2 + (uint)*(byte *)(param_1 + 6) * 0x10) = param_1[2];
    if ((short)param_1[5] != 0) {
      *(int *)(iVar2 + (uint)*(byte *)((int)param_1 + 0x19) * 0x10) =
           *(int *)(iVar2 + (uint)*(byte *)(param_1 + 6) * 0x10) + 0x2000;
    }
    DAT_8019ef64 = (DAT_8019ef64 + 1) % (uint)param_1[3];
    if (param_1[3] == 0) {
      trap(7);
    }
    lVar1 = SpuStTransfer(4,1 << (*(byte *)(param_1 + 6) & 0x1f) |
                            (uint)*(ushort *)(param_1 + 5) <<
                            (*(byte *)((int)param_1 + 0x19) & 0x1f));
    DAT_8019ef84 = (undefined2)lVar1;
  }
  return;
}



