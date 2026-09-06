
void FUN_80178dd0(int param_1)

{
  FUN_801976e8();
  DAT_8019ee0c = OpenEvent(0xf4000001,4,0x2000,(func *)0x0);
  DAT_8019ee1c = OpenEvent(0xf4000001,0x8000,0x2000,(func *)0x0);
  DAT_8019ee38 = OpenEvent(0xf4000001,0x100,0x2000,(func *)0x0);
  DAT_8019edf8 = OpenEvent(0xf4000001,0x2000,0x2000,(func *)0x0);
  DAT_8019ee18 = OpenEvent(0xf0000011,4,0x2000,(func *)0x0);
  DAT_8019ee20 = OpenEvent(0xf0000011,0x8000,0x2000,(func *)0x0);
  DAT_8019ee3c = OpenEvent(0xf0000011,0x100,0x2000,(func *)0x0);
  DAT_8019edfc = OpenEvent(0xf0000011,0x2000,0x2000,(func *)0x0);
  FUN_801976f8();
  InitPAD(&DAT_801dfe68,0x22,&DAT_801dfe90,0x22);
  if (param_1 != 0) {
    InitCARD(1);
    StartCARD();
    _bu_init();
  }
  StartPAD();
  return;
}



