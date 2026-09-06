
/* WARNING: Removing unreachable block (ram,0x801923b4) */
/* WARNING: Removing unreachable block (ram,0x801923e0) */
/* WARNING: Removing unreachable block (ram,0x801923ec) */
/* WARNING: Removing unreachable block (ram,0x80192420) */
/* WARNING: Removing unreachable block (ram,0x80192438) */
/* WARNING: Removing unreachable block (ram,0x8019243c) */
/* WARNING: Removing unreachable block (ram,0x80192344) */
/* WARNING: Removing unreachable block (ram,0x80192454) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CdReadBreak(void)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_8019b9c8 & 1) != 0) {
    FUN_80192888(0);
  }
  DAT_8019bda8 = 0;
  if (DAT_8019bdb8 == 0) {
    CDR_1_OBJ_634();
    return;
  }
  iVar1 = VSync(-1);
  do {
    if (DAT_8019bdb8 == 0) {
      return;
    }
    iVar2 = VSync(-1);
  } while ((uint)(iVar2 - iVar1) < 0x79);
  FUN_80191838(DAT_8019bdbc);
  DAT_8019bdb8 = 0;
  CDR_1_OBJ_634();
  return;
}



