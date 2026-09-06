
void FUN_8017e794(int param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  DR_AREA *p;
  void *ot;
  RECT local_28;
  
  if (((DAT_8019ee70 < 0xf0) || (param_3 == 0)) && (*(char *)(param_2 + 0xd) != '\0')) {
    ot = (void *)(param_1 + 0x70 + (uint)*(byte *)(param_2 + 0xc) * 4);
    p = (DR_AREA *)(param_1 + 0x310 + DAT_8019edec * 0xc);
    DAT_8019edec = DAT_8019edec + (ushort)*(byte *)(param_2 + 0xd);
    if (0xf0 < (int)*(short *)(param_2 + 6) + (int)*(short *)(param_2 + 10)) {
      *(short *)(param_2 + 10) = 0xf0 - *(short *)(param_2 + 6);
    }
    local_28.x = *(short *)(param_2 + 4);
    if (*(short *)(param_2 + 4) < 0x100) {
      local_28.w = *(short *)(param_2 + 8);
      local_28.h = *(short *)(param_2 + 10);
      local_28.y = *(short *)(param_2 + 6) + DAT_8019ee40 * 0xf0;
    }
    else {
      local_28.x = 0x100;
      local_28.y = 0;
      local_28.w = 0x100;
      local_28.h = 0xf0;
    }
    SetDrawArea(p,&local_28);
    iVar2 = 0x10000;
    if (*(char *)(param_2 + 0xd) != '\0') {
      do {
        AddPrim(ot,p);
        ot = (void *)((int)ot + 4);
        iVar1 = iVar2 >> 0x10;
        p = p + 1;
        iVar2 = iVar2 + 0x10000;
      } while (iVar1 < (int)(uint)*(byte *)(param_2 + 0xd));
    }
    DAT_8019ee70 = param_3 + *(short *)(param_2 + 6);
  }
  return;
}



