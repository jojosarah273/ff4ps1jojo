
void FUN_8010b010(void)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  iVar4 = FUN_800f3c3c(0);
  iVar5 = FUN_800f3b04(0);
  iVar6 = FUN_800f3b9c(0x148000,0);
  if (*(char *)(iVar5 + 0x8fe) != '\0') {
    *(undefined1 *)(iVar4 + 0xaf) = 0;
    *(undefined1 *)(iVar4 + 0xb0) = 0;
    *(undefined1 *)(iVar4 + 0x40) = 0;
    *(undefined1 *)(iVar4 + 0x41) = 0;
    *(undefined1 *)(iVar4 + 0xae) = 0;
                    /* Possible PsyQ macro: setPolyF3() */
    *(undefined1 *)(iVar4 + 0x43) = 0x20;
    *(undefined1 *)(iVar4 + 0x44) = 0;
    do {
      uVar14 = (uint)*(ushort *)(iVar4 + 0xaf);
      iVar8 = uVar14 + iVar5;
      if (*(char *)(iVar8 + 0x90b) != '\0') {
        bVar11 = *(byte *)(iVar8 + 0x901);
        if ((bVar11 & 3) == 0) {
          if ((*(byte *)(iVar8 + 0x90c) & 2) == 0) {
            if ((*(byte *)(iVar8 + 0x902) & 0x7f) == 0) {
              bVar10 = false;
              if ((bVar11 & 0x20) != 0) {
LAB_8010b204:
                bVar11 = *(byte *)(iVar4 + 0x7a);
LAB_8010b210:
                bVar10 = (bVar11 & 0x10) != 0;
              }
            }
            else {
              bVar10 = false;
              if ((*(byte *)(iVar8 + 0x8ff) & 0x40) == 0) {
                bVar11 = *(byte *)(iVar8 + 0x8ff) >> 1;
                if (*(char *)(iVar8 + 0x908) == '\0') {
                  if (*(char *)(iVar4 + 0xb1) != '\0') goto LAB_8010b204;
                  bVar11 = *(byte *)(iVar8 + 0x8ff);
                }
                goto LAB_8010b210;
              }
            }
            *(bool *)(iVar4 + 0x3d) = bVar10;
            bVar11 = *(byte *)(uVar14 + iVar5 + 0x909) & 0x7f;
          }
          else {
            if ((*(byte *)(iVar8 + 0x90c) & 1) == 0) {
              puVar7 = &DAT_80198bb0;
            }
            else {
              puVar7 = &DAT_80198bb8;
            }
            bVar11 = puVar7[(*(byte *)(iVar8 + 0x8ff) & 0x7f) >> 4];
            *(undefined1 *)(iVar4 + 0x3d) = 0;
          }
          *(undefined1 *)(iVar4 + 0x3e) = 0;
          cVar3 = (bVar11 * '\x02' + *(char *)(iVar4 + 0x3d)) * '\x10';
LAB_8010b240:
          *(char *)(iVar4 + 0x3d) = cVar3;
        }
        else if ((bVar11 & 0x20) == 0) {
          *(undefined1 *)(iVar4 + 0x3d) = 0;
          *(undefined1 *)(iVar4 + 0x3e) = 1;
        }
        else {
          if ((bVar11 & 3) == 1) {
            *(undefined1 *)(iVar4 + 0x3e) = 1;
            cVar3 = (*(byte *)(iVar4 + 0x7a) & 0x10) << 2;
            goto LAB_8010b240;
          }
          uVar13 = (ushort)(byte)(&DAT_80198ba8)[bVar11 >> 6];
          uVar15 = (uint)*(byte *)(iVar4 + 0x7a);
          do {
            uVar13 = uVar13 - 1;
            uVar15 = uVar15 >> 1;
          } while (uVar13 != 0);
          bVar11 = (&DAT_80198bac)[bVar11 & 3];
          *(undefined1 *)(iVar4 + 0x3e) = 1;
          uVar14 = (uint)*(ushort *)(iVar4 + 0xaf);
          *(byte *)(iVar4 + 0x3d) = bVar11 & (byte)((uVar15 & 0xc) << 2);
        }
        iVar8 = uVar14 + iVar5;
        cVar3 = *(char *)(iVar8 + 0x90d);
        *(undefined1 *)(iVar4 + 8) = 0;
        *(char *)(iVar4 + 7) = cVar3 << 1;
        if ((*(byte *)(iVar8 + 0x90c) & 1) != 0) {
          *(undefined1 *)(iVar4 + 8) =
               *(undefined1 *)((*(byte *)(iVar8 + 0x8ff) >> 2 & 0x1f) + iVar6 + 0x7cc6);
        }
        *(undefined1 *)(iVar4 + 6) = 4;
        uVar14 = (uint)*(ushort *)(iVar4 + 0x3d);
        do {
          iVar16 = uVar14 + iVar6;
          iVar8 = (uint)*(ushort *)(iVar4 + 0xaf) + iVar5;
          cVar3 = *(char *)(iVar8 + 0x903);
          cVar1 = *(char *)(iVar16 + 0x7846);
          *(undefined1 *)(iVar4 + 0xd) = 0;
          *(char *)(iVar4 + 0xc) = cVar3 + cVar1;
          cVar3 = *(char *)(iVar8 + 0x905);
          cVar1 = *(char *)(iVar16 + 0x7847);
          *(undefined1 *)(iVar4 + 0xf) = 0;
          *(char *)(iVar4 + 0xe) = cVar3 + cVar1;
          FUN_8010b5dc();
          if (*(char *)(iVar4 + 0xd7) == '\0') {
            if ((*(byte *)(iVar4 + 6) & 1) == 0) {
              iVar8 = (uint)*(ushort *)(iVar4 + 0x40) + iVar5;
              *(undefined1 *)(iVar8 + 0x400) = *(undefined1 *)(iVar4 + 0x18);
              *(char *)(iVar8 + 0x401) = *(char *)(iVar4 + 0x1a) - (*(char *)(iVar4 + 8) + '\x04');
              iVar12 = (uint)*(byte *)(iVar16 + 0x7848) + (uint)*(byte *)(iVar4 + 0x43);
              *(char *)(iVar8 + 0x402) = (char)iVar12;
              *(byte *)(iVar8 + 0x403) =
                   *(char *)(iVar4 + 7) +
                   (*(char *)(iVar16 + 0x7849) + *(char *)(iVar4 + 0x44) + (char)((uint)iVar12 >> 8)
                   & 0xf1U);
            }
            else {
              iVar8 = (uint)*(ushort *)(iVar4 + 0x40) + iVar5;
              *(undefined1 *)(iVar8 + 0x480) = *(undefined1 *)(iVar4 + 0x18);
              *(char *)(iVar8 + 0x481) = *(char *)(iVar4 + 0x1a) - (*(char *)(iVar4 + 8) + '\x04');
              iVar12 = (uint)*(byte *)(iVar16 + 0x7848) + (uint)*(byte *)(iVar4 + 0x43);
              *(char *)(iVar8 + 0x482) = (char)iVar12;
              *(byte *)(iVar8 + 0x483) =
                   *(char *)(iVar4 + 7) +
                   (*(char *)(iVar16 + 0x7849) + *(char *)(iVar4 + 0x44) + (char)((uint)iVar12 >> 8)
                   & 0xf1U);
              if (*(char *)((uint)*(ushort *)(iVar4 + 0xaf) + iVar5 + 0x90a) != '\0') {
                *(undefined1 *)((uint)*(ushort *)(iVar4 + 0x40) + iVar5 + 0x481) = 0xf8;
              }
            }
          }
          uVar14 = uVar14 + 4 & 0xffff;
          if ((*(byte *)(iVar4 + 6) & 1) != 0) {
            *(char *)(iVar4 + 0x40) = *(char *)(iVar4 + 0x40) + '\x04';
          }
          cVar3 = *(char *)(iVar4 + 6) + -1;
          *(char *)(iVar4 + 6) = cVar3;
        } while (cVar3 != '\0');
      }
      iVar8 = *(byte *)(iVar4 + 0x43) + 0x20;
      *(char *)(iVar4 + 0x43) = (char)iVar8;
      *(char *)(iVar4 + 0x44) = *(char *)(iVar4 + 0x44) + (char)((uint)iVar8 >> 8);
      *(char *)(iVar4 + 0xaf) = *(char *)(iVar4 + 0xaf) + '\x0f';
      cVar3 = *(char *)(iVar4 + 0xae) + '\x01';
      *(char *)(iVar4 + 0xae) = cVar3;
    } while (cVar3 != *(char *)(iVar5 + 0x8fe));
    if ((*(byte *)(iVar5 + 0x128a) & 0x40) != 0) {
      *(undefined1 *)(iVar4 + 0xae) = 0;
      do {
        bVar11 = *(byte *)(iVar4 + 0xae);
        iVar16 = (uint)bVar11 + iVar6;
        *(undefined1 *)(iVar4 + 0xc) = *(undefined1 *)(iVar16 + 0x7c96);
        *(undefined1 *)(iVar4 + 0xe) = *(undefined1 *)(iVar16 + 0x7ca6);
        iVar8 = (((uint)(bVar11 >> 7) * 2 + (bVar11 >> 6 & 1)) * 2 + (bVar11 >> 5 & 1)) * 2 +
                (bVar11 >> 4 & 1);
        *(undefined1 *)(iVar4 + 7) = *(undefined1 *)(iVar16 + 0x7c76);
        uVar2 = *(undefined1 *)(iVar16 + 0x7cb6);
        uVar14 = (uint)bVar11 << 4;
        *(char *)(iVar4 + 0x3e) = (char)iVar8;
        *(char *)(iVar4 + 0x3d) = (char)uVar14;
        uVar14 = uVar14 & 0xff | iVar8 * 0x100;
        *(undefined1 *)(iVar4 + 8) = uVar2;
        uVar15 = (uint)*(byte *)(iVar16 + 0x7c86);
        do {
          iVar8 = uVar15 + iVar6;
          iVar16 = uVar14 + iVar5;
          uVar15 = uVar15 + 4 & 0xffff;
          *(char *)(iVar16 + 0x300) = *(char *)(iVar4 + 0xc) + *(char *)(iVar8 + 0x7846);
          uVar9 = uVar14 + 4;
          *(char *)(iVar16 + 0x301) = *(char *)(iVar4 + 0xe) + *(char *)(iVar8 + 0x7847);
          uVar14 = uVar9 & 0xffff;
          *(char *)(iVar16 + 0x302) = *(char *)(iVar4 + 7) + *(char *)(iVar8 + 0x7848);
          *(byte *)(iVar16 + 0x303) = *(byte *)(iVar4 + 8) | *(byte *)(iVar8 + 0x7849) & 0xf1;
        } while ((uVar9 & 0xf) != 0);
        cVar3 = *(char *)(iVar4 + 0xae) + '\x01';
        *(char *)(iVar4 + 0xae) = cVar3;
      } while (cVar3 != '\x10');
    }
  }
  return;
}



