
void FUN_800fe634(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  
  iVar1 = FUN_800f3c3c(0);
  pbVar2 = (byte *)FUN_800f3b04(0x6fb);
  iVar3 = FUN_800f3b9c(0x14ef00,0);
  uVar5 = (uint)*DAT_8019ed40 + (uint)*pbVar2;
  *(char *)(iVar1 + 6) = (char)uVar5;
  uVar4 = (ushort)((uint)*(byte *)(iVar1 + 0xad) * (uint)*(ushort *)(iVar3 + (uVar5 & 0x7f) * 2) >>
                  8);
  if ((uVar5 & 0x80) != 0) {
    uVar4 = ~uVar4 + 1;
  }
  *DAT_8019ed58 = uVar4;
  return;
}



