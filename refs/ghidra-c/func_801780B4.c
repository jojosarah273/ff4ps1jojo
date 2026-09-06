
void FUN_801780b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1 + 0x4370;
  iVar2 = param_1 + 0x1030;
  iVar3 = 0xd47;
  do {
    FUN_80197378(iVar1);
    *(undefined1 *)(iVar1 + 4) = 0x80;
    *(undefined1 *)(iVar1 + 5) = 0x80;
    *(undefined1 *)(iVar1 + 6) = 0x80;
    *(undefined2 *)(iVar1 + 0x10) = 8;
    *(undefined2 *)(iVar1 + 0x12) = 8;
    FUN_801972d8(iVar1,1);
    FUN_80197308(iVar1,1);
    *(undefined1 *)(iVar1 + 0xc) = 0;
    *(undefined1 *)(iVar1 + 0xd) = 0;
    iVar3 = iVar3 + -1;
    *(undefined2 *)(iVar1 + 0xe) = DAT_801dfd68;
    iVar1 = iVar1 + 0x14;
  } while (-1 < iVar3);
  iVar1 = 0;
  do {
    FUN_80197338(iVar2);
    *(undefined1 *)(iVar2 + 4) = 0x80;
    *(undefined1 *)(iVar2 + 5) = 0x80;
    *(undefined1 *)(iVar2 + 6) = 0x80;
    if (iVar1 == 0x147) {
      FUN_801972d8(iVar2,0);
      *(undefined1 *)(iVar2 + 0xc) = 0;
    }
    else {
      FUN_801972d8(iVar2,1);
      *(undefined1 *)(iVar2 + 0xc) = 0;
    }
    *(undefined1 *)(iVar2 + 0xd) = 0;
    *(undefined1 *)(iVar2 + 0x14) = 8;
    *(undefined1 *)(iVar2 + 0x15) = 0;
    *(undefined1 *)(iVar2 + 0x1c) = 0;
    *(undefined1 *)(iVar2 + 0x1d) = 8;
    *(undefined1 *)(iVar2 + 0x24) = 8;
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = iVar1 + 1;
    *(undefined2 *)(iVar2 + 0xe) = DAT_801dfd68;
    iVar2 = iVar2 + 0x28;
  } while (iVar1 < 0x148);
  FUN_80197398(param_1 + 0x300);
  *(undefined1 *)(param_1 + 0x304) = 0xfa;
  *(undefined1 *)(param_1 + 0x305) = 0xfa;
  *(undefined1 *)(param_1 + 0x306) = 0xfa;
  *(undefined2 *)(param_1 + 0x30c) = 0xff;
  *(undefined2 *)(param_1 + 0x30e) = 0xe0;
  return;
}



