
void FUN_801773fc(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  if (param_1 < 0) {
    param_1 = param_1 + 3;
  }
  param_1 = param_1 >> 2;
  pbVar6 = &DAT_800d4524;
  iVar7 = 0xf;
  do {
    uVar1 = CONCAT11(*pbVar6,pbVar6[-1]);
    iVar5 = (uVar1 & 0x1f) * param_1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0x1f;
    }
    iVar3 = (uVar1 >> 5 & 0x1f) * param_1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x1f;
    }
    iVar2 = (*pbVar6 >> 2 & 0x1f) * param_1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1f;
    }
    uVar4 = iVar5 >> 5 & 0xffffU | (iVar3 >> 5 & 0x7ffU) << 5;
    pbVar6[-1] = (byte)uVar4;
    *pbVar6 = (byte)(uVar4 >> 8) | (byte)(((iVar2 >> 5 & 0x3fU) << 10) >> 8);
    iVar7 = iVar7 + -1;
    pbVar6 = pbVar6 + 2;
  } while (-1 < iVar7);
  return;
}



