
void FUN_80169290(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RECT local_a8;
  RECT local_a0;
  u_long auStack_98 [8];
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_65;
  undefined1 local_5e;
  u_long auStack_58 [12];
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_1e;
  undefined1 local_1d;
  
  memset((uchar *)auStack_98,'\0',0x40);
  local_76 = 1;
  local_75 = 1;
  local_6e = 1;
  local_6d = 1;
  local_65 = 1;
  local_5e = 1;
  memset((uchar *)auStack_58,'\0',0x40);
  local_26 = 1;
  local_25 = 1;
  local_1e = 1;
  local_1d = 1;
  FUN_800f8fb8(0x9a);
  FUN_8017f8f8(&DAT_801cfd68,0x200,0,0);
  DrawSync(0);
  VSync(0);
  SetDispMask(0);
  local_a0.x = 0x22c;
  local_a0.y = 0x20;
  local_a0.w = 4;
  local_a0.h = 8;
  LoadImage(&local_a0,auStack_98);
  DrawSync(0);
  local_a0.x = 0x27c;
  local_a0.y = 0x18;
  local_a0.w = 4;
  local_a0.h = 8;
  LoadImage(&local_a0,auStack_58);
  DrawSync(0);
  FUN_8017f8f8(&DAT_801d7d68,0x300,0,0xffffffff);
  DAT_8019ee2c = 0;
  if (DAT_800d063d == 'r') {
    local_a8.x = 0x240;
    local_a8.y = 0x38;
    local_a8.w = 0x20;
    local_a8.h = 8;
    LoadImage(&local_a8,(u_long *)&DAT_8019a16c);
    iVar1 = 0;
    iVar3 = 0x10000;
    do {
      iVar2 = iVar3 >> 0x10;
      (&DAT_800d4523)[iVar1] = (&DAT_80016c00)[iVar1];
      iVar1 = iVar2;
      iVar3 = iVar3 + 0x10000;
    } while (iVar2 < 0x20);
  }
  do {
    do {
      FUN_8016bb44();
      FUN_800f62bc(0x9a);
      FUN_800f6630(0x9a);
      FUN_800f4248(0xf);
      iVar1 = FUN_800f4120(0x202);
    } while (iVar1 != 0);
    FUN_800f6240(0x3303);
    FUN_800f6564(0x3303);
    FUN_800f5574(0xf);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



