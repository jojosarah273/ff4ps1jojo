
uint FUN_800f3ab4(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x7ffc8000;
  if ((uint)*DAT_8019ed48 + (param_1 & 0xffff) < 0x8000) {
    puVar1 = &DAT_800d0000;
  }
  return (uint)*(uint3 *)(puVar1 + (param_1 & 0xffff) + (uint)*DAT_8019ed48);
}



