#include "common.h"
void func_80141E80(void)
{
    /* battle cast: 0x6CC0 test, 53D4/6434(2) gates; 8058(8) reads. */
    func_800F9330();
    func_800F6564();
    func_800F5480();
    func_800F8058(8);
    func_800F8188();
    if (func_800F53D4() == 0)
        goto L141EC8;
    func_800F6240();
L141EC8:
    func_800F6564();
    if (func_800F6434(2) != 0)
        goto L141F3C;
    func_800F6564();
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto L141F3C;
    func_800F6564();
    func_800F6C68();
    func_800F8188();
    func_800F6240();
L141F3C:
    func_800F95A0();
    return;
}
