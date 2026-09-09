/* FF4 source-port — dev/device.c
 *
 * Device command chains: seed the DMA/command registers, poll the
 * start flag, kick the chain, finalize (Phase A decodes).
 * Ground truth: src/func_80191C78, 80192768.
 */
#include <stdint.h>

#define CHAIN_LIVE 0x40
#define KICK_BUSY  0x1000000

typedef struct cmd_pts {
    volatile uint8_t  *live;   /* +0x00: armed/live byte  */
    volatile uint8_t  *busy;   /* +0x04: busy byte        */
    volatile uint32_t *op;     /* +0x08: opword           */
    volatile uint32_t *arg;    /* +0x0C: operand          */
    volatile uint32_t *aux;    /* +0x10: aux              */
    volatile uint32_t *kick;   /* +0x14: kick             */
    volatile uint32_t *fin;    /* +0x18: finish           */
} cmd_pts;

/* 80191C78: 0x20943 CVT chain with 0x1323/0x1325 opwords. */
void device_chain_a(uint32_t a0, uint32_t a1)
{
    cmd_pts *c = device_pts_a();            /* D_8019BD74..90 */
    *c->live = 0;
    *c->busy = 0x80;
    *c->op = 0x20943;
    *c->arg = 0x1323;
    *c->aux |= 0x8000;
    *c->fin = a0;
    device_pts_a()->kick = a1 | 0x10000;
    while ((*c->live & CHAIN_LIVE) == 0)
        ;
    *c->kick = 0x11000000;
    while (*c->kick & KICK_BUSY)
        ;
    *c->arg = 0x1325;
}

/* 80192768: 0x21020843 chain, 0x11400100 kick, no completion poll. */
void device_chain_b(uint32_t a0, uint32_t a1)
{
    cmd_pts *c = device_pts_b();            /* D_8019BDD4..F0 */
    *c->live = 0;
    *c->busy = 0x80;
    *c->op = 0x21020843;
    *c->arg = 0x1325;
    *c->aux |= 0x8000;
    *c->fin = a0;
    device_pts_b()->kick = a1 | 0x10000;
    while ((*c->live & CHAIN_LIVE) == 0)
        ;
    *c->kick = 0x11400100;
}
