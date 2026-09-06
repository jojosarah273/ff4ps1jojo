
void FUN_8015240c(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar3 = FUN_800f3c3c(0);
  puVar4 = (ushort *)FUN_800f3b04(0x394d);
  sVar2 = 0x10;
  *(undefined1 *)(iVar3 + 0xe0) = 0;
  *(undefined1 *)(iVar3 + 0xe2) = 0;
  *(undefined1 *)(iVar3 + 0xe3) = 0;
  *(undefined1 *)(iVar3 + 0xe4) = 0;
  *(undefined1 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 1) = 0;
  do {
    uVar1 = *(ushort *)(iVar3 + 0xe1);
    uVar5 = uVar1 & 1;
    uVar6 = (uint)(uVar1 >> 1) + uVar6 * 0x8000 & 0xffff;
    *(char *)(iVar3 + 0xe1) = (char)uVar6;
    *(char *)(iVar3 + 0xe2) = (char)(uVar6 >> 8);
    if ((uVar1 & 1) != 0) {
      uVar6 = (uint)*(ushort *)(iVar3 + 0xdf) + (uint)*puVar4;
      uVar5 = (uint)(uVar6 != 0);
      uVar6 = uVar6 & 0xffff;
      *(char *)puVar4 = (char)uVar6;
      *(char *)((int)puVar4 + 1) = (char)(uVar6 >> 8);
    }
    sVar2 = sVar2 + -1;
    uVar1 = *puVar4;
    uVar6 = (uint)(uVar1 >> 1) + uVar5 * 0x8000 & 0xffff;
    *(char *)puVar4 = (char)uVar6;
    *(char *)((int)puVar4 + 1) = (char)(uVar6 >> 8);
    uVar6 = *(ushort *)(iVar3 + 0xe3) & 1;
    uVar5 = (uint)(*(ushort *)(iVar3 + 0xe3) >> 1) + (uVar1 & 1) * 0x8000 & 0xffff;
    *(char *)(iVar3 + 0xe3) = (char)uVar5;
    *(char *)(iVar3 + 0xe4) = (char)(uVar5 >> 8);
  } while (sVar2 != 0);
  FUN_800f971c();
  return;
}



