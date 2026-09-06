
void FUN_80173ed8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  
  iVar1 = FUN_800f3c3c(0);
  iVar2 = FUN_800f3b04(0);
  iVar3 = FUN_800f3b04(0x8000);
  iVar4 = FUN_800f3b9c(0x14f000,0);
  FUN_800f926c();
  FUN_800f654c(0x15);
  FUN_800f9200();
  FUN_800f9448();
  uVar13 = (*(byte *)(iVar1 + 0xad) >> 4) - 1 & 0xffff;
  *(undefined1 *)(iVar1 + 0xd7) = 0;
  if (uVar13 == 2) {
    uVar13 = 1;
  }
  iVar3 = uVar13 + iVar3;
  bVar5 = (*(char *)(iVar1 + 0xc) + *(char *)(iVar3 + 0x3fa8)) - *(char *)(iVar2 + 0x1706);
  if (bVar5 < *(byte *)(iVar3 + 0x3fab)) {
    *(byte *)(iVar1 + 0xc) = bVar5;
    if (uVar13 == 0) {
      uVar12 = *(byte *)(iVar1 + 0x5a) & 0xf;
      uVar10 = ((uint)(byte)(bVar5 - 2) | (*(byte *)(iVar1 + 0xd) & 0xf) << 8) * 0x10 - uVar12 &
               0xffff;
      *(char *)(iVar1 + 6) = (char)uVar12;
      *(char *)(iVar1 + 0xc) = (char)uVar10;
      *(char *)(iVar1 + 0xd) = (char)(uVar10 >> 8);
    }
    bVar5 = (*(char *)(iVar1 + 0xe) + *(char *)(iVar3 + 0x3fae)) - *(char *)(iVar2 + 0x1707);
    if (bVar5 < *(byte *)(iVar3 + 0x3fb1)) {
      *(byte *)(iVar1 + 0xe) = bVar5;
      if (uVar13 == 0) {
        bVar11 = *(byte *)(iVar1 + 0x5c) & 0xf;
        *(byte *)(iVar1 + 6) = bVar11;
        *(byte *)(iVar1 + 0xe) = (bVar5 - 1) * '\x10' - bVar11;
      }
      else {
        *(undefined1 *)(iVar1 + 10) = 0;
        if (uVar13 == 2) {
          if ((*(byte *)(iVar1 + 0x5c) & 0xf) == 0) {
            uVar13 = (uint)*(byte *)((uint)*(byte *)(iVar1 + 0xe) + iVar4 + 0x3a1);
          }
          else {
            if (*(byte *)(iVar1 + 0xe) == 0) goto LAB_80174324;
            iVar2 = (*(byte *)(iVar1 + 0xe) - 1 & 0xffff) + iVar4;
            uVar13 = (uint)*(byte *)(iVar2 + 0x3a1);
            uVar13 = ((*(byte *)(iVar2 + 0x3a2) - uVar13 & 0xff) >> 1) + uVar13 & 0xff;
          }
          iVar4 = uVar13 * 2 + iVar4;
          *(char *)(iVar1 + 0xe) = (char)uVar13;
          *(undefined1 *)(iVar1 + 0x18) = *(undefined1 *)(iVar4 + 0x1c0);
          uVar6 = *(undefined1 *)(iVar4 + 0x1c1);
          uVar13 = (*(byte *)(iVar1 + 0x5a) & 8) >> 3;
          *(char *)(iVar1 + 0x1a) = (char)uVar13;
          uVar13 = ((*(byte *)(iVar1 + 0xc) & 0x7f) * 2 - uVar13) - 0x40;
        }
        else {
          if ((*(byte *)(iVar1 + 0x5c) & 0xf) == 0) {
            uVar13 = (uint)*(byte *)((uint)*(byte *)(iVar1 + 0xe) + iVar4 + 0x380);
          }
          else {
            if (*(byte *)(iVar1 + 0xe) == 0) goto LAB_80174324;
            iVar2 = (*(byte *)(iVar1 + 0xe) - 1 & 0xffff) + iVar4;
            uVar13 = (uint)*(byte *)(iVar2 + 0x380);
            uVar13 = ((*(byte *)(iVar2 + 0x381) - uVar13 & 0xff) >> 1) + uVar13 & 0xff;
          }
          puVar7 = (undefined1 *)(iVar4 + uVar13 * 2);
          *(char *)(iVar1 + 0xe) = (char)uVar13;
          *(undefined1 *)(iVar1 + 0x18) = *puVar7;
          uVar6 = puVar7[1];
          uVar13 = (*(byte *)(iVar1 + 0x5a) & 8) >> 3;
          *(char *)(iVar1 + 0x1a) = (char)uVar13;
          uVar13 = ((*(byte *)(iVar1 + 0xc) & 0x7f) * 2 - uVar13) - 0x26;
        }
        bVar5 = (byte)uVar13;
        *(undefined1 *)(iVar1 + 0x19) = uVar6;
        if ((uVar13 & 0x80) != 0) {
          bVar5 = ~bVar5 + 1;
          *(char *)(iVar1 + 10) = *(char *)(iVar1 + 10) + '\x01';
        }
        *(byte *)(iVar1 + 0x1a) = bVar5;
        *(undefined1 *)(iVar1 + 0x1b) = 0;
        FUN_80174f0c();
        uVar9 = *(ushort *)(iVar1 + 0x31);
        uVar8 = uVar9 >> 1;
        *(char *)(iVar1 + 0x31) = (char)uVar8;
        *(byte *)(iVar1 + 0x32) = (byte)(uVar9 >> 9);
        if (*(char *)(iVar1 + 10) == '\0') {
          uVar8 = uVar8 + 0x78;
          if (0xff < uVar8) goto LAB_80174324;
        }
        else {
          uVar8 = 0x78 - *(byte *)(iVar1 + 0x31);
          if ((uVar8 & 0x8000) != 0) goto LAB_80174324;
        }
        *(char *)(iVar1 + 0xc) = (char)uVar8;
        uVar9 = uVar8 & 0xff | (ushort)*(byte *)(iVar1 + 0xd) << 8;
        if (uVar9 < 0x78) {
          uVar13 = -(((uint)(ushort)(0x78 - uVar9) << 0xc) / 3000 & 0xffff);
        }
        else {
          uVar13 = ((uint)(ushort)(uVar9 - 0x78) << 0xc) / 3000;
        }
        uVar13 = uVar13 + 0x78 & 0xffff;
        if (0xff < uVar13) goto LAB_80174324;
        *(char *)(iVar1 + 0xc) = (char)uVar13;
        *(char *)(iVar1 + 0xd) = (char)(uVar13 >> 8);
        uVar13 = (uint)*(byte *)(iVar1 + 0xe);
        if (uVar13 < 0x78) {
          uVar13 = -(((0x78 - uVar13 & 0xffff) << 0xc) / 3000 & 0xffff);
        }
        else {
          uVar13 = ((uVar13 - 0x78 & 0xffff) << 0xc) / 3000;
        }
        uVar13 = uVar13 + 0x78 & 0xffff;
        if (0xf0 < uVar13) goto LAB_80174324;
        *(char *)(iVar1 + 0xe) = (char)uVar13;
      }
      *(char *)(iVar1 + 0xd7) = *(char *)(iVar1 + 0xd7) + '\x01';
    }
  }
LAB_80174324:
  FUN_800f9448();
  return;
}



