
void FUN_8017f644(int param_1)

{
  byte bVar1;
  DR_MODE *p;
  ushort *puVar2;
  DR_MODE *p_00;
  DR_MODE *p_01;
  DR_MODE *p_02;
  DR_MODE *p_03;
  DR_MODE *p_04;
  DR_MODE *p_05;
  DR_MODE *p_06;
  int local_3c;
  DR_MODE *local_34;
  DR_MODE *local_30;
  
  p_05 = (DR_MODE *)(param_1 + 600);
  p_04 = (DR_MODE *)(param_1 + 0x21c);
  p_03 = (DR_MODE *)(param_1 + 0x1ec);
  p_02 = (DR_MODE *)(param_1 + 0x1b0);
  p_01 = (DR_MODE *)(param_1 + 0x180);
  puVar2 = &DAT_801a0a20;
  p_00 = (DR_MODE *)(param_1 + 0x144);
  p = (DR_MODE *)(param_1 + 0x114);
  local_3c = 3;
  bVar1 = DAT_800d2131 & 0xf;
  p_06 = p_05;
  local_34 = (DR_MODE *)(param_1 + 0x2c4);
  local_30 = (DR_MODE *)(param_1 + 0x288);
  do {
    SetDrawMode(p,0,0,(uint)puVar2[4],(RECT *)0x0);
    SetDrawMode(p_00,0,0,(uint)*puVar2,(RECT *)0x0);
    SetDrawMode(p_01,0,0,(uint)puVar2[4],(RECT *)0x0);
    SetDrawMode(p_02,0,0,(uint)*puVar2,(RECT *)0x0);
    SetDrawMode(p_03,0,0,(uint)puVar2[-4],(RECT *)0x0);
    SetDrawMode(p_04,0,0,(uint)puVar2[-8],(RECT *)0x0);
    if (bVar1 == 0) {
      SetDrawMode(p_06,0,0,(uint)puVar2[-4],(RECT *)0x0);
    }
    else {
      SetDrawMode(p_05,0,0,puVar2[-4] & 0xff9f,(RECT *)0x0);
    }
    p_06 = p_06 + 1;
    p_05 = p_05 + 1;
    p_04 = p_04 + 1;
    p_03 = p_03 + 1;
    p_02 = p_02 + 1;
    p_01 = p_01 + 1;
    p_00 = p_00 + 1;
    p = p + 1;
    local_3c = local_3c + -1;
    SetDrawMode(local_30,0,0,(uint)puVar2[-8],(RECT *)0x0);
    SetDrawMode(local_34,0,0,(uint)*puVar2,(RECT *)0x0);
    puVar2 = puVar2 + 1;
    local_34 = local_34 + 1;
    local_30 = local_30 + 1;
  } while (-1 < local_3c);
  SetDrawMode((DR_MODE *)(param_1 + 0x174),0,0,(uint)DAT_8019ee10,(RECT *)0x0);
  SetDrawMode((DR_MODE *)(param_1 + 0x1e0),0,0,(uint)DAT_8019ee10,(RECT *)0x0);
  SetDrawMode((DR_MODE *)(param_1 + 0x24c),0,0,(uint)DAT_8019ee10,(RECT *)0x0);
  SetDrawMode((DR_MODE *)(param_1 + 0x2b8),0,0,(uint)DAT_8019ee10,(RECT *)0x0);
  SetDrawMode((DR_MODE *)(param_1 + 0x2f4),0,0,(uint)DAT_8019ee10,(RECT *)0x0);
  return;
}



