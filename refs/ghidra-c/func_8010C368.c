
void FUN_8010c368(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar3 = FUN_800f3c3c(0);
  pcVar4 = (char *)FUN_800f3b04(0x8fe);
  if (*pcVar4 != '\0') {
    *(undefined1 *)(iVar3 + 0xae) = 0;
    *(undefined1 *)(iVar3 + 0xaf) = 0;
    *(undefined1 *)(iVar3 + 0xb0) = 0;
    do {
      *DAT_8019ed5c = *(undefined1 *)(iVar3 + 0xaf);
      DAT_8019ed5c[1] = *(undefined1 *)(iVar3 + 0xb0);
      if (*(char *)(iVar3 + 0xb1) == '\0') {
        if ((pcVar4[*DAT_8019ed54 + 4] & 0x80U) == 0) {
          *DAT_8019ed5c = *(undefined1 *)(iVar3 + 0xaf);
          DAT_8019ed5c[1] = *(undefined1 *)(iVar3 + 0xb0);
          if ((pcVar4[*DAT_8019ed54 + 1] & 0x40U) == 0) goto LAB_8010c494;
        }
LAB_8010c8e8:
        if (pcVar4[*DAT_8019ed54 + 2] == '\0') {
          bVar1 = (byte)pcVar4[*DAT_8019ed54 + 3] >> 6;
        }
        else {
          bVar1 = 2;
        }
        *DAT_8019ed40 = bVar1;
        *DAT_8019ed58 = *DAT_8019ed44;
        pcVar4[*DAT_8019ed54 + 1] = pcVar4[*DAT_8019ed54 + 1] + (&DAT_80198bd4)[*DAT_8019ed58];
      }
      else if (pcVar4[*DAT_8019ed54 + 10] != '\0') {
LAB_8010c494:
        if (((pcVar4[*DAT_8019ed54 + 4] & 0x7fU) != 0) && ((pcVar4[*DAT_8019ed54 + 1] & 3U) == 0)) {
          *DAT_8019ed5c = *(undefined1 *)(iVar3 + 0xaf);
          DAT_8019ed5c[1] = *(undefined1 *)(iVar3 + 0xb0);
          if (pcVar4[*DAT_8019ed54 + 2] == '\0') {
            bVar1 = (byte)pcVar4[*DAT_8019ed54 + 3] >> 6;
          }
          else {
            bVar1 = 2;
          }
          *DAT_8019ed40 = bVar1;
          *DAT_8019ed58 = *DAT_8019ed44;
          *DAT_8019ed40 = pcVar4[*DAT_8019ed54 + 4];
          *DAT_8019ed40 = *DAT_8019ed40 - 1;
          if (*DAT_8019ed40 == 0) {
            *DAT_8019ed40 = pcVar4[*DAT_8019ed54 + 7] - (&DAT_80198bd0)[*DAT_8019ed58];
            FUN_800f9200();
            *DAT_8019ed40 = *DAT_8019ed40 & 0xf;
            pcVar4[*DAT_8019ed54 + 7] = *DAT_8019ed40;
            FUN_800f93dc();
            if ((*DAT_8019ed40 & 0x80) != 0) {
              pcVar4[*DAT_8019ed54 + 8] = pcVar4[*DAT_8019ed54 + 8] + -1;
            }
          }
          else {
            *DAT_8019ed40 = *DAT_8019ed40 - 1;
            if (*DAT_8019ed40 == 0) {
              *DAT_8019ed40 = pcVar4[*DAT_8019ed54 + 5] + (&DAT_80198bd0)[*DAT_8019ed58] & 0xf;
              pcVar4[*DAT_8019ed54 + 5] = *DAT_8019ed40;
              if (*DAT_8019ed40 == 0) {
                pcVar5 = pcVar4 + *DAT_8019ed54;
                cVar2 = pcVar5[6] + '\x01';
LAB_8010c8e4:
                pcVar5[6] = cVar2;
              }
            }
            else {
              *DAT_8019ed40 = *DAT_8019ed40 - 1;
              if (*DAT_8019ed40 == 0) {
                *DAT_8019ed40 = pcVar4[*DAT_8019ed54 + 7] + (&DAT_80198bd0)[*DAT_8019ed58] & 0xf;
                pcVar4[*DAT_8019ed54 + 7] = *DAT_8019ed40;
                if (*DAT_8019ed40 == 0) {
                  pcVar4[*DAT_8019ed54 + 8] = pcVar4[*DAT_8019ed54 + 8] + '\x01';
                }
              }
              else {
                *DAT_8019ed40 = pcVar4[*DAT_8019ed54 + 5] - (&DAT_80198bd0)[*DAT_8019ed58];
                FUN_800f9200();
                *DAT_8019ed40 = *DAT_8019ed40 & 0xf;
                pcVar4[*DAT_8019ed54 + 5] = *DAT_8019ed40;
                FUN_800f93dc();
                if ((*DAT_8019ed40 & 0x80) != 0) {
                  pcVar5 = pcVar4 + *DAT_8019ed54;
                  cVar2 = pcVar5[6] + -1;
                  goto LAB_8010c8e4;
                }
              }
            }
          }
        }
        goto LAB_8010c8e8;
      }
      if (*(char *)(iVar3 + 0xb1) != '\0') {
        *DAT_8019ed40 = pcVar4[*DAT_8019ed54 + 10];
        if ((*DAT_8019ed40 != 0) && (*DAT_8019ed40 == pcVar4[*DAT_8019ed54 + 1])) {
          pcVar4[*DAT_8019ed54 + 10] = '\0';
          pcVar4[*DAT_8019ed54 + 4] = '\0';
        }
      }
      cVar2 = *(char *)(iVar3 + 0xae) + '\x01';
      *(char *)(iVar3 + 0xaf) = *(char *)(iVar3 + 0xaf) + '\x0f';
      *(char *)(iVar3 + 0xae) = cVar2;
    } while (cVar2 != *pcVar4);
    pcVar4[-1] = pcVar4[-1] + '\x01';
  }
  return;
}



