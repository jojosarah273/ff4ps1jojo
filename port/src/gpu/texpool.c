/* FF4 source-port — gpu/texpool.c
 *
 * Texture-pool packet relink: swaps the low 24 bits of the two
 * pointers (packet chaining in the DMA list). Exact mirror.
 *
 * Ground truth: src/tex_link_packets.c (byte-verified).
 */
#include <stdint.h>

/* 80197208: relink prim<->p (low 24-bit address swap). */
void tex_link_packets(uint32_t *prim, uint32_t *p)
{
    *p = (*p & 0xFF000000) | (*prim & 0xFFFFFF);
    *prim = (*prim & 0xFF000000) | ((uint32_t)(uintptr_t)p & 0xFFFFFF);
}
