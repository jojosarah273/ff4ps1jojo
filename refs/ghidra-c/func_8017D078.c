
void FUN_8017d078(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined1 auStack_838 [2046];
  undefined2 local_3a;
  uint local_38;
  uint local_34;
  uint local_30;
  short *local_2c;
  
  if ((DAT_801dbcea == 0x2e9) && (DAT_801dbcf2 == 0x2fb)) {
    DAT_801dbc72 = 0x2f8;
    DAT_801dbcb2 = 0x2ff;
    DAT_801dbc74 = 0x2f9;
    DAT_801dbd32 = 0x2fd;
    DAT_801dbd34 = 0x2fe;
    DAT_801dbcec = 0x2ea;
    DAT_801dbcb4 = DAT_801dbcf2;
    DAT_801dbcf4 = DAT_801dbcf2;
    DAT_801dbcee = 0x2eb;
    DAT_801dbcf0 = 0x2eb;
    DAT_801dbcf2 = 0x2ec;
  }
  iVar6 = param_1 + 0x4370;
  DAT_8019ee88 = param_1 + 0x14d10;
  DAT_8019edf4 = &DAT_8019ffe8;
  if ((DAT_800d2105 & 7) == 7) {
    if ((param_2 & 1) != 0) {
      DAT_8019ffe8 = DAT_8019ee60;
      DAT_8019ffea = DAT_8019ee68;
      DAT_8019edf0 = DAT_800d2105 & 7;
      FUN_801825b8(auStack_838,&DAT_801cfd68,&DAT_8019edf0);
      local_3a = DAT_8019ee2c;
      FUN_8017a208(param_1,auStack_838,iVar6,&DAT_8019edf0);
    }
  }
  else {
    if (DAT_8019ee84 != 0) {
      DAT_8019ee84 = DAT_8019ee84 + -1;
    }
    local_38 = param_2 & 1;
    local_30 = param_2 & 8;
    local_34 = param_2 & 4;
    if ((param_2 & 2) != 0) {
      DAT_8019edf0 = 1;
      uVar8 = (uint)DAT_800d2108;
      uVar7 = 0x12;
      if (DAT_800d0203 != '\x02') {
        uVar7 = 0x11;
      }
      if (((uVar7 < 0x28) && (DAT_8019ee70 < 0xe1)) && (DAT_801e01bc != uVar7)) {
        puVar4 = &DAT_8019ffe8 + uVar7 * 7;
        do {
          DAT_8019edf4 = puVar4;
          FUN_8017db7c(uVar8 & 3,auStack_838,&DAT_801cfd68 + (uVar8 & 0xfc) * 0x100,&DAT_8019edf0);
          uVar7 = uVar7 + 1;
          local_3a = DAT_8019ee2e;
          iVar6 = FUN_8017a208(param_1,auStack_838,iVar6,&DAT_8019edf0);
          FUN_8017e794(param_1,puVar4,(int)(short)puVar4[5]);
          if ((0x27 < (int)uVar7) || (0xe0 < DAT_8019ee70)) break;
          puVar4 = puVar4 + 7;
        } while (DAT_801e01bc != uVar7);
      }
    }
    DAT_8019ee70 = 0;
    if ((local_30 != 0) && ((DAT_800d2105 & 7) == 0)) {
      DAT_8019edf0 = 3;
      DAT_8019edf4 = &DAT_801a0218;
      FUN_8017db7c(DAT_800d210a & 3,auStack_838,&DAT_801cfd68 + (DAT_800d210a & 0xfc) * 0x100,
                   &DAT_8019edf0);
      local_3a = DAT_8019ee30;
      iVar6 = FUN_8017a208(param_1,auStack_838,iVar6,&DAT_8019edf0);
      FUN_8017e794(param_1,&DAT_801a0218,(int)DAT_801a0222);
    }
    DAT_8019ee70 = 0;
    if (local_34 != 0) {
      uVar7 = (uint)DAT_800d2109;
      DAT_8019edf0 = 2;
      DAT_8019edf4 = &DAT_801a0012;
      if ((uVar7 & 3) == 1) {
        FUN_8017dc28(1,auStack_838,&DAT_801cfd68 + (uVar7 & 0xfc) * 0x100,&DAT_8019edf0);
      }
      else {
        FUN_8017db7c(uVar7 & 3,auStack_838,&DAT_801cfd68 + (uVar7 & 0xfc) * 0x100,&DAT_8019edf0);
      }
      uVar8 = uVar7 & 3;
      local_3a = DAT_8019ee30;
      if (uVar8 == 1) {
        iVar3 = 0;
        do {
          iVar2 = iVar3 * 3 + 2;
          if (((&DAT_8019f628)[iVar2] != 0) || (iVar3 = iVar3 + 1, (&DAT_8019f4a8)[iVar2] != 0)) {
            iVar6 = FUN_8017aac4(param_1,auStack_838,iVar6,&DAT_8019edf0);
            goto LAB_8017d4e4;
          }
        } while (iVar3 < 0x20);
      }
      iVar6 = FUN_8017a208(param_1,auStack_838,iVar6,&DAT_8019edf0);
LAB_8017d4e4:
      DAT_801a001f = 1;
      FUN_8017e794(param_1,&DAT_801a0012,(int)DAT_801a001c);
      iVar3 = 4;
      if ((DAT_8019ee70 < 0xe1) && (DAT_801e01c0 != 4)) {
        local_2c = &DAT_801a002a;
        puVar9 = &DAT_801a0020;
        puVar4 = puVar9;
        do {
          DAT_8019edf4 = puVar9;
          if ((iVar3 == 4) && (DAT_8019ede8 != 1)) {
            DAT_8019ee78 = 0;
            FUN_8017dc28(uVar8,auStack_838,&DAT_801cfd68 + (uVar7 & 0xfc) * 0x100,&DAT_8019edf0);
            local_3a = DAT_8019ee30;
            if (DAT_8019ee78 != 0) goto LAB_8017d618;
            iVar6 = FUN_8017aac4(param_1,auStack_838,iVar6,&DAT_8019edf0);
          }
          else {
            FUN_8017db7c(uVar8,auStack_838,&DAT_801cfd68 + (uVar7 & 0xfc) * 0x100,&DAT_8019edf0);
LAB_8017d618:
            local_3a = DAT_8019ee30;
            iVar6 = FUN_8017a208(param_1,auStack_838,iVar6,&DAT_8019edf0);
          }
          puVar9 = puVar9 + 7;
          iVar3 = iVar3 + 1;
          sVar1 = *local_2c;
          local_2c = local_2c + 7;
          FUN_8017e794(param_1,puVar4,(int)sVar1);
        } while (((iVar3 < 0x11) && (DAT_8019ee70 < 0xe1)) &&
                (puVar4 = puVar4 + 7, DAT_801e01c0 != iVar3));
      }
    }
    DAT_8019ee70 = 0;
    if ((local_38 & 0xff) != 0) {
      uVar7 = (uint)DAT_800d2107;
      iVar3 = 0x29;
      DAT_8019edf0 = 0;
      if (DAT_801e01b8 != 0x29) {
        psVar5 = &DAT_801a0230;
        puVar4 = &DAT_801a0226;
        do {
          DAT_8019edf4 = puVar4;
          FUN_8017db7c(uVar7 & 3,auStack_838,&DAT_801cfd68 + (uVar7 & 0xfc) * 0x100,&DAT_8019edf0);
          local_3a = DAT_8019ee2c;
          iVar6 = FUN_8017a208(param_1,auStack_838,iVar6,&DAT_8019edf0);
          if (DAT_800d0203 == '\x02') {
            FUN_8017e794(param_1,puVar4,(int)*psVar5);
            DAT_8019ee70 = DAT_8019ee70 - *psVar5;
            *(char *)(psVar5 + 1) = (char)psVar5[1] + '\x01';
          }
          sVar1 = *psVar5;
          psVar5 = psVar5 + 7;
          iVar3 = iVar3 + 1;
          FUN_8017e794(param_1,puVar4,(int)sVar1);
        } while (((iVar3 < 0xa0) && (DAT_8019ee70 < 0xe1)) &&
                (puVar4 = puVar4 + 7, DAT_801e01b8 != iVar3));
      }
    }
  }
  return;
}



