
void FUN_8010c1ac(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 local_18;
  
  iVar2 = FUN_800f3b9c(0x7f5c71,0);
  iVar3 = FUN_800f3b04(0xedb);
  iVar4 = FUN_800f3c3c(0);
  FUN_800f9330();
  *DAT_8019ed40 = *(byte *)(iVar4 + 0xc);
  if ((*DAT_8019ed40 & 0x80) == 0) {
    *(byte *)(iVar4 + 0x3d) = *DAT_8019ed40;
    *DAT_8019ed40 = *(byte *)(iVar4 + 0xe);
    if ((*DAT_8019ed40 & 0x80) == 0) {
      *(byte *)(iVar4 + 0x3e) = *DAT_8019ed40;
      *DAT_8019ed5c = *(undefined1 *)(iVar4 + 0x3d);
      DAT_8019ed5c[1] = *(undefined1 *)(iVar4 + 0x3e);
      uVar1 = *(undefined1 *)(iVar2 + (uint)*DAT_8019ed54);
      *(undefined1 *)(iVar4 + 0x3e) = 0;
      *(undefined1 *)(iVar4 + 0x3d) = uVar1;
      local_18 = CONCAT11(*(undefined1 *)(iVar4 + 0x3e),uVar1);
      local_18 = local_18 << 1;
      *(undefined1 *)(iVar4 + 0x3d) = (undefined1)local_18;
      local_18._1_1_ = (undefined1)((ushort)local_18 >> 8);
      *(undefined1 *)(iVar4 + 0x3e) = local_18._1_1_;
      *DAT_8019ed5c = (undefined1)local_18;
      DAT_8019ed5c[1] = *(undefined1 *)(iVar4 + 0x3e);
      *DAT_8019ed40 = *(byte *)(iVar3 + (uint)*DAT_8019ed54) & 0x83;
      goto LAB_8010c348;
    }
  }
  *DAT_8019ed40 = 0;
LAB_8010c348:
  FUN_800f95a0();
  return;
}



