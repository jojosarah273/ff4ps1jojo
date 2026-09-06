
undefined4 main(void)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 local_40;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  
  __main();
  puVar1 = auStack_50 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2dc8 >> (3 - uVar2) * 8;
  auStack_50 = (undefined1  [4])DAT_800f2dc8;
  puVar1 = auStack_4c + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2dcc >> (3 - uVar2) * 8;
  auStack_4c = (undefined1  [4])DAT_800f2dcc;
  puVar1 = auStack_48 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2dd0 >> (3 - uVar2) * 8;
  auStack_48 = (undefined1  [4])DAT_800f2dd0;
  puVar1 = auStack_44 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2dd4 >> (3 - uVar2) * 8;
  auStack_44 = (undefined1  [4])DAT_800f2dd4;
  local_40 = DAT_800f2dd8;
  puVar1 = auStack_38 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2ddc >> (3 - uVar2) * 8;
  auStack_38 = (undefined1  [4])DAT_800f2ddc;
  puVar1 = auStack_34 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2de0 >> (3 - uVar2) * 8;
  auStack_34 = (undefined1  [4])DAT_800f2de0;
  local_30 = DAT_800f2de4;
  local_2f = DAT_800f2de5;
  local_2e = DAT_800f2de6;
  puVar1 = auStack_28 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2de8 >> (3 - uVar2) * 8;
  auStack_28 = (undefined1  [4])DAT_800f2de8;
  puVar1 = auStack_24 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2dec >> (3 - uVar2) * 8;
  auStack_24 = (undefined1  [4])DAT_800f2dec;
  puVar1 = auStack_20 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2df0 >> (3 - uVar2) * 8;
  auStack_20 = (undefined1  [4])DAT_800f2df0;
  local_1c = DAT_800f2df4;
  local_1b = DAT_800f2df5;
  local_1a = DAT_800f2df6;
  DAT_8019ed82 = 0;
  DAT_8019ede8 = 0;
  ResetCallback();
  CdInit();
  FUN_80178dd0(1);
  ResetGraph(0);
  SetGraphDebug(0);
  FUN_80178bb4();
  FUN_80178730();
  FUN_801782c0(&DAT_801a0a90);
  FUN_801782c0(&DAT_801b57a0);
  FUN_8017835c(&DAT_801ca4e0);
  FUN_801780b4(&DAT_801a0a90);
  FUN_801780b4(&DAT_801b57a0);
  FUN_80178220(&DAT_801ca4e0);
  FUN_801799f0(0);
  FUN_80178a58();
  FUN_80178f20();
  FUN_8018600c();
  FUN_80178988(auStack_50,&DAT_80010000);
  FUN_80179670(0);
  DAT_800d2100 = 0x80;
  FUN_801847d8();
  FUN_80185030();
  DAT_8019ee68 = 0;
  DAT_8019ee60 = 0;
  DAT_8019ee6a = 0;
  DAT_8019ee62 = 0;
  DAT_8019ee6c = 0;
  DAT_8019ee64 = 0;
  DAT_8019ee6e = 0;
  DAT_8019ee66 = 0;
  DAT_8019ee40 = 0;
  FUN_80178890();
  FUN_80179930();
  DAT_8019ee44 = FUN_801977a8();
  FUN_801776e8();
  return 0;
}



