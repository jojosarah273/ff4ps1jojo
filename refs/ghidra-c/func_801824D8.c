
void FUN_801824d8(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  param_4 = param_4 & 0xff;
  iVar9 = 0;
  iVar10 = 0x10000;
  do {
    uVar5 = param_1 >> 1;
    uVar8 = param_2 & 0x80;
    uVar7 = param_3 & 0x80;
    uVar6 = param_4 & 0x80;
    uVar1 = param_4 & 0x7f;
    uVar2 = param_1 & 0x40;
    param_1 = (param_1 & 0x3f) << 2;
    uVar3 = param_2 & 0x40;
    param_2 = (param_2 & 0x3f) << 2;
    uVar4 = param_3 & 0x40;
    param_3 = (param_3 & 0x3f) << 2;
    param_4 = (param_4 & 0x3f) << 2;
    *(byte *)(param_5 + iVar9) =
         (byte)(uVar1 << 1) & 0x80 |
         (byte)((uVar4 << 1 |
                (uVar3 << 1 |
                (uVar2 << 1 | (uVar6 | (uVar7 | (uVar5 & 0x40 | uVar8) >> 1) >> 1) >> 1) >> 1) >> 1)
               >> 1);
    iVar9 = iVar10 >> 0x10;
    iVar10 = iVar10 + 0x10000;
  } while (iVar9 < 4);
  return;
}



