
void FUN_80157ad0(void)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 uStack_25;
  
  iVar5 = FUN_800f3c3c(0);
  iVar6 = FUN_800f3b04(0);
  iVar7 = FUN_800f3b04(0x2000);
  *(undefined1 *)(iVar7 + 0x18ee) = 0;
  *(undefined1 *)(iVar7 + 0x18ee) = *(undefined1 *)(iVar6 + 0x16ac);
  FUN_800f9644(0x20);
  uVar8 = (uint)*DAT_8019ed48;
  uVar9 = uVar8;
  do {
    sVar4 = *(short *)(iVar7 + 0x1601);
    if (sVar4 == -1) {
LAB_80157b88:
      uVar1 = *(undefined1 *)(uVar9 + iVar7 + 0x9ea);
      *(undefined1 *)(iVar7 + 0x896) = uVar1;
      *(undefined1 *)(iVar7 + 0x897) = *(undefined1 *)(uVar9 + iVar7 + 0x9eb);
      bVar2 = *(byte *)(iVar7 + 0x897);
      local_28 = CONCAT11(bVar2,uVar1);
      local_26 = (undefined1)(local_28 << 1);
      *(undefined1 *)(iVar7 + 0x896) = local_26;
      uStack_25 = (undefined1)((ushort)(local_28 << 1) >> 8);
      *(undefined1 *)(iVar7 + 0x897) = uStack_25;
      if ((bVar2 & 0x80) != 0) {
        iVar6 = uVar8 + iVar7;
        FUN_800f971c();
        FUN_800f9660(0x20);
        bVar2 = *(byte *)(iVar6 + 0xa06);
        FUN_800f9644(0x20);
        if ((bVar2 & 1) == 0) {
          sVar4 = *(short *)(iVar6 + 0xa04) + -1;
          *(short *)(iVar6 + 0xa04) = sVar4;
          if (sVar4 == 0) {
            FUN_800f971c();
            FUN_800f9660(0x20);
            *(byte *)(iVar6 + 0xa06) = *(byte *)(iVar6 + 0xa06) | 1;
            FUN_800f9644(0x20);
          }
          goto LAB_80157c98;
        }
      }
      uVar8 = uVar8 + 3 & 0xffff;
      *(undefined1 *)(iVar7 + 0x89a) = 6;
      *(undefined1 *)(iVar7 + 0x89b) = 0;
      do {
        uVar3 = *(ushort *)(iVar7 + 0x896);
        sVar4 = uVar3 << 1;
        local_26 = (undefined1)sVar4;
        *(undefined1 *)(iVar7 + 0x896) = local_26;
        uStack_25 = (undefined1)((ushort)sVar4 >> 8);
        *(undefined1 *)(iVar7 + 0x897) = uStack_25;
        if ((uVar3 & 0x8000) != 0) {
          FUN_800f971c();
          FUN_800f9660(0x20);
          bVar2 = *(byte *)(uVar8 + iVar7 + 0xa06);
          FUN_800f9644(0x20);
          if ((bVar2 & 0x81) == 0) {
            if (*(short *)(iVar7 + 0x89a) == 1) {
              *DAT_8019ed54 = (ushort)uVar8;
              FUN_800f9330();
              iVar6 = (uVar9 & 0x7fff) * 2 + iVar7;
              sVar4 = *(short *)(iVar6 + 0x15a4) + -1;
              *(short *)(iVar6 + 0x15a4) = sVar4;
              if (sVar4 != 0) {
                FUN_800f95a0();
                uVar8 = (uint)*DAT_8019ed54;
                goto LAB_80157e98;
              }
              *(undefined1 *)(iVar6 + 0x15a4) = 2;
              *(undefined1 *)(iVar6 + 0x15a5) = 0;
              FUN_800f95a0();
              uVar8 = (uint)*DAT_8019ed54;
            }
            iVar6 = uVar8 + iVar7;
            if (*(short *)(iVar6 + 0xa04) != 0) {
              local_28 = CONCAT11(*(undefined1 *)(iVar6 + 0xa05),*(undefined1 *)(iVar6 + 0xa04));
              *(short *)(iVar6 + 0xa04) = local_28 + -1;
              if ((short)(local_28 + -1) != 0) goto LAB_80157e98;
            }
            FUN_800f971c();
            FUN_800f9660(0x20);
            *(byte *)(iVar6 + 0xa06) = *(byte *)(iVar6 + 0xa06) | 0x81;
            FUN_800f9644(0x20);
          }
        }
LAB_80157e98:
        sVar4 = *(short *)(iVar7 + 0x89a) + -1;
        local_28._1_1_ = (undefined1)((ushort)sVar4 >> 8);
        uVar1 = *(undefined1 *)(iVar7 + 0x89a);
        uVar8 = uVar8 + 3 & 0xffff;
        *(short *)(iVar7 + 0x89a) = sVar4;
      } while (CONCAT11(local_28._1_1_,uVar1) != 0);
    }
    else {
      *(char *)(iVar5 + 0x80) = (char)sVar4;
      *(char *)(iVar5 + 0x81) = (char)((ushort)sVar4 >> 8);
      if (uVar9 >> 1 == (uint)CONCAT11(*(undefined1 *)(iVar5 + 0x81),(char)sVar4))
      goto LAB_80157b88;
LAB_80157c98:
      uVar8 = uVar8 + 0x15 & 0xffff;
    }
    uVar9 = uVar9 + 2 & 0xffff;
    if (uVar9 == 0x1a) {
      FUN_800f971c();
      FUN_800f9660(0x20);
      return;
    }
  } while( true );
}



