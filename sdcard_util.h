
#ifndef __SDCARD_UTIL_H__
#define __SDCARD_UTIL_H__

#ifdef __cplusplus
extern "C"
{
#endif

typedef void *sdcard_handle;
typedef int (*sdcard_cb_p) ();

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

sdcard_handle sdcard_util_init(sdcard_cb_p normal2other, sdcard_cb_p other2normal);
int sdcard_get_size(sdcard_handle handle, long long *total_kb, long long *free_kb);
sdcard_state_e sdcard_get_state(sdcard_handle handle);
void sdcard_util_deinit(sdcard_handle handle);

#ifdef __cplusplus
}
#endif

#endif