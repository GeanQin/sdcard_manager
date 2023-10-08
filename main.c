#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

#include "sdcard_util.h"

static void n2o_cb()
{
    printf("n2o_cb\n");
}

static void o2n_cb()
{
    printf("o2n_cb\n");
}

int main()
{
    sdcard_handle handle = sdcard_util_init((void *)n2o_cb, (void *)o2n_cb);
    long long total_kb = 0;
    long long free_kb = 0;

    while (1)
    {
        // if (sdcard_get_size(handle, &total_kb, &free_kb) == 0)
        // {
        //     printf("total=%lld\n", total_kb);
        //     printf("free=%lld\n", free_kb);
        // }
        printf("sdcard state=%d\n", sdcard_get_state(handle));
        sleep(2);
    }

    return 0;
}