
void FUN_800f95a0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  
  uVar3 = *DAT_8019ed4c;
  uVar1 = (&DAT_800d0001)[uVar3];
  uVar2 = (&DAT_800d0002)[uVar3];
  *DAT_8019ed4c = uVar3 + 2;
  *DAT_8019ed54 = CONCAT11(uVar1,uVar2);
  return;
}



