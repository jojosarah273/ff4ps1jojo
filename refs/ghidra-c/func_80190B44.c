
undefined4 CD_cw(byte param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (1 < DAT_8019b9f4) {
    printf("%s...\n",(&PTR_s_CdlSync_8019ba10)[param_1]);
  }
  if ((*(int *)(&DAT_8019bc30 + (uint)param_1 * 4) == 0) || (param_2 != (undefined1 *)0x0)) {
    CD_sync(0,0);
    if (param_1 == 2) {
      iVar7 = 0;
      puVar5 = param_2;
      do {
        (&DAT_8019ba04)[iVar7] = *puVar5;
        iVar7 = iVar7 + 1;
        puVar5 = param_2 + iVar7;
      } while (iVar7 < 4);
    }
    if (param_1 == 0xe) {
      DAT_8019ba08 = *param_2;
    }
    iVar7 = (uint)param_1 * 4;
    DAT_8019bcc8 = 0;
    if (*(int *)(&DAT_8019bb30 + iVar7) != 0) {
      DAT_8019bcc9 = 0;
    }
    *PTR_CDROM_REG0_8019bcb0 = 0;
    iVar8 = 0;
    puVar5 = param_2;
    if (0 < *(int *)(&DAT_8019bc30 + iVar7)) {
      do {
        *PTR_CDROM_REG2_8019bcc0 = *puVar5;
        iVar8 = iVar8 + 1;
        puVar5 = param_2 + iVar8;
      } while (iVar8 < *(int *)(&DAT_8019bc30 + iVar7));
    }
    DAT_8019ba09 = param_1;
    *PTR_CDROM_REG1_8019bcbc = param_1;
    uVar4 = 0;
    if (param_4 == 0) {
      iVar7 = VSync(-1);
      DAT_801f8f28 = iVar7 + 0x3c0;
      DAT_801f8f2c = 0;
      DAT_801f8f30 = "CD_cw";
      while (DAT_8019bcc8 == 0) {
        iVar7 = VSync(-1);
        if ((DAT_801f8f28 < iVar7) ||
           (iVar7 = DAT_801f8f2c + 1, bVar3 = 0x3c0000 < DAT_801f8f2c, DAT_801f8f2c = iVar7, bVar3))
        {
          FUN_80191620("CD timeout: ");
          printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_801f8f30,(&PTR_s_CdlSync_8019ba10)[DAT_8019ba09],
                 (&PTR_s_NoIntr_8019ba90)[DAT_8019bcc8],(&PTR_s_NoIntr_8019ba90)[DAT_8019bcc9]);
          CD_flush();
          uVar4 = BIOS_1_OBJ_D78();
          return uVar4;
        }
        iVar7 = CheckCallback();
        if (iVar7 != 0) {
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
      }
      puVar5 = &DAT_801f8f10;
      iVar7 = 7;
      if (param_3 != (undefined1 *)0x0) {
        do {
          uVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          iVar7 = iVar7 + -1;
          *param_3 = uVar2;
          param_3 = param_3 + 1;
        } while (iVar7 != -1);
      }
      uVar4 = 0;
      if (DAT_8019bcc8 == 5) {
        uVar4 = 0xffffffff;
      }
    }
  }
  else {
    uVar4 = 0xfffffffe;
    if (0 < DAT_8019b9f4) {
      printf("%s: no param\n",(&PTR_s_CdlSync_8019ba10)[param_1]);
      uVar4 = BIOS_1_OBJ_E90();
      return uVar4;
    }
  }
  return uVar4;
}



