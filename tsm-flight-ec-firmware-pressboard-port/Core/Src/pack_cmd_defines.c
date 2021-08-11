// Autogenerated by firmware-libraries/SerialComms/python/cmd_template_parser.py on Wed Aug 11 00:17:02 2021

#include "pack_cmd_defines.h"
Cmd_Pointer cmds_ptr[NUM_CMD_ITEMS] = {

set_vlv,
set_kp,
set_ki,
set_kd,
set_state,
download_flash,
wipe_flash,
start_logging,
stop_logging,
set_stepper_pos,
set_stepper_zero,
set_control_target_pressure,
ambientize_pressure_transducers,
set_low_toggle_percent,
set_high_toggle_percent,
set_telem,
set_presstank_status,
ambientize_pot,
led_write,
set_system_clock,
remove_pressure_ambients,
set_fuel_mpv_on_delay,
set_engine_test_duration,
set_pid_start_delay,
set_ignitor_on_delay,
set_ignitor_high_duration,
set_film_cooling_on_delay,
set_init_motor_deg_factor,
clear_status_flags,
start_simulation,
advance_simulation,
stop_simulation,
set_pt_lower_voltage,
set_pt_upper_voltage,
set_pt_upper_pressure,
refresh_calibrations,
send_gse_vlv_cmd,
set_automatic_abort_enable
};

int16_t command_map[COMMAND_MAP_SZ] = {-1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 1, 2, 3, -1, 4, -1, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, -1, -1, 15, 16, 17, 18, -1, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37};
int16_t command_sz[COMMAND_MAP_SZ] = {-1, -1, -1, -1, -1, -1, -1, -1, 17, -1, -1, -1, -1, 21, 21, 21, -1, 13, -1, 12, 12, 12, 12, 17, 13, 17, 12, 17, 17, -1, -1, 13, 14, 13, 14, -1, 16, 12, 13, 16, 14, 14, 14, 14, 20, 12, 12, 12, 12, 17, 17, 17, 12, 17, 13};
