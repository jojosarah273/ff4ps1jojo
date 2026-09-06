
void FUN_800fdd28(void)

{
  uint uVar1;
  uint uVar2;
  
  FUN_800f654c(0x80);
  FUN_800f8188(0x2115);
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1 & 0xffff;
    (&DAT_800e7c00)[uVar1] = (char)((ushort)(&DAT_801cfd68)[uVar1 + 0x3800] >> 8);
    uVar1 = uVar2;
  } while (uVar2 < 0x100);
  return;
}



