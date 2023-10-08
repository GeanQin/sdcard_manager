#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

#include "sdcard_util.h"

int main()
{
    sdcard_handle handle = sdcard_util_init();
    long long total_kb = 0;
    long long free_kb = 0;

    while (1)
    {
        // if (sdcard_get_size(handle, &total_kb, &free_kb) == 0)
        // {
        //     printf("total=%lld\n", total_kb);
        //     printf("free=%lld\n", free_kb);
        // }
        sleep(2);
    }

    return 0;
}