/* FF4 source-port — event/eventq.c
 *
 * Battle/UI event-queue primitives. Exact mirrors of the Phase A
 * decodes; state cells from the D_8019B0xx/D_8019B1xx family exported
 * here with semantic names.
 * Ground truth: src/event_drive, 8018C608, 8018E0C8.
 */
#include <stdint.h>

/* --- exported state (was D_8019B0A0..D_8019B168) --- */
uint16_t  g_evrec[0x200];      /* D_8019B114 (status record)        */
uint32_t  g_evcell;            /* D_8019B12C                        */
uint32_t  g_evshift;           /* D_8019B13C                        */
uint32_t  g_evslot;            /* D_8019B164                        */
uint32_t  g_evuser;            /* D_8019B168                        */
uint32_t  g_evuser_b;          /* D_8019B118 (slot pointer)         */
uint32_t  g_evdirty;           /* D_8019B16C                        */
uint32_t  g_evkick;            /* D_8019B120                        */
uint32_t  g_maskbits;          /* D_8019B0A0                        */
uint32_t  g_maskflags;         /* D_8019B0CC                        */
uint32_t  g_maskarmed;         /* D_8019B100 (bit0 = queue armed)   */
uint16_t  g_maskrec[4];        /* D_801F6788                        */

extern void  event_drive_cb1(void);  /* 8018AC68 */
extern void  event_drive_cb2(void);  /* 8018AC40 */
extern uint16_t g_queue1[2];  /* D_801F6788 (aliased by g_maskrec)  */
extern uint16_t g_queue2[2];  /* D_801F6790                        */
extern uint16_t g_queue4[2];  /* D_801F6794                        */
extern uint16_t g_queue8[2];  /* D_801F6798                        */

static int32_t await_cell(uint16_t want)
{
    int32_t v = 1;
    if (g_evrec[0xD3] == want)
        return 0;
    for (; v < 0xF01; v++)
        if (g_evrec[0xD3] == want)
            return 0;
    return -2;
}
static int32_t await_flag(uint16_t want)
{
    int32_t v = 1;
    if ((g_evrec[0xD5] & 0x30) == want)
        return 0;
    for (; v < 0xF01; v++)
        if ((g_evrec[0xD5] & 0x30) == want)
            return 0;
    return -2;
}

/* 8018A75C */
int32_t event_drive(uint32_t mode, uint32_t arg1, uint32_t arg2)
{
    switch (mode) {
    case 0:
        g_evslot = arg2;
        if (await_cell((uint16_t)g_evcell) != 0)
            return -2;
        g_evrec[0xD5] |= 0x30;
        return 0;
    case 1:
        g_evslot = 0;
        if (await_cell((uint16_t)g_evcell) != 0)
            return -2;
        g_evrec[0xD5] = (uint16_t)((g_evrec[0xD5] & 0xFFCF) | 0x20);
        return 0;
    case 2:
        g_evcell = (uint16_t)(arg1 >> g_evshift);
        g_evrec[0xD3] = (uint16_t)g_evcell;
        return 0;
    case 3:
        if (await_flag((g_evslot == arg2) ? 0x30 : 0x20) != 0)
            return -2;
        if (g_evslot == 1)
            event_drive_cb1();
        else
            event_drive_cb2();
        {
            uint32_t *slot = (uint32_t *)g_evuser_b;
            slot[0] = g_evuser;
            g_evdirty = (arg1 >> 6) + ((arg1 & 0x3F) != 0);
            g_evkick = (g_evslot == 1) ? 0x1000200u : 0x1000201u;
        }
        return 0;
    }
    return 0;
}

/* 8018C608 */
void event_mask(uint32_t mode, uint32_t packed)
{
    uint16_t p = (uint16_t)(packed & 0xFFFFFF);
    uint16_t q = (uint16_t)((packed & 0xFFFFFF) >> 16);
    if (mode == 1) {
        if (g_maskarmed & 1) {
            g_maskrec[0] = p;
            g_maskrec[1] = q;
            g_maskflags |= 1;
            g_maskarmed &= ~p;
            if (g_maskrec[2] & p) g_maskrec[2] = (uint16_t)(g_maskrec[2] & ~p);
            if (g_maskrec[3] & q) g_maskrec[3] = (uint16_t)(g_maskrec[3] & ~q);
            g_evrec[0xD3] = (uint16_t)g_evcell; /* (unused alias) */
        } else {
            g_maskbits |= p;
            g_evrec[0xC4] = p;
            g_evrec[0xC5] = q;
        }
    } else if (mode == 0) {
        if (g_maskarmed & 1) {
            g_maskrec[2] = p;
            g_maskrec[3] = q;
            g_maskflags |= 1;
            g_maskarmed &= ~p;
            if (g_maskrec[0] & p) g_maskrec[0] = (uint16_t)(g_maskrec[0] & ~p);
            if (g_maskrec[1] & q) g_maskrec[1] = (uint16_t)(g_maskrec[1] & ~q);
        } else {
            g_evrec[0xC6] = p;
            g_evrec[0xC7] = q;
            g_maskbits &= ~p;
        }
    }
}

/* 8018E0C8 */
int32_t event_drain(uint32_t want)
{
    int32_t got = 0;
    if (want == 0 || (want & 2)) {
        if (g_maskflags & 2) {
            g_maskflags &= ~2;
            g_evrec[0xC8] = g_queue2[0];
            g_evrec[0xC9] = g_queue2[1];
            got |= 2;
        }
    }
    if (want == 0 || (want & 4)) {
        if (g_maskflags & 4) {
            g_maskflags &= ~4;
            g_evrec[0xCA] = g_queue4[0];
            g_evrec[0xCB] = g_queue4[1];
            got |= 4;
        }
    }
    if (want == 0 || (want & 8)) {
        if (g_maskflags & 8) {
            g_maskflags &= ~8;
            g_evrec[0xCC] = g_queue8[0];
            g_evrec[0xCD] = g_queue8[1];
            got |= 8;
        }
    }
    if (want == 0 || (want & 1)) {
        if (g_maskflags & 1) {
            g_maskflags &= ~1;
            g_evrec[0xC4] = g_queue1[0];
            g_evrec[0xC5] = g_queue1[1];
            got |= 1;
        }
    }
    return got;
}
