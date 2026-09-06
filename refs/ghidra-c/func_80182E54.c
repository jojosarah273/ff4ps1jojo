
int FUN_80182e54(int param_1,uint param_2,void *param_3,void *param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  u_short uVar5;
  undefined1 uVar6;
  char cVar7;
  
  sVar3 = (short)param_2;
  if ((param_2 & 8) == 0) {
    sVar2 = -sVar3 + 8;
    *(short *)((int)param_3 + 8) = 0x80 - *(short *)(param_1 + 0x1c) * sVar2;
    *(undefined2 *)((int)param_3 + 10) = *(undefined2 *)(param_1 + 0x18);
    sVar3 = -sVar3 + 7;
    *(short *)((int)param_3 + 0x10) = 0x80 - *(short *)(param_1 + 0x1c) * sVar3;
    *(undefined2 *)((int)param_3 + 0x12) = *(undefined2 *)(param_1 + 0x18);
    *(short *)((int)param_3 + 0x18) = 0x80 - *(short *)(param_1 + 0x1e) * sVar2;
    *(undefined2 *)((int)param_3 + 0x1a) = *(undefined2 *)(param_1 + 0x1a);
    *(short *)((int)param_3 + 0x20) = 0x80 - *(short *)(param_1 + 0x1e) * sVar3;
    *(undefined2 *)((int)param_3 + 0x22) = *(undefined2 *)(param_1 + 0x1a);
  }
  else {
    *(short *)((int)param_3 + 8) = *(short *)(param_1 + 0x1c) * (sVar3 + -8) + 0x80;
    *(undefined2 *)((int)param_3 + 10) = *(undefined2 *)(param_1 + 0x18);
    *(short *)((int)param_3 + 0x10) = *(short *)(param_1 + 0x1c) * (sVar3 + -7) + 0x80;
    *(undefined2 *)((int)param_3 + 0x12) = *(undefined2 *)(param_1 + 0x18);
    *(short *)((int)param_3 + 0x18) = *(short *)(param_1 + 0x1e) * (sVar3 + -8) + 0x80;
    *(undefined2 *)((int)param_3 + 0x1a) = *(undefined2 *)(param_1 + 0x1a);
    *(short *)((int)param_3 + 0x20) = *(short *)(param_1 + 0x1e) * (sVar3 + -7) + 0x80;
    *(undefined2 *)((int)param_3 + 0x22) = *(undefined2 *)(param_1 + 0x1a);
  }
  cVar4 = (char)param_2 * '\x10';
  if (param_2 == 0xf) {
    cVar4 = -0x10;
    *(undefined1 *)((int)param_3 + 0xc) = 0xf0;
    uVar6 = *(undefined1 *)(param_1 + 0x20);
    cVar7 = -2;
  }
  else {
    *(char *)((int)param_3 + 0xc) = cVar4;
    uVar6 = *(undefined1 *)(param_1 + 0x20);
    cVar7 = cVar4 + '\x10';
  }
  *(char *)((int)param_3 + 0x14) = cVar7;
  *(undefined1 *)((int)param_3 + 0xd) = uVar6;
  uVar6 = *(undefined1 *)(param_1 + 0x20);
  *(char *)((int)param_3 + 0x1c) = cVar4;
  *(undefined1 *)((int)param_3 + 0x15) = uVar6;
  cVar4 = *(char *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x22);
  *(char *)((int)param_3 + 0x24) = cVar7;
  *(char *)((int)param_3 + 0x1d) = cVar4 + cVar1;
  *(char *)((int)param_3 + 0x25) = *(char *)(param_1 + 0x20) + *(char *)(param_1 + 0x22);
  uVar5 = GetTPage(1,0,0x100,0);
  *(u_short *)((int)param_3 + 0x16) = uVar5;
  AddPrim(param_4,param_3);
  return (int)param_3 + 0x28;
}



