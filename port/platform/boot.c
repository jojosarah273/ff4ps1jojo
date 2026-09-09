/* FF4 source-port — platform/boot.c
 *
 * Native boot (Phase B.2): SDL window + the config-menu driver once the
 * device layer maps the window API to the screen. In the meantime this
 * runs a finite smoke loop so `make native` produces a runnable binary
 * that exits cleanly (the deck linked with stubs).
 */
#include <stdint.h>

void platform_open_window(const char *title, int w, int h)
{
    /* device-layer hook: opens the SDL window (Phase B.2). */
    (void)title; (void)w; (void)h;
}
int ff4_deck_symbols(void);   /* compile-time marker */

int ff4_native_main(int argc, char **argv)
{
    int i;
    (void)argc; (void)argv;
    platform_open_window("FF4 native", 640, 480);
    for (i = 0; i < 3; i++) {
        /* event pump + config-menu run, once the device layer exists */
    }
    return 0;
}
