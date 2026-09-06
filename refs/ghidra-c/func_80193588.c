
void SetDumpFnt(int id)

{
  if ((-1 < id) && (id <= DAT_8019d0f4)) {
    PTR_printf_8019db50 = FntPrint;
    DAT_8019d0f8 = id;
  }
  return;
}



