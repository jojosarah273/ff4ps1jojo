
void FUN_80179670(undefined1 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined *puVar3;
  EXEC *pEVar4;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 local_18;
  
  puVar1 = auStack_40 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2ddc >> (3 - uVar2) * 8;
  auStack_40 = (undefined1  [4])DAT_800f2ddc;
  puVar1 = auStack_3c + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2de0 >> (3 - uVar2) * 8;
  auStack_3c = (undefined1  [4])DAT_800f2de0;
  local_38 = DAT_800f2de4;
  local_37 = DAT_800f2de5;
  local_36 = DAT_800f2de6;
  puVar1 = auStack_30 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2de8 >> (3 - uVar2) * 8;
  auStack_30 = (undefined1  [4])DAT_800f2de8;
  puVar1 = auStack_2c + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2dec >> (3 - uVar2) * 8;
  auStack_2c = (undefined1  [4])DAT_800f2dec;
  puVar1 = auStack_28 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2df0 >> (3 - uVar2) * 8;
  auStack_28 = (undefined1  [4])DAT_800f2df0;
  local_24 = DAT_800f2df4;
  local_23 = DAT_800f2df5;
  local_22 = DAT_800f2df6;
  puVar1 = auStack_20 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e54 >> (3 - uVar2) * 8;
  auStack_20 = (undefined1  [4])DAT_800f2e54;
  puVar1 = auStack_1c + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e58 >> (3 - uVar2) * 8;
  auStack_1c = (undefined1  [4])DAT_800f2e58;
  local_18 = DAT_800f2e5c;
  DAT_8019ee54 = 1;
  FUN_80178988(auStack_20,&DAT_8001f800);
  DAT_800d2100 = 0x80;
  DAT_8001f000 = param_1;
  SetDispMask(0);
  DrawSync(0);
  FUN_8017953c();
  DAT_8019ee34 = &DAT_8001f800;
  ResetGraph(3);
  FUN_801928c8();
  FUN_801976e8();
  CloseEvent(DAT_8019ee0c);
  CloseEvent(DAT_8019ee1c);
  CloseEvent(DAT_8019ee38);
  CloseEvent(DAT_8019edf8);
  CloseEvent(DAT_8019ee18);
  CloseEvent(DAT_8019ee20);
  CloseEvent(DAT_8019ee3c);
  CloseEvent(DAT_8019edfc);
  FUN_801976f8();
  StopCallback();
  FUN_801976e8();
  puVar3 = DAT_8019ee34;
  pEVar4 = (EXEC *)(DAT_8019ee34 + 0x10);
  *(undefined **)(DAT_8019ee34 + 0x30) = &DAT_800cfff0;
  *(undefined4 *)(puVar3 + 0x34) = 0;
  Exec(pEVar4,1,(char **)0x0);
  ResetCallback();
  CdInit();
  FUN_80178dd0(0);
  ResetGraph(3);
  SetGraphDebug(0);
  FUN_80178bb4();
  SetDispMask(0);
  FUN_80178730();
  VSync(0);
  FUN_801795bc();
  FUN_80178988(auStack_40,&DAT_80028000);
  FUN_80185fa0();
  FUN_80178988(auStack_30,&DAT_80014000);
  FUN_80179500();
  DAT_8019ee54 = 0;
  return;
}



