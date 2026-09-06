
/* WARNING: Control flow encountered bad instruction data */

void stup1(void)

{
  undefined4 unaff_retaddr;
  
  DAT_8019efa0 = unaff_retaddr;
  InitHeap((ulong *)&DAT_801fec1c,(DAT_8018a04c - DAT_8019ece4) - 0x1fec18);
  main();
  trap(1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



