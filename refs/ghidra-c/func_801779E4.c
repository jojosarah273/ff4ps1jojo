
void FUN_801779e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar1 = (short)DAT_8019ee40 * 0x14d10;
  DrawSync(0);
  DAT_8019ee32 = 1;
  VSync(0);
  bVar3 = DAT_800d2106 & 3;
  if (bVar3 != 2) {
    if (2 < bVar3) {
      if (bVar3 == 3) {
        iVar4 = (int)(short)DAT_8019ee40;
        FUN_80184af8(iVar4,iVar4,iVar4,&UNK_801a0b8c + iVar1);
      }
      goto LAB_80177acc;
    }
    if (bVar3 != 1) goto LAB_80177acc;
  }
  iVar4 = (int)(short)DAT_8019ee40;
  FUN_80184af8(iVar4,iVar4,iVar4,&UNK_801a0b68 + iVar1);
LAB_80177acc:
  DrawOTag((u_long *)(&DAT_801a0b00 + iVar1));
  FUN_8017841c();
  DAT_8019fff0 = (ushort)DAT_800d2127 - (ushort)DAT_800d2126;
  DAT_8019ffec = (ushort)DAT_800d2126;
  FUN_80178c14();
  DAT_8019ed78 = 0;
  if (param_1 != 0) {
    FUN_80106cd4();
    FUN_800fef7c();
  }
  DAT_8019fff0 = (ushort)DAT_800d2127 - (ushort)DAT_800d2126;
  DAT_8019ffec = (ushort)DAT_800d2126;
  if (DAT_801e01b8 == 0x2a) {
    DAT_801a022c = DAT_8019ffee;
    DAT_801a0230 = DAT_8019fff2;
    DAT_801a0226 = DAT_8019ee60;
    DAT_801a0228 = DAT_8019ee68;
    DAT_801a022a = DAT_8019ffec;
    DAT_801a022e = DAT_8019fff0;
  }
  if (DAT_801e01bc == 0x12) {
    DAT_801a00dc = DAT_8019ffee;
    DAT_801a00e0 = DAT_8019fff2;
    DAT_801a00d6 = DAT_8019ee62;
    DAT_801a00d8 = DAT_8019ee6a;
    DAT_801a00da = DAT_8019ffec;
    DAT_801a00de = DAT_8019fff0;
  }
  FUN_80185ac8();
  PutDrawEnv((DRAWENV *)&DAT_801a0a30);
  DAT_8019ee40 = DAT_8019ee40 ^ 1;
  iVar1 = (short)DAT_8019ee40 * 0x14d10;
  puVar5 = &DAT_801a0a90 + iVar1;
  DAT_8019ee50 = FUN_8017794c(&DAT_800d06ad);
  uVar2 = FUN_80177790(&DAT_801ca4e0,DAT_8019ee28);
  DAT_8019ee70 = 0;
  DAT_8019edec = 0;
  ClearOTag((u_long *)(&DAT_801a0b00 + iVar1),0x29);
  FUN_8017d078(puVar5,uVar2,0);
  FUN_8017e220(puVar5,&DAT_800d0300,uVar2);
  FUN_80182cb4(puVar5);
  FUN_8017e740(puVar5);
  FUN_80178d00(puVar5);
  if (DAT_8019ecfc == '\x01') {
    FUN_80183a80(puVar5);
  }
  else {
    if (DAT_800d0203 == '\x02') {
      FUN_80185380(&UNK_801a0b48 + iVar1,DAT_8019eeb4);
      FUN_8017e794(puVar5,&DAT_801a0004,0);
      return;
    }
    if ((((DAT_800d2105 & 7) == 7) && ((DAT_800d212c & 1) != 0)) &&
       (((DAT_8019ee28 != 0 && (DAT_8019ee28 != 0x100)) || ((DAT_8019ee2c & 0x1000) == 0)))) {
      if (DAT_8019ed08 == '\0') {
        FUN_80183244(puVar5);
      }
      else {
        FUN_80183f40(puVar5);
      }
    }
  }
  FUN_8017e794(puVar5,&DAT_801a0004,0);
  return;
}



