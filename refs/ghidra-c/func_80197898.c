
void FIRST_OBJ_D0(void)

{
  int in_zero;
  int iVar1;
  int in_v1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (in_v1 == 0) {
    FIRST_OBJ_180();
    return;
  }
  puVar3 = *(undefined4 **)(in_zero + 0x150);
  puVar2 = puVar3 + (*(uint *)(in_zero + 0x154) / 0x50) * 0x14;
  while( true ) {
    if (puVar2 <= puVar3) {
      firstfile2();
      return;
    }
    if (((char *)*puVar3 != (char *)0x0) &&
       (iVar1 = strcmp((char *)*puVar3,&DAT_801febc0), iVar1 == 0)) break;
    puVar3 = puVar3 + 0x14;
  }
  puVar3[0xd] = FIRST_OBJ_19C;
  FIRST_OBJ_174();
  return;
}



