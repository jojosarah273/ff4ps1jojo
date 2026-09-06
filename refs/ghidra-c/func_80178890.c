
void FUN_80178890(void)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_8019ffe8;
  iVar2 = 0x9f;
  do {
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 6) = 0x24;
    *(undefined1 *)((int)puVar1 + 0xd) = 1;
    puVar1[4] = 0x100;
    puVar1[5] = 0xf0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 7;
  } while (-1 < iVar2);
  DAT_801a0010 = 0x28;
  DAT_801a0002 = 0;
  DAT_8019fff4 = 0;
  DAT_8019fffa = 0x100;
  DAT_801a00a8 = 0x50;
  DAT_801a00b6 = 0x50;
  DAT_8019ee28 = 0;
  return;
}



