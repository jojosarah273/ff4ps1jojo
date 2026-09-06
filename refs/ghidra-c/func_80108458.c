
void FUN_80108458(void)

{
  ushort uVar1;
  bool bVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  byte local_20;
  byte local_1f;
  
  uVar10 = 0;
  bVar2 = false;
  iVar11 = 0;
  FUN_800f7500(0);
  FUN_800f8ebc(0x3d);
  while( true ) {
    if (uVar10 == 0) {
      FUN_801094d8();
      if (((char)*DAT_8019ed40 < '\0') && (*DAT_8019ed40 != 0xff)) {
        pcVar4 = (char *)FUN_800f3c3c(0xdd);
        uVar10 = 2;
        if (*pcVar4 == '\0') {
          uVar5 = (uint)*DAT_8019ed40;
          puVar8 = &DAT_80198f30;
        }
        else if (*pcVar4 == '\x01') {
          uVar5 = (uint)*DAT_8019ed40;
          puVar8 = &DAT_80198e30;
        }
        else {
          uVar5 = (uint)*DAT_8019ed40;
          puVar8 = &DAT_80199030;
        }
        local_20 = puVar8[(uVar5 - 0x80) * 2];
        local_1f = puVar8[(*DAT_8019ed40 - 0x80) * 2 + 1];
        bVar2 = false;
      }
      else if (*DAT_8019ed40 - 10 < 0x16) {
        iVar11 = *DAT_8019ed40 - 10;
        uVar10 = (uint)(byte)(&DAT_80198d55)[(*DAT_8019ed40 - 10) * 10];
        bVar2 = true;
      }
      else {
        bVar2 = false;
        local_20 = 0;
        local_1f = *DAT_8019ed40;
        uVar10 = 1;
      }
    }
    if (bVar2) {
      if (uVar10 != 1) {
        FUN_800f7210(0x772);
        *DAT_8019ed54 = *DAT_8019ed54 + -1;
        FUN_800f8d00(0x772);
      }
      iVar6 = (iVar11 * 10 + (uint)(byte)(&DAT_80198d55)[iVar11 * 10]) - uVar10;
      uVar10 = (int)((uVar10 - 1) * 0x10000) >> 0x10;
      *DAT_8019ed40 = (&UNK_80198d56)[iVar6];
    }
    else if (uVar10 == 2) {
      FUN_800f7210(0x772);
      *DAT_8019ed54 = *DAT_8019ed54 + -1;
      FUN_800f8d00(0x772);
      uVar10 = 1;
      *DAT_8019ed40 = local_20;
    }
    else {
      uVar10 = (int)((uVar10 - 1) * 0x10000) >> 0x10;
      *DAT_8019ed40 = local_1f;
    }
    if (*DAT_8019ed40 - 0x20 < 0x60) {
      *DAT_8019ed40 = (&DAT_80199110)[*DAT_8019ed40];
    }
    FUN_800f5574(0);
    iVar6 = FUN_800f53d4();
    if (iVar6 != 0) break;
    FUN_800f5574(1);
    iVar6 = FUN_800f53d4();
    if (iVar6 == 0) {
      FUN_800f5574(2);
      iVar6 = FUN_800f53d4();
      if (iVar6 != 0) {
        FUN_801094a0();
        FUN_800f824c(7);
        FUN_800f7594(0x3d);
        FUN_800f654c(0xff);
        do {
          uVar1 = *DAT_8019ed58;
          sVar7 = (short)((uint)uVar1 % 0x30);
          if ((uint)uVar1 % 0x30 < 0x18) {
            uVar9 = 0x774;
            uVar3 = (uVar1 / 0x30) * 0x18 + sVar7;
          }
          else {
            uVar9 = 0x834;
            uVar3 = ((uVar1 / 0x30) * 0x18 + sVar7) - 0x18;
          }
          *DAT_8019ed58 = uVar3;
          FUN_800f8960(uVar9);
          *DAT_8019ed58 = uVar1;
          FUN_800f63bc();
          FUN_800f5a90(0xc0);
          iVar6 = FUN_800f53d4();
          if (iVar6 != 0) break;
          FUN_800f5da0(7);
          iVar6 = FUN_800f5b8c(0x202);
        } while (iVar6 != 0);
        goto LAB_80109068;
      }
      FUN_800f5574(3);
      iVar6 = FUN_800f53d4();
      if (iVar6 == 0) {
        FUN_800f5574(4);
        iVar6 = FUN_800f53d4();
        if (iVar6 != 0) {
          FUN_801094a0();
          FUN_800f5140();
          FUN_800f824c(0x18);
          FUN_800f5140();
          FUN_800f5410();
          uVar9 = FUN_800f3c3c(0x18);
          FUN_800f3f38(uVar9);
          FUN_800f824c(0x18);
          FUN_800f8fb8(0x19);
          FUN_800f7270(0x18);
          FUN_800f7594(0x3d);
          FUN_800f8fb8(7);
          do {
            FUN_800f6b68(0x1500);
            FUN_800f5574(0xff);
            iVar6 = FUN_800f53d4();
            if (iVar6 != 0) break;
            FUN_80109378();
            uVar1 = *DAT_8019ed58;
            sVar7 = (short)((uint)uVar1 % 0x30);
            if ((uint)uVar1 % 0x30 < 0x18) {
              uVar9 = 0x774;
              uVar3 = (uVar1 / 0x30) * 0x18 + sVar7;
            }
            else {
              uVar9 = 0x834;
              uVar3 = ((uVar1 / 0x30) * 0x18 + sVar7) - 0x18;
            }
            *DAT_8019ed58 = uVar3;
            FUN_800f8960(uVar9);
            *DAT_8019ed58 = uVar1;
            FUN_800f654c(0);
            FUN_800f3d48();
            FUN_800f63bc();
            FUN_800f6364();
            FUN_800f62bc(7);
            FUN_800f6630(7);
            FUN_800f5574(6);
            iVar6 = FUN_800f53d4();
          } while (iVar6 == 0);
          goto LAB_80109068;
        }
        FUN_800f5574(5);
        iVar6 = FUN_800f53d4();
        if (iVar6 == 0) {
          FUN_800f5574(6);
          iVar6 = FUN_800f53d4();
          if (iVar6 != 0) {
            FUN_800f654c(0xff);
            do {
              uVar1 = *DAT_8019ed58;
              sVar7 = (short)((uint)uVar1 % 0x30);
              if ((uint)uVar1 % 0x30 < 0x18) {
                uVar9 = 0x774;
                uVar3 = (uVar1 / 0x30) * 0x18 + sVar7;
              }
              else {
                uVar9 = 0x834;
                uVar3 = ((uVar1 / 0x30) * 0x18 + sVar7) - 0x18;
              }
              *DAT_8019ed58 = uVar3;
              FUN_800f8960(uVar9);
              *DAT_8019ed58 = uVar1;
              FUN_800f63bc();
              FUN_800f5a90(0x180);
              iVar11 = FUN_800f53d4();
              uVar9 = 2;
            } while (iVar11 == 0);
            goto LAB_801091f8;
          }
          FUN_800f5574(7);
          iVar6 = FUN_800f53d4();
          if (iVar6 == 0) {
            FUN_800f5574(8);
            iVar6 = FUN_800f53d4();
            if (iVar6 != 0) {
              FUN_800f6564(0x8f8);
              FUN_800f824c(0x30);
              FUN_800f6564(0x8f9);
              FUN_800f824c(0x31);
              FUN_800f6564(0x8fa);
              FUN_800f824c(0x32);
              FUN_80174ce4();
              FUN_800f71dc(0);
              do {
                FUN_800f6a78(0x36);
                FUN_800f5574(0x80);
                iVar6 = FUN_800f53d4();
                if (iVar6 == 0) break;
                FUN_800f6364();
                FUN_800f5958(5);
                iVar6 = FUN_800f53d4();
              } while (iVar6 == 0);
              do {
                FUN_800f6a78(0x36);
                uVar1 = *DAT_8019ed58;
                sVar7 = (short)((uint)uVar1 % 0x30);
                if ((uint)uVar1 % 0x30 < 0x18) {
                  uVar9 = 0x774;
                  uVar3 = (uVar1 / 0x30) * 0x18 + sVar7;
                }
                else {
                  uVar9 = 0x834;
                  uVar3 = ((uVar1 / 0x30) * 0x18 + sVar7) - 0x18;
                }
                *DAT_8019ed58 = uVar3;
                FUN_800f8960(uVar9);
                *DAT_8019ed58 = uVar1;
                FUN_800f63bc();
                FUN_800f6364();
                FUN_800f5958(6);
                iVar6 = FUN_800f53d4();
              } while (iVar6 == 0);
              goto LAB_80109068;
            }
            FUN_800f5574(0xc3);
            iVar6 = FUN_800f53d4();
            if (iVar6 == 0) {
              FUN_80109378();
              FUN_800f7594(0x3d);
              uVar1 = *DAT_8019ed58;
              sVar7 = (short)((uint)uVar1 % 0x30);
              if ((uint)uVar1 % 0x30 < 0x18) {
                uVar9 = 0x774;
                uVar3 = (uVar1 / 0x30) * 0x18 + sVar7;
              }
              else {
                uVar9 = 0x834;
                uVar3 = ((uVar1 / 0x30) * 0x18 + sVar7) - 0x18;
              }
              *DAT_8019ed58 = uVar3;
              FUN_800f8960(uVar9);
              *DAT_8019ed58 = uVar1;
              FUN_800f8ebc(0x3d);
              FUN_800f654c(0);
              FUN_800f7594(0x3d);
              FUN_800f63bc();
              FUN_800f8ebc(0x3d);
            }
            else {
              FUN_800f3d48();
              FUN_800f654c(0xff);
              FUN_800f3d48();
              FUN_800f8960(0x774);
              FUN_800f8960(0x775);
              FUN_800f3d48();
              FUN_800f8960(0x834);
              FUN_800f8960(0x835);
              FUN_800f654c(0);
              FUN_800f3d48();
              FUN_800f7594(0x3d);
              *DAT_8019ed58 = *DAT_8019ed58 + 2;
              FUN_800f8ebc(0x3d);
            }
          }
          else {
            FUN_800f6564(0x8fb);
            FUN_800f8fb8(0x19);
            FUN_800f5140();
            FUN_800f4f4c();
            uVar9 = FUN_800f3c3c(0x19);
            FUN_800f7a40(uVar9);
            FUN_800f5140();
            FUN_800f4f4c();
            uVar9 = FUN_800f3c3c(0x19);
            FUN_800f7a40(uVar9);
            FUN_800f5140();
            FUN_800f4f4c();
            uVar9 = FUN_800f3c3c(0x19);
            FUN_800f7a40(uVar9);
            FUN_800f5410();
            uVar9 = FUN_800f3b04(0x8fb);
            FUN_800f3f38(uVar9);
            FUN_800f824c(0x18);
            FUN_800f6630(0x19);
            FUN_800f4008(0);
            FUN_800f824c(0x19);
            FUN_800f7270(0x18);
            FUN_800f6364();
            FUN_800f7594(0x3d);
            FUN_800f654c(8);
            FUN_800f824c(7);
            do {
              FUN_800f6c68(0xf8000);
              FUN_800f5574(0xff);
              iVar6 = FUN_800f53d4();
              if (iVar6 != 0) break;
              FUN_80109378();
              uVar1 = *DAT_8019ed58;
              sVar7 = (short)((uint)uVar1 % 0x30);
              if ((uint)uVar1 % 0x30 < 0x18) {
                uVar9 = 0x774;
                uVar3 = (uVar1 / 0x30) * 0x18 + sVar7;
              }
              else {
                uVar9 = 0x834;
                uVar3 = ((uVar1 / 0x30) * 0x18 + sVar7) - 0x18;
              }
              *DAT_8019ed58 = uVar3;
              FUN_800f8960(uVar9);
              *DAT_8019ed58 = uVar1;
              FUN_800f654c(0);
              FUN_800f3d48();
              FUN_800f63bc();
              FUN_800f8ebc(0x3d);
              FUN_800f6364();
              FUN_800f5da0(7);
              iVar6 = FUN_800f5b8c(0x202);
            } while (iVar6 != 0);
          }
          goto LAB_801092e4;
        }
        if (DAT_8019ed00 == '\x01') {
          FUN_801094a0();
          sVar7 = *(short *)(&DAT_80198ccc + (uint)DAT_8019ecff * 2) + -0xc;
LAB_80108db4:
          *DAT_8019ed54 = sVar7;
          DAT_8019ecff = DAT_8019ecff + 1;
        }
        else {
          if (DAT_8019ed00 == '\x02') {
            FUN_801094a0();
            sVar7 = *(short *)(&DAT_80198ccc + (uint)DAT_8019ecff * 2) + -0x10;
            goto LAB_80108db4;
          }
          FUN_801094a0();
          FUN_800f8fb8(0x19);
          FUN_800f5140();
          FUN_800f4f4c();
          uVar9 = FUN_800f3c3c(0x19);
          FUN_800f7a40(uVar9);
          FUN_800f5140();
          FUN_800f4f4c();
          uVar9 = FUN_800f3c3c(0x19);
          FUN_800f7a40(uVar9);
          FUN_800f5140();
          FUN_800f4f4c();
          uVar9 = FUN_800f3c3c(0x19);
          FUN_800f7a40(uVar9);
          FUN_800f824c(0x18);
          FUN_800f7270(0x18);
        }
        FUN_800f8d00(0x8f4);
        FUN_800f71dc(0);
        FUN_800f8d00(0x8f6);
      }
      else {
        FUN_801094a0();
        FUN_800f8188(0x1e01);
        FUN_800f654c(1);
        FUN_800f8188(0x1e00);
        FUN_80169128();
      }
    }
    else {
      FUN_800f654c(0xff);
      do {
        uVar1 = *DAT_8019ed58;
        sVar7 = (short)((uint)uVar1 % 0x30);
        if ((uint)uVar1 % 0x30 < 0x18) {
          uVar9 = 0x774;
          uVar3 = (uVar1 / 0x30) * 0x18 + sVar7;
        }
        else {
          uVar9 = 0x834;
          uVar3 = ((uVar1 / 0x30) * 0x18 + sVar7) - 0x18;
        }
        *DAT_8019ed58 = uVar3;
        FUN_800f8960(uVar9);
        *DAT_8019ed58 = uVar1;
        FUN_800f63bc();
        FUN_800f5a90(0x30);
        iVar6 = FUN_800f53d4();
        if (iVar6 != 0) break;
        FUN_800f5a90(0x60);
        iVar6 = FUN_800f53d4();
        if (iVar6 != 0) break;
        FUN_800f5a90(0x90);
        iVar6 = FUN_800f53d4();
        if (iVar6 != 0) break;
        FUN_800f5a90(0xc0);
        iVar6 = FUN_800f53d4();
      } while (iVar6 == 0);
LAB_80109068:
      FUN_800f8ebc(0x3d);
    }
LAB_801092e4:
    FUN_800f7210(0x772);
    FUN_800f6364();
    FUN_800f8d00(0x772);
    FUN_800f7594(0x3d);
    FUN_800f5a90(0xc0);
    iVar6 = FUN_800f53d4();
    if (iVar6 != 0) goto LAB_8010931c;
  }
  FUN_800f654c(0xff);
  do {
    uVar1 = *DAT_8019ed58;
    sVar7 = (short)((uint)uVar1 % 0x30);
    if ((uint)uVar1 % 0x30 < 0x18) {
      uVar9 = 0x774;
      uVar3 = (uVar1 / 0x30) * 0x18 + sVar7;
    }
    else {
      uVar9 = 0x834;
      uVar3 = ((uVar1 / 0x30) * 0x18 + sVar7) - 0x18;
    }
    *DAT_8019ed58 = uVar3;
    FUN_800f8960(uVar9);
    *DAT_8019ed58 = uVar1;
    FUN_800f63bc();
    FUN_800f5a90(0x180);
    iVar11 = FUN_800f53d4();
    uVar9 = 1;
  } while (iVar11 == 0);
LAB_801091f8:
  FUN_800f654c(uVar9);
  FUN_800f824c(0xde);
LAB_8010931c:
  FUN_801094d8();
  FUN_800f5574(0);
  iVar11 = FUN_800f53d4();
  if (iVar11 != 0) {
    FUN_800f654c(1);
    FUN_800f824c(0xde);
  }
  FUN_800f654c(1);
  FUN_800f824c(0xed);
  return;
}



