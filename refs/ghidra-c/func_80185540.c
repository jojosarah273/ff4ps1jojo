
void FUN_80185540(int param_1,short param_2,short param_3,short param_4,short param_5,uint param_6,
                 uint param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  u_short uVar4;
  char cVar5;
  
  FUN_80197338();
  FUN_80197308(param_1,1);
  *(undefined1 *)(param_1 + 4) = 0x80;
  *(undefined1 *)(param_1 + 5) = 0x80;
  *(undefined1 *)(param_1 + 6) = 0x80;
  *(short *)(param_1 + 8) = param_4;
  *(short *)(param_1 + 0x10) = param_4 + param_2;
  *(short *)(param_1 + 0x18) = param_4;
  *(short *)(param_1 + 0x20) = param_4 + param_2;
  cVar1 = (char)param_6;
  cVar5 = cVar1 + (char)param_2;
  cVar2 = (char)param_7;
  cVar3 = cVar2 + (char)param_3;
  *(short *)(param_1 + 10) = param_5;
  *(short *)(param_1 + 0x12) = param_5;
  *(char *)(param_1 + 0xc) = cVar1;
  *(char *)(param_1 + 0xd) = cVar2;
  *(char *)(param_1 + 0x14) = cVar5;
  *(char *)(param_1 + 0x15) = cVar2;
  *(char *)(param_1 + 0x1c) = cVar1;
  *(char *)(param_1 + 0x1d) = cVar3;
  *(char *)(param_1 + 0x24) = cVar5;
  *(char *)(param_1 + 0x25) = cVar3;
  *(short *)(param_1 + 0x1a) = param_5 + param_3;
  *(short *)(param_1 + 0x22) = param_5 + param_3;
  uVar4 = GetTPage(2,0,param_6 & 0xffffff00,param_7 & 0xffffff00);
  *(u_short *)(param_1 + 0x16) = uVar4;
  return;
}



