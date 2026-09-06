
/* WARNING: Removing unreachable block (ram,0x801829cc) */

void * FUN_801826c8(int param_1,int param_2,void *param_3,int *param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = 0;
  DAT_1f800000 = (void *)(param_1 + 0x5c);
  DAT_1f80000c = param_2;
  DAT_1f800018 = param_4;
  if ((DAT_8019ee2c & 0x1000) == 0) {
    uVar6 = ((ushort *)param_4[1])[1] & 7;
    iVar10 = (int)((0xf8 - uVar6) * 0x10000) >> 0x10;
    iVar8 = (int)(short)-(short)uVar6;
    uVar6 = (*(ushort *)param_4[1] & 7) >> 1;
    iVar9 = 0x84 - uVar6;
    if (iVar8 < iVar10) {
      do {
        iVar7 = (int)(uVar6 * -0x10000) >> 0x10;
        if (iVar7 < iVar9) {
          iVar3 = iVar5 * 0x10000;
          iVar4 = iVar7 * 0x10000;
          do {
            uVar2 = DAT_801dfd68;
            iVar3 = iVar3 + 0x10000;
            iVar4 = iVar4 + 0x40000;
            uVar1 = *(ushort *)(iVar5 * 2 + DAT_1f80000c);
            if ((uint)uVar1 != (uint)DAT_8019ee2c) {
              *(undefined2 *)((int)param_3 + 0x12) = 8;
              *(undefined2 *)((int)param_3 + 0x10) = 4;
              *(char *)((int)param_3 + 0xc) = (char)((uVar1 & 0x1f) << 2);
              *(byte *)((int)param_3 + 0xd) = (byte)(uVar1 >> 2) & 0xf8;
              *(short *)((int)param_3 + 8) = (short)iVar7 + 3;
              *(short *)((int)param_3 + 10) = (short)iVar8 + -2;
              *(undefined2 *)((int)param_3 + 0xe) = uVar2;
              AddPrim(DAT_1f800000,param_3);
              param_3 = (void *)((int)param_3 + 0x14);
            }
            iVar7 = iVar4 >> 0x10;
            iVar5 = iVar3 >> 0x10;
          } while (iVar7 < iVar9);
        }
        iVar8 = (iVar8 + 8) * 0x10000 >> 0x10;
      } while (iVar8 < iVar10);
    }
  }
  else if (*param_4 == 7) {
    uVar6 = ((ushort *)param_4[1])[1] & 0xf;
    iVar10 = (int)((0xf8 - uVar6) * 0x10000) >> 0x10;
    iVar8 = (int)(short)-(short)uVar6;
    uVar6 = (*(ushort *)param_4[1] & 0xf) >> 1;
    iVar9 = 0x88 - uVar6;
    if (iVar8 < iVar10) {
      do {
        iVar7 = (int)(uVar6 * -0x10000) >> 0x10;
        if (iVar7 < iVar9) {
          iVar3 = iVar5 * 0x10000;
          iVar4 = iVar7 * 0x10000;
          do {
            uVar2 = DAT_801dfd68;
            iVar3 = iVar3 + 0x20000;
            iVar4 = iVar4 + 0x80000;
            uVar1 = *(ushort *)(iVar5 * 2 + DAT_1f80000c);
            *(undefined2 *)((int)param_3 + 0x10) = 8;
            *(short *)((int)param_3 + 8) = (short)iVar7;
            *(short *)((int)param_3 + 10) = (short)iVar8;
            *(undefined2 *)((int)param_3 + 0xe) = uVar2;
            *(undefined2 *)((int)param_3 + 0x12) = 0x10;
            *(char *)((int)param_3 + 0xc) = (char)((uVar1 & 0xf) << 3);
            *(byte *)((int)param_3 + 0xd) = (byte)uVar1 & 0xf0;
            AddPrim(DAT_1f800000,param_3);
            param_3 = (void *)((int)param_3 + 0x14);
            iVar7 = iVar4 >> 0x10;
            iVar5 = iVar3 >> 0x10;
          } while (iVar7 < iVar9);
        }
        iVar5 = (iVar5 + 0x20) * 0x10000 >> 0x10;
        iVar8 = (iVar8 + 0x10) * 0x10000 >> 0x10;
      } while (iVar8 < iVar10);
    }
  }
  else {
    uVar6 = (((ushort *)param_4[1])[1] & 0xf) >> 1;
    iVar10 = 0xf0 - uVar6;
    iVar8 = -uVar6;
    uVar6 = (*(ushort *)param_4[1] & 0xf) >> 2;
    iVar9 = 0x80 - uVar6;
    if (iVar8 < iVar10) {
      do {
        iVar7 = (int)(uVar6 * -0x10000) >> 0x10;
        if (iVar7 < iVar9) {
          iVar3 = iVar5 * 0x10000;
          iVar4 = iVar7 * 0x10000;
          do {
            uVar2 = DAT_801dfd68;
            iVar3 = iVar3 + 0x10000;
            iVar4 = iVar4 + 0x40000;
            uVar1 = *(ushort *)(iVar5 * 2 + DAT_1f80000c);
            *(undefined2 *)((int)param_3 + 0x10) = 4;
            *(short *)((int)param_3 + 8) = (short)iVar7;
            *(short *)((int)param_3 + 10) = (short)iVar8;
            *(undefined2 *)((int)param_3 + 0xe) = uVar2;
            *(undefined2 *)((int)param_3 + 0x12) = 8;
            *(byte *)((int)param_3 + 0xc) = ((byte)uVar1 & 0xf) * '\x04' + -0x80;
            *(char *)((int)param_3 + 0xd) = (char)((uVar1 & 0xf0) >> 1);
            AddPrim(DAT_1f800000,param_3);
            param_3 = (void *)((int)param_3 + 0x14);
            iVar7 = iVar4 >> 0x10;
            iVar5 = iVar3 >> 0x10;
          } while (iVar7 < iVar9);
        }
        iVar8 = (iVar8 + 8) * 0x10000 >> 0x10;
      } while (iVar8 < iVar10);
    }
  }
  return param_3;
}



