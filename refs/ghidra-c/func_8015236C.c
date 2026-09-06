
void FUN_8015236c(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  
  iVar2 = FUN_800f3b04(0x2000);
  local_18 = (uint)*(ushort *)(iVar2 + 0x193d);
  local_14 = (uint)*(ushort *)(iVar2 + 0x193f);
  iVar1 = local_18 * local_14;
  local_10 = (undefined1)iVar1;
  *(undefined1 *)(iVar2 + 0x1941) = local_10;
  uStack_f = (undefined1)((uint)iVar1 >> 8);
  *(undefined1 *)(iVar2 + 0x1942) = uStack_f;
  uStack_e = (undefined1)((uint)iVar1 >> 0x10);
  *(undefined1 *)(iVar2 + 0x1943) = uStack_e;
  uStack_d = (undefined1)((uint)iVar1 >> 0x18);
  *(undefined1 *)(iVar2 + 0x1944) = uStack_d;
  return;
}



