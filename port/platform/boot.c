/* FF4 source-port — platform/boot.c
 *
 * Native boot (Phase B.2): opens the SDL window and runs the
 * interpreted config-menu state for a bounded number of frames.
 * All rendering/polling flows through the device layer
 * (port/src/device/sdl_device.c); the deck modules only talk to
 * the window API. Exits cleanly after the demo run or SDL quit.
 */
#include <stdint.h>

int  device_open_window(const char *title, int w, int h);
void device_close(void);
void device_poll_events(void);
void device_render(void);
void config_menu_run(void);
void battle_menu_run(void);

#include <stdio.h>
int ff4_native_main(int argc, char **argv)
{
    int frames = 0;
    int max = (argc > 1) ? 60 : 600;

    int battle = 0;
    if (argc > 1 && argv[1][0] == 'b')
        battle = 1;
    if (argc > 1 && argv[1][0] >= '0' && argv[1][0] <= '9')
        battle = 0;   /* legacy numeric arg: config */
    if (device_open_window("FF4 native", 640, 480) != 0)
        return 1;

    /* interpreted menu state, a few frames per pass */
    for (frames = 0; frames < max; frames++) {
        if (battle)
            battle_menu_run();
        else
            config_menu_run();
        device_poll_events();
        if (frames % 6 == 0)
            device_render();
        if (frames == 60)
            break;
    }

    device_close();
    return 0;
}