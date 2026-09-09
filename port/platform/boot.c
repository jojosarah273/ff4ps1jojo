/* FF4 source-port — platform/boot.c
 *
 * Native boot skeleton (Phase B.2): SDL2 window + the config-menu
 * driver, once the device layer maps the window API to the screen.
 * Compiles standalone; the renderer seam is the next milestone.
 * Ground truth: none — this is port-native code (not a decomp mirror).
 */
#include <stdint.h>

/* window API (port/include/ff4_window.h) — device-backed later */
void platform_open_window(const char *title, int w, int h);

int ff4_native_main(int argc, char **argv)
{
    (void)argc; (void)argv;
    platform_open_window("FF4 native", 640, 480);
    for (;;) {
        /* event pump + config-menu run, once the device layer exists */
        if (0)
            break;
    }
    return 0;
}
