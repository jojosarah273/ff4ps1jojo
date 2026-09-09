/* FF4 source-port — interpreted module for func_80123B00.
 * Ground truth: src/func_80123B00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4248();
extern int func_800F5410();
extern int func_800F654C();
extern int func_800F6D70();
extern int func_800F7A68();
extern int func_800F7C6C();
extern int func_800F824C();
extern int func_800F9200();
extern int func_800F9330();
extern int func_800F939C();
extern int func_800F93DC();
extern int func_800F95A0();
extern int func_800F960C();
extern int func_80123BD8();

void func_80123B00(void)

{
  func_800F9200();
  row_open();
  row_sync();
  func_800F6D70(3);
  row_read(0x80);
  sep_a();
  func_800F7C6C();
  func_800F7A68();
  func_800F7C6C();
  func_800F7A68();
  func_800F7C6C();
  func_800F7A68();
  func_800F7C6C();
  cell_put(0x45);
  latch(7);
  func_80123BD8();
  func_80123BD8();
  latch(0xe);
  func_80123BD8();
  func_80123BD8();
  func_80123BD8();
  row_done();
  row_close();
  row_close2();
  return;
}



