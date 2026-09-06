
void _copy_memcard_patch(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)&DAT_0000df80;
  puVar2 = &PATCH_OBJ_44;
  do {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (puVar2 != &PATCH_OBJ_B4);
  return;
}



