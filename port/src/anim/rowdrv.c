/* FF4 source-port — anim/rowdrv.c
 *
 * Small battle-anim row drivers: each "row" is a command chain pushed
 * into the GPU-command stream by the window layer. Function ids map:
 *   anim_cmd        = 80197xxx GPU-command fence
 *   anim_flags_row  = 80194394 (row pair dispatch)
 *   anim_channel    = 801947B8
 *   g_io_just       = 800F53D4 (poll gate)
 * Ground truth: src/func_8017F644, 80178730, 801782C0, 80176F88,
 * 801795BC, 80178A58, 8017890C, 801776E8.
 */
#include <stdint.h>

extern int32_t g_io_just(void);   /* 800F53D4 */

void anim_cmd(void);              /* 80197208 (wait fence)          */
void anim_cmd_w(void);            /* 801970A8                       */
void anim_cmd_s(void);            /* 80197168                       */
void anim_cmd_sd(void);           /* 80197168 with arg              */
void anim_cmd_w1(void);           /* 801970A8 with arg              */
void anim_cmd_pole(void);         /* 801971E8                       */
void anim_cmd_g(void);            /* 801973B8 (GPU control word)    */
void anim_flags_row(void);        /* 80194394                       */
void anim_channel(void);          /* 801947B8                       */
void anim_chain1(void);           /* 801928C8                       */
void anim_chain2(void);           /* 80192BEC                       */
void anim_mix(void);              /* 800F9BD0                       */
void anim_scribble(void);         /* 80198208 / 801981D8           */

/* 8017F644: 6x GPU words, gate, 1 (+7) more. */
void anim_row_rep14(void)
{
    int32_t i;
    for (i = 0; i < 6; i++)
        anim_cmd_g();
    if (g_io_just() != 0) {
        anim_cmd_g();
        for (i = 0; i < 7; i++)
            anim_cmd_g();
        return;
    }
    anim_cmd_g();
}

/* 80178730 */
void anim_row_mixed(void)
{
    anim_cmd_w();
    anim_cmd_w();
    anim_cmd_s();
    anim_cmd_s();
    anim_cmd_w();
    anim_cmd_sd();   /* arg 0xE0 */
    anim_cmd_w1();   /* arg 1   */
    while (g_io_just() != 0)
        anim_cmd_pole();
}

/* 801782C0 */
void anim_row_triple(void)
{
    anim_cmd_w1();
    anim_cmd_w1();
    anim_row_rep14();
}

/* 80176F88 */
void anim_row_cat(void)
{
    /* 3B04(0x300), 3B9C x2, 9330, 95A0 */
    anim_cmd_w1();   /* nearest catalog access */
    anim_cmd();      /* flags */
}
