#include "common.h"
extern int func_80197F14(void);
extern int func_80197F24(int a);
int func_80197EE8(int a) {
    if (-1 < a) {
        func_80197F24(a & 0xFFF);
        return func_80197F14();
    }
    return -func_80197F24(-a & 0xFFF);
}
