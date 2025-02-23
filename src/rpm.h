#include <lvgl.h>
#ifdef __cplusplus
extern "C" {
#endif

int32_t get_var_rpm();
void set_var_rpm(int32_t value);
const char *get_var_rpm_str();
void set_var_rpm_str(const char *value);
void action_scale0_cb(lv_event_t *e);

#ifdef __cplusplus
}
#endif