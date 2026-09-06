
void FUN_801130c0(void)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_800f6630(0x2c);
  FUN_800f5574(0x60);
  iVar3 = FUN_800f53d4();
  if (iVar3 != 0) {
    FUN_800f8f74(0x2115);
    FUN_800f654c(0);
    *DAT_8019ed54 = *DAT_8019ed44;
    *DAT_8019ed58 = *DAT_8019ed44;
    do {
      *DAT_8019ed40 = (&DAT_80198c4c)[*DAT_8019ed58];
      bVar1 = *DAT_8019ed40;
      *DAT_8019ed40 = (&DAT_80198c4d)[*DAT_8019ed58];
      uVar2 = *DAT_8019ed54;
      uVar5 = (uint)CONCAT11(*DAT_8019ed40,bVar1);
      if (uVar2 == 4) {
LAB_801131ec:
                    /* Possible PsyQ macro: setPolyFT4() + setShadeTex(polyFT4, 1) */
        (&DAT_801cfd68)[uVar5] = 0x2d;
        (&DAT_801cfd68)[uVar5 + 1] = 0x2d;
        uVar4 = 0x2e;
LAB_80113258:
        (&DAT_801cfd68)[uVar5 + 2] = uVar4;
        (&DAT_801cfd68)[uVar5 + 3] = uVar4;
      }
      else {
        if (uVar2 < 5) {
          if (uVar2 == 0) goto LAB_801131ec;
        }
        else if ((uVar2 == 8) || (uVar2 == 0xc)) {
          (&DAT_801cfd68)[uVar5] = 0x3d;
          (&DAT_801cfd68)[uVar5 + 1] = 0x3d;
          uVar4 = 0x3e;
          goto LAB_80113258;
        }
        FUN_800f6c68(0x14fc46);
        uVar6 = uVar5 + 1 & 0xffff;
        (&DAT_801cfd68)[uVar5] = (ushort)*DAT_8019ed40 | (&DAT_801cfd68)[uVar5] & 0xff00;
        FUN_800f6c68(0x14fc47);
        uVar5 = uVar6 + 1 & 0xffff;
        (&DAT_801cfd68)[uVar6] = (ushort)*DAT_8019ed40 | (&DAT_801cfd68)[uVar6] & 0xff00;
        FUN_800f6c68(0x14fc48);
        (&DAT_801cfd68)[uVar5] = (ushort)*DAT_8019ed40 | (&DAT_801cfd68)[uVar5] & 0xff00;
        FUN_800f6c68(0x14fc49);
        (&DAT_801cfd68)[uVar5 + 1 & 0xffff] =
             (ushort)*DAT_8019ed40 | (&DAT_801cfd68)[uVar5 + 1 & 0xffff] & 0xff00;
      }
      *DAT_8019ed58 = *DAT_8019ed58 + 2;
      *DAT_8019ed54 = *DAT_8019ed54 + 4;
      FUN_800f5958(0x10);
      iVar3 = FUN_800f53d4();
    } while (iVar3 == 0);
  }
  return;
}



