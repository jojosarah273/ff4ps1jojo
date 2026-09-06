
void FUN_8010b6ec(void)

{
  undefined1 uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined2 local_28;
  
  iVar4 = FUN_800f3c3c(0);
  pcVar5 = (char *)FUN_800f3b04(0x8fe);
  iVar6 = FUN_800f3b04(0xedc);
  iVar7 = FUN_800f3b9c(0x7f5c71,0);
  FUN_800f6564(0x8fe);
  iVar8 = FUN_800f6434(0x202);
  if (iVar8 != 0) {
    *(undefined1 *)(iVar4 + 0xae) = 0;
    *DAT_8019ed54 = 0;
    *(char *)(iVar4 + 0xaf) = *DAT_8019ed5c;
    *(char *)(iVar4 + 0xb0) = DAT_8019ed5c[1];
    do {
      *DAT_8019ed5c = *(char *)(iVar4 + 0xaf);
      DAT_8019ed5c[1] = *(char *)(iVar4 + 0xb0);
      if ((*(char *)(iVar4 + 0xb1) == '\0') || (pcVar5[*DAT_8019ed54 + 10] != '\0')) {
        uVar2 = *DAT_8019ed54;
        if ((pcVar5[uVar2 + 4] & 0x7fU) != 0) {
          if (((pcVar5[uVar2 + 1] & 0x40U) != 0) || ((pcVar5[uVar2 + 1] & 0x3fU) != 0))
          goto LAB_8010bf70;
          pcVar5[uVar2 + 2] = '\0';
          *DAT_8019ed40 = *(byte *)(iVar4 + 0xee);
          if ((*DAT_8019ed40 != 0) && ((*DAT_8019ed40 & 0x7f) == *(byte *)(iVar4 + 0xae))) {
            *(undefined1 *)(iVar4 + 0xee) = 0;
            pcVar5[*DAT_8019ed54 + 2] = '\x01';
          }
          *(char *)(iVar4 + 0xc) = pcVar5[*DAT_8019ed54 + 6];
          *(char *)(iVar4 + 0xe) = pcVar5[*DAT_8019ed54 + 8];
          FUN_8010c1ac();
          *(byte *)(iVar4 + 6) = *DAT_8019ed40;
          pcVar5[*DAT_8019ed54 + 4] = pcVar5[*DAT_8019ed54 + 4] & 0x7f;
          FUN_8010d9d4();
          if ((char)*DAT_8019ed40 < '\0') goto LAB_8010bbcc;
          *(char *)(iVar4 + 0xc) = pcVar5[*DAT_8019ed54 + 6];
          *(char *)(iVar4 + 0xe) = pcVar5[*DAT_8019ed54 + 8];
          if ((pcVar5[*DAT_8019ed54 + 4] & 1U) == 0) {
            FUN_8010d9d4();
            if ((*DAT_8019ed40 & 1) == 0) {
              *(char *)(iVar4 + 0xe) = *(char *)(iVar4 + 0xe) + -1;
              FUN_8010c1ac();
              if ((*DAT_8019ed40 == *(byte *)(iVar4 + 6)) && (FUN_8010d34c(), *DAT_8019ed40 == 0)) {
                uVar9 = (uint)*DAT_8019ed54;
                cVar3 = '\x01';
                goto LAB_8010bbc4;
              }
            }
            else {
              *(char *)(iVar4 + 0xe) = *(char *)(iVar4 + 0xe) + '\x01';
              FUN_8010c1ac();
              if ((*DAT_8019ed40 == *(byte *)(iVar4 + 6)) && (FUN_8010d34c(), *DAT_8019ed40 == 0)) {
                uVar9 = (uint)*DAT_8019ed54;
                cVar3 = '\x03';
                goto LAB_8010bbc4;
              }
            }
          }
          else {
            FUN_8010d9d4();
            if ((*DAT_8019ed40 & 1) == 0) {
              *(char *)(iVar4 + 0xc) = *(char *)(iVar4 + 0xc) + '\x01';
              FUN_8010c1ac();
              if ((*DAT_8019ed40 == *(byte *)(iVar4 + 6)) && (FUN_8010d34c(), *DAT_8019ed40 == 0)) {
                uVar9 = (uint)*DAT_8019ed54;
                cVar3 = '\x02';
LAB_8010bbc4:
                pcVar5[uVar9 + 4] = cVar3;
              }
            }
            else {
              *(char *)(iVar4 + 0xc) = *(char *)(iVar4 + 0xc) + -1;
              FUN_8010c1ac();
              if ((*DAT_8019ed40 == *(byte *)(iVar4 + 6)) && (FUN_8010d34c(), *DAT_8019ed40 == 0)) {
                uVar9 = (uint)*DAT_8019ed54;
                cVar3 = '\x04';
                goto LAB_8010bbc4;
              }
            }
          }
LAB_8010bbcc:
          *DAT_8019ed5c = *(char *)(iVar4 + 0xaf);
          DAT_8019ed5c[1] = *(char *)(iVar4 + 0xb0);
          *DAT_8019ed40 = pcVar5[*DAT_8019ed54 + 4] & 0x7f;
          *DAT_8019ed58 = *DAT_8019ed44;
          *(char *)(iVar4 + 0xc) = pcVar5[*DAT_8019ed54 + 6] + (&DAT_80198bc0)[*DAT_8019ed58];
          *(char *)(iVar4 + 0xe) = pcVar5[*DAT_8019ed54 + 8] + (&DAT_80198bc8)[*DAT_8019ed58];
          FUN_8010c1ac();
          if ((*DAT_8019ed40 != *(byte *)(iVar4 + 6)) || (FUN_8010d34c(), *DAT_8019ed40 != 0)) {
            *DAT_8019ed40 = (pcVar5[*DAT_8019ed54 + 4] + 1U & 3) + 1;
            *DAT_8019ed58 = *DAT_8019ed44;
            *(char *)(iVar4 + 0xc) = pcVar5[*DAT_8019ed54 + 6] + (&DAT_80198bc0)[*DAT_8019ed58];
            *(char *)(iVar4 + 0xe) = pcVar5[*DAT_8019ed54 + 8] + (&DAT_80198bc8)[*DAT_8019ed58];
            FUN_8010c1ac();
            if ((*DAT_8019ed40 != *(byte *)(iVar4 + 6)) || (FUN_8010d34c(), *DAT_8019ed40 != 0)) {
              pcVar5[*DAT_8019ed54 + 4] = pcVar5[*DAT_8019ed54 + 4] | 0x80;
              goto LAB_8010bf70;
            }
            pcVar5[*DAT_8019ed54 + 4] = (pcVar5[*DAT_8019ed54 + 4] + 1U & 3) + 1;
          }
        }
        if (pcVar5[*DAT_8019ed54 + 0xd] != '\0') {
          *(char *)(iVar4 + 0xc) = pcVar5[*DAT_8019ed54 + 6];
          *(char *)(iVar4 + 0xe) = pcVar5[*DAT_8019ed54 + 8];
          FUN_8010d2a0();
          *DAT_8019ed40 = pcVar5[*DAT_8019ed54 + 4] & 0x7f;
          *DAT_8019ed58 = *DAT_8019ed44;
          *(char *)(iVar4 + 0xc) = pcVar5[*DAT_8019ed54 + 6] + (&DAT_80198bc0)[*DAT_8019ed58];
          *(char *)(iVar4 + 0xe) = pcVar5[*DAT_8019ed54 + 8] + (&DAT_80198bc8)[*DAT_8019ed58];
          FUN_8010d4ec();
        }
      }
LAB_8010bf70:
      *DAT_8019ed5c = *(char *)(iVar4 + 0xaf);
      DAT_8019ed5c[1] = *(char *)(iVar4 + 0xb0);
      *DAT_8019ed40 = pcVar5[*DAT_8019ed54 + 4];
      if (*DAT_8019ed40 != 0) {
        *DAT_8019ed40 = *DAT_8019ed40 - 1;
        pcVar5[*DAT_8019ed54 + 0xb] = *DAT_8019ed40;
      }
      cVar3 = pcVar5[*DAT_8019ed54 + 6];
      *(char *)(iVar4 + 0x3d) = cVar3;
      *(char *)(iVar4 + 0x3e) = pcVar5[*DAT_8019ed54 + 8];
      *DAT_8019ed5c = cVar3;
      DAT_8019ed5c[1] = *(char *)(iVar4 + 0x3e);
      uVar1 = *(undefined1 *)(iVar7 + (uint)*DAT_8019ed54);
      *(undefined1 *)(iVar4 + 0x3e) = 0;
      *(undefined1 *)(iVar4 + 0x3d) = uVar1;
      local_28 = CONCAT11(*(undefined1 *)(iVar4 + 0x3e),uVar1);
      local_28 = local_28 << 1;
      *(char *)(iVar4 + 0x3d) = (char)local_28;
      local_28._1_1_ = (undefined1)((ushort)local_28 >> 8);
      *(undefined1 *)(iVar4 + 0x3e) = local_28._1_1_;
      *DAT_8019ed5c = (char)local_28;
      DAT_8019ed5c[1] = *(char *)(iVar4 + 0x3e);
      *DAT_8019ed40 = *(byte *)(iVar6 + (uint)*DAT_8019ed54);
      *DAT_8019ed5c = *(char *)(iVar4 + 0xaf);
      DAT_8019ed5c[1] = *(char *)(iVar4 + 0xb0);
      pcVar5[*DAT_8019ed54 + 0xc] = *DAT_8019ed40 & 8;
      cVar3 = *(char *)(iVar4 + 0xae) + '\x01';
      *(char *)(iVar4 + 0xaf) = *(char *)(iVar4 + 0xaf) + '\x0f';
      *(char *)(iVar4 + 0xae) = cVar3;
    } while (cVar3 != *pcVar5);
  }
  return;
}



