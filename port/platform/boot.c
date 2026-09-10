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
void device_set_mode(int battle);
void device_set_sandbox(int on);
void config_menu_run(void);
void battle_menu_run(void);
int  battle_game_run(void);

#include <stdio.h>

/* diagnose faults instead of dying silently */
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <ucontext.h>
static void segv_rip(int sig, siginfo_t *si, void *ctx)
{
    ucontext_t *uc = (ucontext_t *)ctx;
    uintptr_t rip = uc->uc_mcontext.gregs[REG_RIP];
    uintptr_t r2 = 0;
    for (int i = 0; i < 15; i++)
        if (uc->uc_mcontext.gregs[i] && r2 == 0) r2 = uc->uc_mcontext.gregs[i];
    fprintf(stderr, "[port] SIGSEGV rip=%p addr=%p\n", (void *)rip, si->si_addr);
    {
        FILE *mf = fopen("/proc/self/maps", "r");
        char line[256];
        while (mf && fgets(line, sizeof(line), mf)) {
            unsigned long a, b;
            char path[200];
            if (sscanf(line, "%lx-%lx %*s %*s %*s %*s %199s", &a, &b, path) == 3
                && (unsigned long)rip >= a && (unsigned long)rip < b)
                fprintf(stderr, "  in module %s +0x%lx (base %lx)\n", path,
                        (unsigned long)rip - a, a);
        }
        if (mf) fclose(mf);
    }
    fflush(stderr);
    exit(1);
}
int ff4_native_main(int argc, char **argv)
{
    struct sigaction sa;
    sa.sa_sigaction = segv_rip; sa.sa_flags = SA_SIGINFO;
    sigemptyset(&sa.sa_mask); sigaction(SIGSEGV, &sa, NULL);
    int frames = 0;
    int max = (argc > 1 && argv[1][0] != 'p') ? 60 : 600;

    int battle = 0;
    int play = 0;
    if (argc > 1 && argv[1][0] == 'b')
        battle = 1;
    if (argc > 1 && argv[1][0] == 'p')
        play = 1;
    if (play)
        max = 30000;   /* the battler owns the loop; hard cap as a guard */
    if (argc > 1 && argv[1][0] >= '0' && argv[1][0] <= '9')
        battle = 0;   /* legacy numeric arg: config */
    device_set_mode(battle || play);
    device_set_sandbox(play);
    if (device_open_window("FF4 native", 640, 480) != 0)
        return 1;

    /* interpreted menu state, a few frames per pass; the playable
       battler runs on its own frame loop (until quit / all waves) */
    for (frames = 0; frames < max; frames++) {
        if (play) {
            if (!battle_game_run())
                break;
            device_poll_events();
            device_render();
            continue;
        }
        /* (play loop handled above; noted for frame counting) */
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

    if (play)
        fprintf(stderr, "[play] ran %d frames\n", frames);
    device_close();
    return 0;
}