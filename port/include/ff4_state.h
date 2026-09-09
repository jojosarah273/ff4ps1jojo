/* FF4 source-port — ff4_state.h
 *
 * Typed views over the raw PS1 cell state. The interpreted deck still
 * binds to the flat D_8019EDxx globals (port/src/db/cells.c) so the
 * byte-exact legacy modules keep working; NEW interpreted code and the
 * device layer talk to state through these structs instead (the
 * SoH-style readability layer).
 *
 * The accessors are mirrors - they move the same bytes, never
 * reinterpret them.
 */
#ifndef FF4_PORT_STATE_H
#define FF4_PORT_STATE_H

#include <stdint.h>

/* The 0x800F cell-register file under the window API. Every menu
 * screen advances/draws through these six words. */
typedef struct menu_cell_state {
    uint32_t ticker;    /* D_8019ED40: cursor flash/advance byte       */
    uint32_t pos;       /* D_8019ED44: position counter (u16)          */
    uint32_t cursor;    /* D_8019ED4C: cell cursor offset (u16)        */
    uint32_t cell;      /* D_8019ED50: current merged cell word        */
    uint32_t delta;     /* D_8019ED54: delta register (u16)            */
    uint32_t mask;      /* D_8019ED68: cursor-show mask byte           */
} menu_cell_state_t;

void menu_cell_read(menu_cell_state_t *st);
void menu_cell_apply(const menu_cell_state_t *st);

/* Host input latch (SDL: PS1 pad bits). */
typedef struct input_state {
    uint32_t pad;       /* held pad bits (PS1 conventions)             */
    uint32_t pressed;   /* request-quit / fast bit                     */
    uint32_t keypress;  /* any-key press flash                         */
} input_state_t;

#endif