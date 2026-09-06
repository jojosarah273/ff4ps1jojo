
int FUN_80189190(void)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  u_char com;
  undefined4 uVar7;
  int iVar8;
  undefined1 auStack_20 [8];
  
  if (DAT_8019ed28 == 0) {
    iVar4 = 0;
  }
  else {
    do {
      iVar4 = DAT_8019ef88;
      bVar1 = false;
      psVar6 = (short *)(DAT_8019ef88 * 0x10 + DAT_8019ed28);
      sVar3 = *psVar6;
      if (sVar3 == 6) {
        if (DAT_8019ed2c == 0) {
          com = '\x15';
          goto LAB_801894c4;
        }
LAB_801894e8:
        DAT_8019ed2c = FUN_80189590();
        iVar8 = DAT_8019ef88;
      }
      else {
        iVar8 = DAT_8019ef88;
        if (6 < sVar3) {
          if (sVar3 == 10) {
            if (DAT_8019ed2c == 0) {
              com = '\b';
              goto LAB_801894c4;
            }
          }
          else if (sVar3 < 0xb) {
            if (sVar3 == 8) {
              if (DAT_8019ed2c == 0) {
                com = '\x03';
                goto LAB_801894c4;
              }
            }
            else if (sVar3 < 9) {
              if (DAT_8019ed2c == 0) {
                com = '\x16';
LAB_801894c4:
                psVar6 = (short *)0x0;
                goto LAB_801894c8;
              }
            }
            else if (DAT_8019ed2c == 0) {
              com = '\t';
              goto LAB_801894c4;
            }
          }
          else if (sVar3 == 0xc) {
            psVar6 = psVar6 + 4;
            if (DAT_8019ed2c == 0) {
              com = '\r';
              goto LAB_801894c8;
            }
          }
          else {
            if (0xb < sVar3) {
              if (sVar3 == 0x200) {
                iVar5 = *(int *)(psVar6 + 2);
                *(int *)(psVar6 + 2) = iVar5 + -1;
                iVar8 = DAT_8019ef88;
                if (iVar5 + -1 == -1) {
                  bVar2 = iVar4 != DAT_8019ef40;
                  *psVar6 = -1;
                  iVar8 = 0;
                  if (bVar2) {
                    iVar8 = iVar4 + 1;
                  }
                }
              }
              else if (sVar3 == 0x201) {
                FUN_80188250(*(undefined4 *)(psVar6 + 6));
                goto LAB_80189544;
              }
              goto LAB_80189568;
            }
            if (DAT_8019ed2c == 0) {
              com = '\x1b';
              goto LAB_801894c4;
            }
          }
          goto LAB_801894e8;
        }
        if (sVar3 == 2) {
          if (DAT_8019ed2c == 0) {
            iVar4 = FUN_801917f8(1,0);
            com = '\x06';
            iVar8 = DAT_8019ef88;
            if (iVar4 == 2) {
              iVar4 = DAT_8019ef88 * 0x10 + DAT_8019ed28;
              DAT_8019ef48 = *(int *)(iVar4 + 4);
              DAT_8019ef4c = *(undefined4 *)(iVar4 + 0xc);
              psVar6 = (short *)(iVar4 + 8);
              goto LAB_801894c8;
            }
          }
          else if (DAT_8019ed2c == 1) {
            iVar8 = 0;
            if (DAT_8019ef48 == 0) {
              bVar2 = DAT_8019ef88 != DAT_8019ef40;
              *psVar6 = -1;
              if (bVar2) {
                iVar8 = DAT_8019ef88 + 1;
              }
              DAT_8019ed2c = 0;
            }
            else {
              iVar8 = DAT_8019ef88;
              if (DAT_8019ef48 == -1) {
                DAT_8019ed2c = 0;
              }
            }
          }
        }
        else if (sVar3 < 3) {
          if (sVar3 == 0) {
            iVar4 = FUN_801917f8(1,auStack_20);
            if (iVar4 == 2) {
              iVar8 = 0;
              bVar1 = DAT_8019ef88 != DAT_8019ef40;
              *(undefined2 *)(DAT_8019ef88 * 0x10 + DAT_8019ed28) = 0xffff;
              if (bVar1) {
                iVar8 = DAT_8019ef88 + 1;
              }
              DAT_8019ed2c = 0;
              bVar1 = true;
            }
            else {
              uVar7 = 0;
joined_r0x801892d8:
              iVar8 = DAT_8019ef88;
              if (iVar4 == 5) {
                FUN_80189678(uVar7,auStack_20);
                iVar8 = DAT_8019ef88;
              }
            }
          }
          else if (0 < sVar3) {
            iVar4 = FUN_80191818(1,auStack_20);
            if (iVar4 != 2) {
              uVar7 = 1;
              goto joined_r0x801892d8;
            }
LAB_80189544:
            bVar2 = DAT_8019ef88 != DAT_8019ef40;
            *(undefined2 *)(DAT_8019ef88 * 0x10 + DAT_8019ed28) = 0xffff;
            iVar8 = 0;
            if (bVar2) {
              iVar8 = DAT_8019ef88 + 1;
            }
          }
        }
        else {
          if (sVar3 == 4) {
            psVar6 = psVar6 + 2;
            if (DAT_8019ed2c != 0) goto LAB_801894e8;
            com = '\x0e';
          }
          else {
            if (sVar3 < 5) {
              iVar4 = CdControl('\x02',(u_char *)(DAT_8019ed28 + DAT_8019ef88 * 0x10 + 8),
                                (u_char *)0x0);
              iVar8 = DAT_8019ef88;
              if (iVar4 == 1) goto LAB_80189544;
              goto LAB_80189568;
            }
            psVar6 = psVar6 + 6;
            if (DAT_8019ed2c != 0) goto LAB_801894e8;
            com = '\x10';
          }
LAB_801894c8:
          CdControlF(com,(u_char *)psVar6);
          DAT_8019ed2c = DAT_8019ed2c + 1;
          iVar8 = DAT_8019ef88;
        }
      }
LAB_80189568:
      DAT_8019ef88 = iVar8;
      iVar4 = DAT_8019ef88;
    } while (bVar1);
  }
  return iVar4;
}



