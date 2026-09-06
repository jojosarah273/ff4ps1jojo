
void FUN_80178f20(void)

{
  undefined1 *puVar1;
  uint uVar2;
  short sVar3;
  u_short uVar4;
  int iVar5;
  u_short *puVar6;
  int iVar7;
  TIM_IMAGE local_80;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 local_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 local_24;
  
  puVar1 = auStack_68 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e10 >> (3 - uVar2) * 8;
  auStack_68 = (undefined1  [4])DAT_800f2e10;
  puVar1 = auStack_64 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e14 >> (3 - uVar2) * 8;
  auStack_64 = (undefined1  [4])DAT_800f2e14;
  puVar1 = auStack_60 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e18 >> (3 - uVar2) * 8;
  auStack_60 = (undefined1  [4])DAT_800f2e18;
  puVar1 = auStack_5c + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e1c >> (3 - uVar2) * 8;
  auStack_5c = (undefined1  [4])DAT_800f2e1c;
  puVar1 = auStack_58 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e20 >> (3 - uVar2) * 8;
  auStack_58._0_4_ = DAT_800f2e20;
  puVar1 = auStack_50 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e24 >> (3 - uVar2) * 8;
  auStack_50 = (undefined1  [4])DAT_800f2e24;
  puVar1 = auStack_4c + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e28 >> (3 - uVar2) * 8;
  auStack_4c = (undefined1  [4])DAT_800f2e28;
  puVar1 = auStack_48 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e2c >> (3 - uVar2) * 8;
  auStack_48 = (undefined1  [4])DAT_800f2e2c;
  puVar1 = auStack_44 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e30 >> (3 - uVar2) * 8;
  auStack_44 = (undefined1  [4])DAT_800f2e30;
  puVar1 = auStack_40 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e34 >> (3 - uVar2) * 8;
  auStack_40 = (undefined1  [4])DAT_800f2e34;
  local_3c = DAT_800f2e38;
  puVar1 = auStack_38 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e3c >> (3 - uVar2) * 8;
  auStack_38 = (undefined1  [4])DAT_800f2e3c;
  puVar1 = auStack_34 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e40 >> (3 - uVar2) * 8;
  auStack_34 = (undefined1  [4])DAT_800f2e40;
  puVar1 = auStack_30 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e44 >> (3 - uVar2) * 8;
  auStack_30 = (undefined1  [4])DAT_800f2e44;
  puVar1 = auStack_2c + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e48 >> (3 - uVar2) * 8;
  auStack_2c = (undefined1  [4])DAT_800f2e48;
  puVar1 = auStack_28 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e4c >> (3 - uVar2) * 8;
  auStack_28 = (undefined1  [4])DAT_800f2e4c;
  local_24 = DAT_800f2e50;
  FUN_80178988(auStack_68,&DAT_80010000);
  OpenTIM((u_long *)&DAT_80010000);
  ReadTIM(&local_80);
  FUN_80179248(local_80.mode,local_80.crect,local_80.caddr,local_80.prect,local_80.paddr,
               &DAT_801a0960);
  LoadImage((RECT *)&DAT_801a096c,DAT_801a0964);
  LoadImage((RECT *)&DAT_801a0974,DAT_801a0968);
  FUN_80178988(auStack_50,&DAT_80020000);
  OpenTIM((u_long *)&DAT_80020000);
  ReadTIM(&local_80);
  FUN_80179248(local_80.mode,local_80.crect,local_80.caddr,local_80.prect,local_80.paddr,
               &DAT_801a097c);
  LoadImage((RECT *)&DAT_801a0988,DAT_801a0980);
  sVar3 = DAT_801a0990;
  DAT_801a0990 = 0x80;
  LoadImage((RECT *)&DAT_801a0990,DAT_801a0984);
  iVar5 = 0;
  puVar6 = &DAT_801ca4b0;
  iVar7 = 0x10000;
  DAT_801a0990 = sVar3;
  do {
    uVar4 = GetClut((int)DAT_801a0990,DAT_801a0992 + iVar5);
    *puVar6 = uVar4;
    iVar5 = iVar7 >> 0x10;
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + 0x10000;
  } while (iVar5 < 6);
  FUN_80178988(auStack_38,&DAT_80030000);
  OpenTIM((u_long *)&DAT_80030000);
  ReadTIM(&local_80);
  FUN_80179248(local_80.mode,local_80.crect,local_80.caddr,local_80.prect,local_80.paddr,
               &DAT_801a0998);
  LoadImage((RECT *)&DAT_801a09a4,DAT_801a099c);
  sVar3 = DAT_801a09ac;
  DAT_801a09ac = 0x80;
  LoadImage((RECT *)&DAT_801a09ac,DAT_801a09a0);
  iVar5 = 0;
  puVar6 = &DAT_801ca4c0;
  iVar7 = 0x10000;
  DAT_801a09ac = sVar3;
  do {
    uVar4 = GetClut((int)DAT_801a09ac,DAT_801a09ae + iVar5);
    *puVar6 = uVar4;
    iVar5 = iVar7 >> 0x10;
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + 0x10000;
  } while (iVar5 < 0x10);
  return;
}



