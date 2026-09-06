
void FUN_80178a58(void)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 local_28;
  RECT local_20;
  
  puVar1 = auStack_40 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2df8 >> (3 - uVar2) * 8;
  auStack_40 = (undefined1  [4])DAT_800f2df8;
  puVar1 = auStack_3c + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2dfc >> (3 - uVar2) * 8;
  auStack_3c = (undefined1  [4])DAT_800f2dfc;
  local_38 = DAT_800f2e00;
  local_37 = DAT_800f2e01;
  local_36 = DAT_800f2e02;
  puVar1 = auStack_30 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e04 >> (3 - uVar2) * 8;
  auStack_30 = (undefined1  [4])DAT_800f2e04;
  puVar1 = auStack_2c + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800f2e08 >> (3 - uVar2) * 8;
  auStack_2c = (undefined1  [4])DAT_800f2e08;
  local_28 = DAT_800f2e0c;
  FUN_80178988(auStack_40,&DAT_80020000);
  local_20.x = 0x100;
  local_20.y = 0x180;
  local_20.w = 0x100;
  local_20.h = 0x80;
  LoadImage(&local_20,(u_long *)&DAT_80020000);
  local_20.x = 0x300;
  local_20.y = 0x100;
  local_20.w = 0x100;
  local_20.h = 0x100;
  LoadImage(&local_20,(u_long *)&DAT_80030000);
  DrawSync(0);
  FUN_80178988(auStack_30,&DAT_80020000);
  local_20.x = 0x100;
  local_20.y = 0x100;
  local_20.w = 0x100;
  local_20.h = 0x80;
  LoadImage(&local_20,(u_long *)&DAT_80020000);
  local_20.x = 0x200;
  local_20.y = 0xc0;
  local_20.h = 0x40;
  LoadImage(&local_20,(u_long *)&DAT_80030000);
  DrawSync(0);
  return;
}



