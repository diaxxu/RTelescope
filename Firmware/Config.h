#ifndef CONFIG_H
#define CONFIG_H

#define MOUNT_TYPE     ALT_AZ
#define MOUNT_NAME     "Rtelescope"

#define MULTI_STEPS_RA   32
#define MULTI_STEPS_DEC  32

#define MOTOR_STEPS_RA   200
#define MOTOR_STEPS_DEC  200

#define GEAR_RATIO_RA    120.0
#define GEAR_RATIO_DEC   120.0

#define STEPS_PER_DEGREE_RA  ((MOTOR_STEPS_RA * MULTI_STEPS_RA * GEAR_RATIO_RA) / 360.0)
#define STEPS_PER_DEGREE_DEC ((MOTOR_STEPS_DEC * MULTI_STEPS_DEC * GEAR_RATIO_DEC) / 360.0)

#define SLEW_RATE_MAX   4.0
#define TRACKING_RATE_DEFAULT TRACK_SIDEREAL

#define DRIVER_TYPE_RA  TMC2209
#define DRIVER_TYPE_DEC TMC2209

#define WIFI_ENABLED    true
#define WIFI_SSID       "RTelescope"
#define WIFI_PASSWORD   "wonders_of_universe"

#endif