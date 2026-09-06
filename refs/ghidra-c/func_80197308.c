
/* Possible P11.OBJ/SetShadeTex */

void FUN_80197308(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 7) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 7) | 1;
  }
  *(byte *)(param_1 + 7) = bVar1;
  return;
}



