
void FUN_80124c64(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = FUN_800f3c3c(0);
  sVar1 = 0x18;
  uVar5 = 0;
  uVar4 = (uint)*(uint3 *)(iVar2 + 0x73) << 1;
  uVar3 = uVar4 >> 0x18;
  do {
    uVar5 = uVar3 + uVar5 * 2 & 0xff;
    if (uVar5 < 10) {
      uVar4 = uVar4 << 1;
    }
    else {
      uVar5 = uVar5 - 10 & 0xff;
      uVar4 = uVar4 * 2 + 1;
    }
    uVar3 = uVar4 >> 0x18 & 1;
    sVar1 = sVar1 + -1;
    *(char *)(iVar2 + 0x1d) = (char)uVar5;
  } while (sVar1 != 0);
  *(char *)(iVar2 + 0x73) = (char)uVar4;
  *(char *)(iVar2 + 0x74) = (char)(uVar4 >> 8);
  *(char *)(iVar2 + 0x75) = (char)(uVar4 >> 0x10);
  return;
}



