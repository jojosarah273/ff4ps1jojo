
void FUN_80152cdc(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_800f3c3c(0);
  iVar3 = FUN_800f3b04(0x2000);
  uVar1 = *DAT_8019ed40;
  *(undefined1 *)(iVar3 + 0x152f) = uVar1;
  *(undefined1 *)(iVar2 + 0xdf) = uVar1;
  *(undefined1 *)(iVar2 + 0xe1) = 0x80;
  FUN_8015240c();
  *(undefined1 *)(iVar2 + 0xa6) = *(undefined1 *)(iVar2 + 0xe3);
  *(undefined1 *)(iVar2 + 0xa7) = *(undefined1 *)(iVar2 + 0xe4);
  uVar1 = *(undefined1 *)(iVar3 + 0x152f);
  *(undefined1 *)(iVar2 + 0xe1) = 0x15;
  *(undefined1 *)(iVar2 + 0xdf) = uVar1;
  FUN_8015240c();
  *(undefined1 *)(iVar3 + 0x1530) = *(undefined1 *)(iVar2 + 0xe3);
  *(undefined1 *)(iVar3 + 0x1531) = *(undefined1 *)(iVar2 + 0xe4);
  *(undefined1 *)(iVar2 + 0xdf) = *(undefined1 *)(iVar3 + 0x152f);
  *(undefined1 *)(iVar2 + 0xe1) = 0x37;
  FUN_8015240c();
  *(undefined1 *)(iVar3 + 0x1532) = *(undefined1 *)(iVar2 + 0xe3);
  *(undefined1 *)(iVar3 + 0x1533) = *(undefined1 *)(iVar2 + 0xe4);
  *(undefined1 *)(iVar2 + 0xdf) = *(undefined1 *)(iVar3 + 0x152f);
  *(undefined1 *)(iVar2 + 0xe1) = 0x1c;
  FUN_8015240c();
  *(undefined1 *)(iVar3 + 0x1534) = *(undefined1 *)(iVar2 + 0xe3);
  uVar1 = *(undefined1 *)(iVar2 + 0xe4);
  *(undefined1 *)(iVar3 + 0x193d) = *(undefined1 *)(iVar3 + 0x152f);
  *(undefined1 *)(iVar3 + 0x193e) = 0;
                    /* Possible PsyQ macro: setPolyF3() */
  *(undefined1 *)(iVar3 + 0x193f) = 0x20;
  *(undefined1 *)(iVar3 + 0x1940) = 1;
  *(undefined1 *)(iVar3 + 0x1535) = uVar1;
  FUN_8015236c();
  *(undefined1 *)(iVar3 + 0x1536) = *(undefined1 *)(iVar3 + 0x1941);
  *(undefined1 *)(iVar3 + 0x1537) = *(undefined1 *)(iVar3 + 0x1942);
  return;
}



