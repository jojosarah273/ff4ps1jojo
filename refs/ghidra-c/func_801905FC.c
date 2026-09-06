
undefined4 CD_sync(int param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  iVar4 = VSync(-1);
  DAT_801f8f28 = iVar4 + 0x3c0;
  DAT_801f8f2c = 0;
  DAT_801f8f30 = "CD_sync";
  while( true ) {
    iVar4 = VSync(-1);
    if ((DAT_801f8f28 < iVar4) ||
       (iVar4 = DAT_801f8f2c + 1, bVar3 = 0x3c0000 < DAT_801f8f2c, DAT_801f8f2c = iVar4, bVar3)) {
      FUN_80191620("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_801f8f30,(&PTR_s_CdlSync_8019ba10)[DAT_8019ba09],
             (&PTR_s_NoIntr_8019ba90)[DAT_8019bcc8],(&PTR_s_NoIntr_8019ba90)[DAT_8019bcc9]);
      CD_flush();
      uVar5 = BIOS_1_OBJ_69C();
      return uVar5;
    }
    iVar4 = CheckCallback();
    if (iVar4 != 0) {
      bVar1 = *PTR_CDROM_REG0_8019bcb0;
      while( true ) {
        uVar6 = BIOS_1_OBJ_0();
        if (uVar6 == 0) break;
        if (((uVar6 & 4) != 0) && (DAT_8019b9f0 != (code *)0x0)) {
          (*DAT_8019b9f0)(DAT_8019bcc9,&DAT_801f8f18);
        }
        if (((uVar6 & 2) != 0) && (DAT_8019b9ec != (code *)0x0)) {
          (*DAT_8019b9ec)(DAT_8019bcc8,&DAT_801f8f10);
        }
      }
      *PTR_CDROM_REG0_8019bcb0 = bVar1 & 3;
    }
    if ((DAT_8019bcc8 == 2) || (DAT_8019bcc8 == 5)) break;
    if (param_1 != 0) {
      return 0;
    }
  }
  DAT_8019bcc8 = 2;
  puVar7 = &DAT_801f8f10;
  iVar4 = 7;
  if (param_2 != (undefined1 *)0x0) {
    do {
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
      *param_2 = uVar2;
      param_2 = param_2 + 1;
    } while (iVar4 != -1);
  }
  uVar5 = BIOS_1_OBJ_7B4();
  return uVar5;
}



