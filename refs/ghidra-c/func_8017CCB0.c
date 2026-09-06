
void FUN_8017ccb0(void *param_1,char param_2,char param_3,short param_4,short param_5,
                 undefined4 *param_6,ushort param_7,undefined2 param_8)

{
  *(undefined2 *)((int)param_1 + 0x10) = 8;
  *(undefined2 *)((int)param_1 + 0x12) = 8;
  *(char *)((int)param_1 + 0xc) = param_2;
  *(char *)((int)param_1 + 0xd) = param_3;
  *(short *)((int)param_1 + 8) = param_4;
  *(short *)((int)param_1 + 10) = param_5;
  if ((param_7 & 0x2000) == 0) {
    param_6[2] = *param_6;
  }
  else {
    param_6[2] = param_6[1];
  }
  AddPrim((void *)param_6[2],param_1);
  *(undefined2 *)((int)param_1 + 0x24) = 8;
  *(undefined2 *)((int)param_1 + 0x26) = 8;
  *(char *)((int)param_1 + 0x20) = param_2 + '\b';
  *(char *)((int)param_1 + 0x21) = param_3;
  *(short *)((int)param_1 + 0x1c) = param_4 + 8;
  *(short *)((int)param_1 + 0x1e) = param_5;
  if ((param_7 & 0x1000) == 0) {
    param_6[2] = *param_6;
  }
  else {
    param_6[2] = param_6[1];
  }
  *(undefined2 *)((int)param_1 + 0x22) = param_8;
  AddPrim((void *)param_6[2],(void *)((int)param_1 + 0x14));
  *(undefined2 *)((int)param_1 + 0x38) = 8;
  *(undefined2 *)((int)param_1 + 0x3a) = 8;
  *(short *)((int)param_1 + 0x30) = param_4;
  *(char *)((int)param_1 + 0x34) = param_2;
  *(char *)((int)param_1 + 0x35) = param_3 + '\b';
  *(short *)((int)param_1 + 0x32) = param_5 + 8;
  if ((param_7 & 0x800) == 0) {
    param_6[2] = *param_6;
  }
  else {
    param_6[2] = param_6[1];
  }
  *(undefined2 *)((int)param_1 + 0x36) = param_8;
  AddPrim((void *)param_6[2],(void *)((int)param_1 + 0x28));
  *(undefined2 *)((int)param_1 + 0x4c) = 8;
  *(undefined2 *)((int)param_1 + 0x4e) = 8;
  *(char *)((int)param_1 + 0x48) = param_2 + '\b';
  *(char *)((int)param_1 + 0x49) = param_3 + '\b';
  *(short *)((int)param_1 + 0x46) = param_5 + 8;
  *(short *)((int)param_1 + 0x44) = param_4 + 8;
  if ((param_7 & 0x400) == 0) {
    param_6[2] = *param_6;
  }
  else {
    param_6[2] = param_6[1];
  }
  *(undefined2 *)((int)param_1 + 0x4a) = param_8;
  AddPrim((void *)param_6[2],(void *)((int)param_1 + 0x3c));
  return;
}



