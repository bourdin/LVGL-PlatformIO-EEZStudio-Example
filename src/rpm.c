#include <Arduino.h>
#include <string.h>
#include <rpm.h>
#include <ui/actions.h>


int32_t rpm;
char rpm_str[100] = { 0 };

int32_t get_var_rpm() {
    return rpm;
}

void set_var_rpm(int32_t value) {
    rpm = value;
}

const char *get_var_rpm_str() {
    return rpm_str;
}

void set_var_rpm_str(const char *value) {
    strncpy(rpm_str, value, sizeof(rpm_str) / sizeof(char));
    rpm_str[sizeof(rpm_str) / sizeof(char) - 1] = 0;
}

void action_scale0_cb(lv_event_t *e) {
    char my_rpm_str[100];
    sprintf(my_rpm_str,"%d RPM",get_var_rpm());
    set_var_rpm_str(my_rpm_str);  
}
