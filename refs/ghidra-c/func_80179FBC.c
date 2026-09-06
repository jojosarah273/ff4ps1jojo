
void * FUN_80179fbc(void *param_1,int *param_2,short param_3,short param_4,short param_5,
                   short param_6)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *ot;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = (*(ushort **)(param_2[6] + 4))[1] & 7;
  iVar6 = (int)(((int)param_5 - uVar4) * 0x10000) >> 0x10;
  iVar9 = (int)(((int)param_6 - uVar4) * 0x10000) >> 0x10;
  uVar4 = **(ushort **)(param_2[6] + 4) & 7;
  iVar8 = (int)((0x108 - uVar4) * 0x10000) >> 0x10;
  iVar7 = (int)param_3;
  if ((void *)((int)param_1 +
              (short)((short)(iVar9 - iVar6 >> 3) * (short)((int)(iVar8 + uVar4) >> 3)) * 0x14) <
      DAT_8019ee88) {
    if (iVar6 < iVar9) {
      do {
        for (iVar3 = uVar4 * -0x10000; iVar3 >> 0x10 < iVar8;
            iVar3 = ((iVar3 >> 0x10) + 8) * 0x10000) {
          uVar1 = *(ushort *)(iVar7 * 2 + param_2[3]);
          if ((uVar1 & 0x3ff) != (int)param_4) {
            *(char *)((int)param_1 + 0xc) = (char)uVar1 << 3;
            *(byte *)((int)param_1 + 0xd) = (byte)(uVar1 >> 2) & 0xf8;
            if (param_2[5] == 0) {
              if (iVar6 < 0x8d) {
                uVar2 = uVar1 >> 9 & 0xe;
              }
              else {
                uVar2 = ((uVar1 >> 10 & 7) + 0x20) * 2;
              }
            }
            else {
              uVar2 = ((uVar1 >> 10 & 7) + param_2[5]) * 2;
            }
            *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)&DAT_801dfd68 + uVar2);
            *(short *)((int)param_1 + 8) = (short)((uint)iVar3 >> 0x10);
            *(short *)((int)param_1 + 10) = (short)iVar6;
            if ((uVar1 & 0x2000) == 0) {
              iVar5 = *param_2;
            }
            else {
              iVar5 = param_2[1];
            }
            ot = (void *)(iVar5 + (uint)(uVar1 >> 0xe) * 4);
            AddPrim(ot,param_1);
            param_2[2] = (int)ot;
            param_1 = (void *)((int)param_1 + 0x14);
          }
          iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
        }
        iVar6 = (int)(short)((short)iVar6 + 8);
      } while (iVar6 < iVar9);
    }
  }
  else {
    DAT_8019ee70 = 300;
  }
  return param_1;
}



