
#ifndef __SDCARD_UTIL_H__
#define __SDCARD_UTIL_H__

#ifdef __cplusplus
extern "C"
{
#endif

typedef void *sdcard_handle;

typedef enum
{
    SDST_NORMAL = 0,
    SDST_NOT_EXISTS,
    SDST_FULL,
    SDST_BROKEN,
    SDST_FORMATTING,
    SDST_EJECT,
    SDST_FIXING,
    SDST_EJECTING
} sdcard_state_e;

sdcard_handle sdcard_util_init();
int sdcard_get_size(sdcard_handle handle, long long *total_kb, long long *free_kb);
void sdcard_util_deinit(sdcard_handle handle);

#ifdef __cplusplus
}
#endif

#endif