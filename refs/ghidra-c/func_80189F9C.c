
/* WARNING: Control flow encountered bad instruction data */
/* Possible 2MBYTE.OBJ/stup2
   Possible 2MBYTE.OBJ/__SN_ENTRY_POINT */

void start(void)

{
  undefined4 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = (undefined4 *)&DAT_8019ed30;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 < &UNK_801fec18);
  DAT_8019efa0 = unaff_retaddr;
  InitHeap((ulong *)&DAT_801fec1c,(DAT_8018a04c - DAT_8019ece4) - 0x1fec18);
  main();
  trap(1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



