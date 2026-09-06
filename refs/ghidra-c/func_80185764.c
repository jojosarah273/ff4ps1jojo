
void FUN_80185764(int param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 1) {
    uVar3 = 0x8c;
    iVar1 = 0x12;
    while ((iVar4 = DAT_801e01c0, iVar1 < 0x23 &&
           (iVar5 = FUN_80185634(param_1,uVar3,0xfd), iVar4 = DAT_801e01c0, iVar5 < 0xe0))) {
      puVar2 = (undefined2 *)(iVar5 * 4 + param_1);
      (&DAT_8019ffe8)[iVar1 * 7] = *puVar2;
      (&DAT_8019ffea)[iVar1 * 7] = puVar2[1];
      (&DAT_8019ffee)[iVar1 * 7] = (short)iVar5 + 1;
      uVar3 = FUN_8018567c(param_1,iVar5,0xfd);
      (&DAT_8019fff2)[iVar1 * 7] = (short)uVar3 - (short)iVar5;
      iVar1 = iVar1 + 1;
    }
  }
  else {
    iVar4 = DAT_801e01c0;
    iVar1 = DAT_801e01bc;
    if (param_2 < 2) {
      if (param_2 == 0) {
        iVar1 = FUN_801856cc(param_1,0,0xfe);
        puVar2 = (undefined2 *)(iVar1 * 4 + param_1);
        DAT_801a0226 = *puVar2;
        DAT_801a0228 = puVar2[1];
        DAT_801a022c = (short)iVar1 + 1;
        uVar3 = FUN_80185714(param_1,iVar1,0xfe);
        DAT_801a0230 = (short)uVar3 - (short)iVar1;
        iVar1 = 0x2a;
        while ((iVar1 < 0xa0 && (iVar4 = FUN_801856cc(param_1,uVar3,0xfe), iVar4 < 0x90))) {
          puVar2 = (undefined2 *)(iVar4 * 4 + param_1);
          (&DAT_8019ffe8)[iVar1 * 7] = *puVar2;
          (&DAT_8019ffea)[iVar1 * 7] = puVar2[1];
          (&DAT_8019ffee)[iVar1 * 7] = (short)iVar4 + 1;
          uVar3 = FUN_80185714(param_1,iVar4,0xfe);
          (&DAT_8019fff2)[iVar1 * 7] = (short)uVar3 - (short)iVar4;
          iVar1 = iVar1 + 1;
        }
        DAT_801e01b8 = iVar1;
        iVar1 = DAT_801e01bc;
        iVar4 = DAT_801e01c0;
        if (0x8c < (int)DAT_801a0230 + (int)DAT_801a022c) {
          DAT_801a0230 = 0x8c - DAT_801a022c;
          DAT_801e01b8 = 0x2a;
          if (((DAT_800d4700 & 0xffffff00) == 0x80600000) && (DAT_801a0228 < -0x7f)) {
            DAT_801e01b8 = 0x29;
          }
        }
      }
    }
    else if (param_2 == 2) {
      iVar1 = FUN_80185634(param_1,0,0xfe);
      puVar2 = (undefined2 *)(iVar1 * 4 + param_1);
      DAT_801a0012 = *puVar2;
      DAT_801a0014 = puVar2[1];
      DAT_801a0018 = (short)iVar1 + 1;
      uVar3 = FUN_8018567c(param_1,iVar1,0xfe);
      DAT_801a001c = (short)uVar3 - (short)iVar1;
      iVar4 = 4;
      while ((iVar1 = DAT_801e01bc, iVar4 < 0x11 &&
             (iVar5 = FUN_80185634(param_1,uVar3,0xfe), iVar1 = DAT_801e01bc, iVar5 < 0xe0))) {
        puVar2 = (undefined2 *)(iVar5 * 4 + param_1);
        (&DAT_8019ffe8)[iVar4 * 7] = *puVar2;
        (&DAT_8019ffea)[iVar4 * 7] = puVar2[1];
        (&DAT_8019ffee)[iVar4 * 7] = (short)iVar5 + 1;
        uVar3 = FUN_8018567c(param_1,iVar5,0xfe);
        (&DAT_8019fff2)[iVar4 * 7] = (short)uVar3 - (short)iVar5;
        iVar4 = iVar4 + 1;
      }
    }
  }
  DAT_801e01c0 = iVar4;
  DAT_801e01bc = iVar1;
  return;
}



