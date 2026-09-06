
void FUN_8017e740(int param_1)

{
  void *ot;
  void *p;
  int iVar1;
  
  p = (void *)(param_1 + 0x114);
  ot = (void *)(param_1 + 0x70);
  iVar1 = 0x28;
  do {
    AddPrim(ot,p);
    iVar1 = iVar1 + -1;
    ot = (void *)((int)ot + 4);
    p = (void *)((int)p + 0xc);
  } while (-1 < iVar1);
  return;
}



