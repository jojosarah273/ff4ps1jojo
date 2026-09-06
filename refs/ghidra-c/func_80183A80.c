
void FUN_80183a80(int param_1)

{
  short sVar1;
  u_short uVar2;
  void *ot;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar5 = 0;
  uVar6 = 0x10;
  ot = (void *)(param_1 + 0xb8);
  do {
    iVar3 = (0x148 - uVar6) * 0x28;
    iVar4 = iVar3 + param_1;
    *(undefined2 *)(iVar4 + 0x1038) = 0x3c;
    *(ushort *)(iVar4 + 0x1040) = uVar5 * -0xe + 0x78;
    sVar1 = uVar5 * 0x10 + 0x50;
    *(undefined2 *)(iVar4 + 0x103a) = 0x40;
    *(undefined2 *)(iVar4 + 0x1042) = 0x40;
    *(undefined2 *)(iVar4 + 0x1048) = 0x40;
    *(short *)(iVar4 + 0x104a) = sVar1;
    *(undefined2 *)(iVar4 + 0x1050) = 0x40;
    *(short *)(iVar4 + 0x1052) = sVar1;
    *(undefined1 *)(iVar4 + 0x103c) = 0;
    *(undefined1 *)(iVar4 + 0x103d) = 0;
    *(undefined1 *)(iVar4 + 0x1044) = 100;
    *(undefined1 *)(iVar4 + 0x1045) = 0;
    *(undefined1 *)(iVar4 + 0x104c) = 0;
                    /* Possible PsyQ macro: setSprt() */
    *(undefined1 *)(iVar4 + 0x104d) = 100;
    *(undefined1 *)(iVar4 + 0x1054) = 100;
                    /* Possible PsyQ macro: setSprt() */
    *(undefined1 *)(iVar4 + 0x1055) = 100;
    uVar2 = GetTPage(1,0,0x100,0);
    *(u_short *)(iVar4 + 0x1046) = uVar2;
    AddPrim((void *)(param_1 + 0xb8),(void *)(param_1 + iVar3 + 0x1030));
    uVar5 = uVar5 + 1 & 0xff;
    uVar6 = uVar6 - 1 & 0xff;
  } while (uVar5 < 4);
  uVar5 = 0;
  do {
    iVar3 = (0x148 - uVar6) * 0x28;
    iVar4 = iVar3 + param_1;
    *(undefined2 *)(iVar4 + 0x103a) = 0xc6;
    sVar1 = uVar5 * 0xe + 0x4e;
    *(undefined2 *)(iVar4 + 0x1038) = 0x40;
    *(undefined2 *)(iVar4 + 0x1040) = 0x40;
    *(ushort *)(iVar4 + 0x1042) = uVar5 * 0x10 + 0x80;
    *(short *)(iVar4 + 0x1048) = sVar1;
    *(undefined2 *)(iVar4 + 0x104a) = 0xc0;
    *(short *)(iVar4 + 0x1050) = sVar1;
    *(undefined2 *)(iVar4 + 0x1052) = 0xc0;
    *(undefined1 *)(iVar4 + 0x103c) = 0;
    *(undefined1 *)(iVar4 + 0x103d) = 0;
    *(undefined1 *)(iVar4 + 0x1044) = 100;
    *(undefined1 *)(iVar4 + 0x1045) = 0;
    *(undefined1 *)(iVar4 + 0x104c) = 0;
                    /* Possible PsyQ macro: setSprt() */
    *(undefined1 *)(iVar4 + 0x104d) = 100;
    *(undefined1 *)(iVar4 + 0x1054) = 100;
                    /* Possible PsyQ macro: setSprt() */
    *(undefined1 *)(iVar4 + 0x1055) = 100;
    uVar2 = GetTPage(1,0,0x100,0);
    *(u_short *)(iVar4 + 0x1046) = uVar2;
    AddPrim(ot,(void *)(param_1 + iVar3 + 0x1030));
    uVar5 = uVar5 + 1 & 0xff;
    uVar6 = uVar6 - 1 & 0xff;
  } while (uVar5 < 4);
  uVar5 = 0;
  do {
    iVar3 = (0x148 - uVar6) * 0x28;
    iVar4 = iVar3 + param_1;
    *(ushort *)(iVar4 + 0x1040) = uVar5 * 0xe + 0x78;
    sVar1 = uVar5 * 0x10 + 0x50;
    *(undefined2 *)(iVar4 + 0x1038) = 0xb0;
    *(undefined2 *)(iVar4 + 0x103a) = 0x40;
    *(undefined2 *)(iVar4 + 0x1042) = 0x40;
    *(undefined2 *)(iVar4 + 0x1048) = 0xb0;
    *(short *)(iVar4 + 0x104a) = sVar1;
    *(undefined2 *)(iVar4 + 0x1050) = 0xb0;
    *(short *)(iVar4 + 0x1052) = sVar1;
    *(undefined1 *)(iVar4 + 0x103c) = 0;
    *(undefined1 *)(iVar4 + 0x103d) = 0;
    *(undefined1 *)(iVar4 + 0x1044) = 100;
    *(undefined1 *)(iVar4 + 0x1045) = 0;
    *(undefined1 *)(iVar4 + 0x104c) = 0;
                    /* Possible PsyQ macro: setSprt() */
    *(undefined1 *)(iVar4 + 0x104d) = 100;
    *(undefined1 *)(iVar4 + 0x1054) = 100;
                    /* Possible PsyQ macro: setSprt() */
    *(undefined1 *)(iVar4 + 0x1055) = 100;
    uVar2 = GetTPage(1,0,0x100,0);
    *(u_short *)(iVar4 + 0x1046) = uVar2;
    AddPrim(ot,(void *)(param_1 + iVar3 + 0x1030));
    uVar5 = uVar5 + 1 & 0xff;
    uVar6 = uVar6 - 1 & 0xff;
  } while (uVar5 < 3);
  iVar3 = (0x148 - uVar6) * 0x28;
  iVar4 = iVar3 + param_1;
  *(undefined2 *)(iVar4 + 0x1038) = 200;
  *(undefined2 *)(iVar4 + 0x1040) = 0xa2;
  *(undefined2 *)(iVar4 + 0x104a) = 0xc0;
  *(undefined2 *)(iVar4 + 0x1052) = 0xc0;
  *(undefined2 *)(iVar4 + 0x103a) = 0x40;
  *(undefined2 *)(iVar4 + 0x1042) = 0x40;
  *(undefined2 *)(iVar4 + 0x1048) = 0xbe;
  *(undefined2 *)(iVar4 + 0x1050) = 0xbe;
  *(undefined1 *)(iVar4 + 0x103c) = 0;
  *(undefined1 *)(iVar4 + 0x103d) = 0;
  *(undefined1 *)(iVar4 + 0x1044) = 100;
  *(undefined1 *)(iVar4 + 0x1045) = 0;
  *(undefined1 *)(iVar4 + 0x104c) = 0;
                    /* Possible PsyQ macro: setSprt() */
  *(undefined1 *)(iVar4 + 0x104d) = 100;
  *(undefined1 *)(iVar4 + 0x1054) = 100;
                    /* Possible PsyQ macro: setSprt() */
  *(undefined1 *)(iVar4 + 0x1055) = 100;
  uVar2 = GetTPage(1,0,0x100,0);
  *(u_short *)(iVar4 + 0x1046) = uVar2;
  AddPrim(ot,(void *)(param_1 + iVar3 + 0x1030));
  uVar6 = uVar6 - 1 & 0xff;
  uVar5 = 0;
  do {
    iVar3 = (0x148 - uVar6) * 0x28;
    iVar4 = iVar3 + param_1;
    *(ushort *)(iVar4 + 0x1042) = uVar5 * 0x10 + 0x90;
    sVar1 = uVar5 * -0xe + 0x94;
    *(undefined2 *)(iVar4 + 0x1038) = 0xb0;
    *(undefined2 *)(iVar4 + 0x103a) = 0xc0;
    *(undefined2 *)(iVar4 + 0x1040) = 0xb0;
    *(short *)(iVar4 + 0x1048) = sVar1;
    *(undefined2 *)(iVar4 + 0x104a) = 0xc0;
    *(short *)(iVar4 + 0x1050) = sVar1;
    *(undefined2 *)(iVar4 + 0x1052) = 0xc0;
    *(undefined1 *)(iVar4 + 0x103c) = 0;
    *(undefined1 *)(iVar4 + 0x103d) = 0;
    *(undefined1 *)(iVar4 + 0x1044) = 100;
    *(undefined1 *)(iVar4 + 0x1045) = 0;
    *(undefined1 *)(iVar4 + 0x104c) = 0;
                    /* Possible PsyQ macro: setSprt() */
    *(undefined1 *)(iVar4 + 0x104d) = 100;
    *(undefined1 *)(iVar4 + 0x1054) = 100;
                    /* Possible PsyQ macro: setSprt() */
    *(undefined1 *)(iVar4 + 0x1055) = 100;
    uVar2 = GetTPage(1,0,0x100,0);
    *(u_short *)(iVar4 + 0x1046) = uVar2;
    AddPrim(ot,(void *)(param_1 + iVar3 + 0x1030));
    uVar5 = uVar5 + 1 & 0xff;
    uVar6 = uVar6 - 1 & 0xff;
  } while (uVar5 < 3);
  iVar3 = (0x148 - uVar6) * 0x28;
  iVar4 = iVar3 + param_1;
  *(undefined2 *)(iVar4 + 0x1038) = 200;
  *(undefined2 *)(iVar4 + 0x1040) = 0xbe;
  *(undefined2 *)(iVar4 + 0x1048) = 0xa2;
  *(undefined2 *)(iVar4 + 0x1050) = 0xa2;
  *(undefined2 *)(iVar4 + 0x103a) = 0xc0;
  *(undefined2 *)(iVar4 + 0x1042) = 0x40;
  *(undefined2 *)(iVar4 + 0x104a) = 0xc0;
  *(undefined2 *)(iVar4 + 0x1052) = 0xc0;
  *(undefined1 *)(iVar4 + 0x103c) = 0;
  *(undefined1 *)(iVar4 + 0x103d) = 0;
  *(undefined1 *)(iVar4 + 0x1044) = 100;
  *(undefined1 *)(iVar4 + 0x1045) = 0;
  *(undefined1 *)(iVar4 + 0x104c) = 0;
                    /* Possible PsyQ macro: setSprt() */
  *(undefined1 *)(iVar4 + 0x104d) = 100;
  *(undefined1 *)(iVar4 + 0x1054) = 100;
                    /* Possible PsyQ macro: setSprt() */
  *(undefined1 *)(iVar4 + 0x1055) = 100;
  uVar2 = GetTPage(1,0,0x100,0);
  *(u_short *)(iVar4 + 0x1046) = uVar2;
  AddPrim(ot,(void *)(param_1 + iVar3 + 0x1030));
  return;
}



