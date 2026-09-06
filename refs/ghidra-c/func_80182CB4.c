
void FUN_80182cb4(int param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  
  if ((((DAT_800d1702 == 'l') && (DAT_800d1701 == '\0')) && ((DAT_800d2105 & 7) == 1)) &&
     (DAT_800d0203 == '\0')) {
    uVar2 = (undefined1)((int)((DAT_800d2100 & 0xf) * 0x7d) >> 3);
    *(undefined1 *)(param_1 + 0x304) = uVar2;
    *(undefined1 *)(param_1 + 0x305) = uVar2;
    *(undefined1 *)(param_1 + 0x306) = uVar2;
    AddPrim((void *)(param_1 + 0x70),(void *)(param_1 + 0x300));
  }
  else if (DAT_8019ed04 == '\x01') {
    uVar1 = CONCAT11(DAT_800d0bdc,DAT_800d0bdb);
    *(char *)(param_1 + 0x304) = DAT_800d0bdb << 3;
    *(byte *)(param_1 + 0x305) = (byte)(uVar1 >> 2) & 0xf8;
    *(byte *)(param_1 + 0x306) = (byte)(uVar1 >> 7) & 0xf8;
    AddPrim((void *)(param_1 + 0x70),(void *)(param_1 + 0x300));
    DAT_8019ed04 = '\0';
  }
  return;
}



