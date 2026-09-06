
byte FUN_80177790(int param_1,uint param_2)

{
  byte bVar1;
  long a;
  int iVar2;
  int x;
  u_long *ot;
  u_long *ot_00;
  void *p;
  byte bVar3;
  RECT local_28;
  
  bVar1 = DAT_800d212c;
  bVar3 = DAT_800d212c & 0x1f;
  if (DAT_8019ed08 == '\0') {
    if ((DAT_800d2105 & 7) != 7) {
      return bVar3;
    }
    if ((DAT_800d212c & 1) == 0) {
      return bVar3;
    }
    if (param_2 == 0) {
      return bVar3;
    }
    if ((param_2 & 0x10000) == 0) {
      x = (int)(short)param_2;
      a = ratan2((int)DAT_8019ee5c._2_2_,x);
      iVar2 = rcos(a);
      if (x == 0) {
        trap(7);
      }
      if (((iVar2 / x & 0xfffffffU) == 0x10) && (DAT_8019ee28 = 0x100, (DAT_8019ee2c & 0x1000) != 0)
         ) {
        DAT_8019ee28 = 0x100;
        return bVar3;
      }
    }
  }
  else {
    DAT_8019ee28 = 0x100;
  }
  DAT_8019ee90 = 0x100;
  DAT_8019ee92 = 0;
  DAT_8019ee94 = 0x100;
  DAT_8019ee96 = 0x100;
  ClearImage((RECT *)&DAT_8019ee90,'\0','\0','\0');
  ot = (u_long *)(param_1 + 0x5c);
  ClearOTag(ot,2);
  FUN_80182af0(param_1);
  p = (void *)(param_1 + 100);
  iVar2 = 1;
  ot_00 = ot;
  do {
    AddPrim(ot_00,p);
    iVar2 = iVar2 + -1;
    ot_00 = ot_00 + 1;
    p = (void *)((int)p + 0xc);
  } while (-1 < iVar2);
  local_28.x = 0x100;
  local_28.y = 0;
  local_28.w = 0x100;
  local_28.h = 0xf0;
  SetDrawArea((DR_AREA *)(param_1 + 0x7c),&local_28);
  AddPrim(ot,(DR_AREA *)(param_1 + 0x7c));
  DrawOTag(ot);
  return bVar1 & 0x10;
}



