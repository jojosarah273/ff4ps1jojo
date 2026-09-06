
void FUN_8017ea90(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = param_1 & 0x1f;
  if ((param_1 & 0x80) != 0) {
    DAT_8019ee7a = uVar1;
  }
  if ((param_1 & 0x40) != 0) {
    DAT_8019ee7c = uVar1;
  }
  if ((param_1 & 0x20) != 0) {
    DAT_8019ee7e = uVar1;
  }
  return;
}



