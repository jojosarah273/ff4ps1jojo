
void FUN_8015254c(void)

{
  ushort uVar1;
  int iVar2;
  undefined2 local_10;
  
  iVar2 = FUN_800f3b04(0x2000);
  *(undefined1 *)(iVar2 + 0x1949) = 0;
  *(undefined1 *)(iVar2 + 0x194a) = 0;
  *(undefined1 *)(iVar2 + 0x194b) = 0;
  *(undefined1 *)(iVar2 + 0x194c) = 0;
  local_10 = CONCAT11(*(undefined1 *)(iVar2 + 0x1946),*(undefined1 *)(iVar2 + 0x1945));
  if (local_10 != 0) {
    uVar1 = *(ushort *)(iVar2 + 0x1947);
    if (uVar1 != 0) {
      if (uVar1 == 0) {
        trap(7);
      }
      *(ushort *)(iVar2 + 0x1949) = local_10 / uVar1;
      if (uVar1 == 0) {
        trap(7);
      }
      *(ushort *)(iVar2 + 0x194b) = local_10 % uVar1;
    }
  }
  return;
}



