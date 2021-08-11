/// BEGIN AUTOGENERATED SECTION - MODIFICATIONS TO THIS CODE WILL BE OVERWRITTEN

/// pack_telem_defines.h
/// Autogenerated by firmware-libraries/SerialComms/python/telem_file_generator.py on Wed Aug 11 00:17:00 2021

#include "globals.h"
#include <stdint.h>

// USER CODE BEGIN - MODIFICATIONS OUTSIDE THIS SECTION WILL BE DELETED
#include "tank_pressure_control.h"
#include "autosequence.h"

extern TPC_Info tanks[NUM_TANKS];
extern Autosequence_Info autosequence;
// USER CODE END - MODIFICATIONS OUTSIDE THIS SECTION WILL BE DELETED

#define	TELEM_ITEM_0	((uint8_t) (STATE*1)) >> 0 
#define	TELEM_ITEM_1	((int16_t) (e_batt*100)) >> 0 
#define	TELEM_ITEM_2	((int16_t) (e_batt*100)) >> 8 
#define	TELEM_ITEM_3	((int16_t) (i_batt*100)) >> 0 
#define	TELEM_ITEM_4	((int16_t) (i_batt*100)) >> 8 
#define	TELEM_ITEM_5	((uint32_t) (valve_states*1)) >> 0 
#define	TELEM_ITEM_6	((uint32_t) (valve_states*1)) >> 8 
#define	TELEM_ITEM_7	((uint32_t) (valve_states*1)) >> 16 
#define	TELEM_ITEM_8	((uint32_t) (valve_states*1)) >> 24 
#define	TELEM_ITEM_9	((int16_t) (e3v*100)) >> 0 
#define	TELEM_ITEM_10	((int16_t) (e3v*100)) >> 8 
#define	TELEM_ITEM_11	((int16_t) (e5v*100)) >> 0 
#define	TELEM_ITEM_12	((int16_t) (e5v*100)) >> 8 
#define	TELEM_ITEM_13	((uint8_t) (i5v*100)) >> 0 
#define	TELEM_ITEM_14	((uint8_t) (i3v*100)) >> 0 
#define	TELEM_ITEM_15	((uint8_t) (last_command_id*1)) >> 0 
#define	TELEM_ITEM_16	((uint32_t) (status_flags*1)) >> 0 
#define	TELEM_ITEM_17	((uint32_t) (status_flags*1)) >> 8 
#define	TELEM_ITEM_18	((uint32_t) (status_flags*1)) >> 16 
#define	TELEM_ITEM_19	((uint32_t) (status_flags*1)) >> 24 
#define	TELEM_ITEM_20	((int32_t) (pressure[0]*10)) >> 0 
#define	TELEM_ITEM_21	((int32_t) (pressure[0]*10)) >> 8 
#define	TELEM_ITEM_22	((int32_t) (pressure[0]*10)) >> 16 
#define	TELEM_ITEM_23	((int32_t) (pressure[0]*10)) >> 24 
#define	TELEM_ITEM_24	((int32_t) (pressure[1]*10)) >> 0 
#define	TELEM_ITEM_25	((int32_t) (pressure[1]*10)) >> 8 
#define	TELEM_ITEM_26	((int32_t) (pressure[1]*10)) >> 16 
#define	TELEM_ITEM_27	((int32_t) (pressure[1]*10)) >> 24 
#define	TELEM_ITEM_28	((int32_t) (pressure[2]*10)) >> 0 
#define	TELEM_ITEM_29	((int32_t) (pressure[2]*10)) >> 8 
#define	TELEM_ITEM_30	((int32_t) (pressure[2]*10)) >> 16 
#define	TELEM_ITEM_31	((int32_t) (pressure[2]*10)) >> 24 
#define	TELEM_ITEM_32	((int32_t) (pressure[3]*10)) >> 0 
#define	TELEM_ITEM_33	((int32_t) (pressure[3]*10)) >> 8 
#define	TELEM_ITEM_34	((int32_t) (pressure[3]*10)) >> 16 
#define	TELEM_ITEM_35	((int32_t) (pressure[3]*10)) >> 24 
#define	TELEM_ITEM_36	((int32_t) (pressure[4]*10)) >> 0 
#define	TELEM_ITEM_37	((int32_t) (pressure[4]*10)) >> 8 
#define	TELEM_ITEM_38	((int32_t) (pressure[4]*10)) >> 16 
#define	TELEM_ITEM_39	((int32_t) (pressure[4]*10)) >> 24 
#define	TELEM_ITEM_40	((int32_t) (pressure[5]*10)) >> 0 
#define	TELEM_ITEM_41	((int32_t) (pressure[5]*10)) >> 8 
#define	TELEM_ITEM_42	((int32_t) (pressure[5]*10)) >> 16 
#define	TELEM_ITEM_43	((int32_t) (pressure[5]*10)) >> 24 
#define	TELEM_ITEM_44	((uint8_t) (ivlv[0]*10)) >> 0 
#define	TELEM_ITEM_45	((uint8_t) (ivlv[1]*10)) >> 0 
#define	TELEM_ITEM_46	((uint8_t) (ivlv[2]*10)) >> 0 
#define	TELEM_ITEM_47	((uint8_t) (ivlv[3]*10)) >> 0 
#define	TELEM_ITEM_48	((uint8_t) (ivlv[4]*10)) >> 0 
#define	TELEM_ITEM_49	((uint8_t) (ivlv[5]*10)) >> 0 
#define	TELEM_ITEM_50	((uint8_t) (ivlv[6]*10)) >> 0 
#define	TELEM_ITEM_51	((uint8_t) (ivlv[7]*10)) >> 0 
#define	TELEM_ITEM_52	((uint8_t) (ivlv[8]*10)) >> 0 
#define	TELEM_ITEM_53	((uint8_t) (evlv[0]*10)) >> 0 
#define	TELEM_ITEM_54	((uint8_t) (evlv[1]*10)) >> 0 
#define	TELEM_ITEM_55	((uint8_t) (evlv[2]*10)) >> 0 
#define	TELEM_ITEM_56	((uint8_t) (evlv[3]*10)) >> 0 
#define	TELEM_ITEM_57	((uint8_t) (evlv[4]*10)) >> 0 
#define	TELEM_ITEM_58	((uint8_t) (evlv[5]*10)) >> 0 
#define	TELEM_ITEM_59	((uint8_t) (evlv[6]*10)) >> 0 
#define	TELEM_ITEM_60	((uint8_t) (evlv[7]*10)) >> 0 
#define	TELEM_ITEM_61	((uint8_t) (evlv[8]*10)) >> 0 
#define	TELEM_ITEM_62	((uint16_t) (tc[0]*100)) >> 0 
#define	TELEM_ITEM_63	((uint16_t) (tc[0]*100)) >> 8 
#define	TELEM_ITEM_64	((uint16_t) (tc[1]*100)) >> 0 
#define	TELEM_ITEM_65	((uint16_t) (tc[1]*100)) >> 8 
#define	TELEM_ITEM_66	((uint16_t) (tc[2]*100)) >> 0 
#define	TELEM_ITEM_67	((uint16_t) (tc[2]*100)) >> 8 
#define	TELEM_ITEM_68	((uint16_t) (tc[3]*100)) >> 0 
#define	TELEM_ITEM_69	((uint16_t) (tc[3]*100)) >> 8 
#define	TELEM_ITEM_70	((uint16_t) (tc[4]*100)) >> 0 
#define	TELEM_ITEM_71	((uint16_t) (tc[4]*100)) >> 8 
#define	TELEM_ITEM_72	((int16_t) (mtr_pos[0]*10)) >> 0 
#define	TELEM_ITEM_73	((int16_t) (mtr_pos[0]*10)) >> 8 
#define	TELEM_ITEM_74	((int16_t) (mtr_pos[1]*10)) >> 0 
#define	TELEM_ITEM_75	((int16_t) (mtr_pos[1]*10)) >> 8 
#define	TELEM_ITEM_76	((int16_t) (mtr_vel[0]*1)) >> 0 
#define	TELEM_ITEM_77	((int16_t) (mtr_vel[0]*1)) >> 8 
#define	TELEM_ITEM_78	((int16_t) (mtr_vel[1]*1)) >> 0 
#define	TELEM_ITEM_79	((int16_t) (mtr_vel[1]*1)) >> 8 
#define	TELEM_ITEM_80	((uint16_t) (i_mtr_ab[0]*100)) >> 0 
#define	TELEM_ITEM_81	((uint16_t) (i_mtr_ab[0]*100)) >> 8 
#define	TELEM_ITEM_82	((uint16_t) (i_mtr_ab[1]*100)) >> 0 
#define	TELEM_ITEM_83	((uint16_t) (i_mtr_ab[1]*100)) >> 8 
#define	TELEM_ITEM_84	((uint16_t) (i_mtr_ab[2]*100)) >> 0 
#define	TELEM_ITEM_85	((uint16_t) (i_mtr_ab[2]*100)) >> 8 
#define	TELEM_ITEM_86	((uint16_t) (i_mtr_ab[3]*100)) >> 0 
#define	TELEM_ITEM_87	((uint16_t) (i_mtr_ab[3]*100)) >> 8 
#define	TELEM_ITEM_88	((uint16_t) (i_mtr[0]*100)) >> 0 
#define	TELEM_ITEM_89	((uint16_t) (i_mtr[0]*100)) >> 8 
#define	TELEM_ITEM_90	((uint16_t) (i_mtr[1]*100)) >> 0 
#define	TELEM_ITEM_91	((uint16_t) (i_mtr[1]*100)) >> 8 
#define	TELEM_ITEM_92	((int32_t) (mtr_set[0]*100)) >> 0 
#define	TELEM_ITEM_93	((int32_t) (mtr_set[0]*100)) >> 8 
#define	TELEM_ITEM_94	((int32_t) (mtr_set[0]*100)) >> 16 
#define	TELEM_ITEM_95	((int32_t) (mtr_set[0]*100)) >> 24 
#define	TELEM_ITEM_96	((int32_t) (mtr_set[1]*100)) >> 0 
#define	TELEM_ITEM_97	((int32_t) (mtr_set[1]*100)) >> 8 
#define	TELEM_ITEM_98	((int32_t) (mtr_set[1]*100)) >> 16 
#define	TELEM_ITEM_99	((int32_t) (mtr_set[1]*100)) >> 24 
#define	TELEM_ITEM_100	((uint16_t) (tanks[0].K_p*100)) >> 0 
#define	TELEM_ITEM_101	((uint16_t) (tanks[0].K_p*100)) >> 8 
#define	TELEM_ITEM_102	((uint16_t) (tanks[1].K_p*100)) >> 0 
#define	TELEM_ITEM_103	((uint16_t) (tanks[1].K_p*100)) >> 8 
#define	TELEM_ITEM_104	((uint16_t) (tanks[0].K_i*100)) >> 0 
#define	TELEM_ITEM_105	((uint16_t) (tanks[0].K_i*100)) >> 8 
#define	TELEM_ITEM_106	((uint16_t) (tanks[1].K_i*100)) >> 0 
#define	TELEM_ITEM_107	((uint16_t) (tanks[1].K_i*100)) >> 8 
#define	TELEM_ITEM_108	((uint16_t) (tanks[0].K_d*100)) >> 0 
#define	TELEM_ITEM_109	((uint16_t) (tanks[0].K_d*100)) >> 8 
#define	TELEM_ITEM_110	((uint16_t) (tanks[1].K_d*100)) >> 0 
#define	TELEM_ITEM_111	((uint16_t) (tanks[1].K_d*100)) >> 8 
#define	TELEM_ITEM_112	((int16_t) (tanks[0].Kp_error*10)) >> 0 
#define	TELEM_ITEM_113	((int16_t) (tanks[0].Kp_error*10)) >> 8 
#define	TELEM_ITEM_114	((int16_t) (tanks[1].Kp_error*10)) >> 0 
#define	TELEM_ITEM_115	((int16_t) (tanks[1].Kp_error*10)) >> 8 
#define	TELEM_ITEM_116	((int16_t) (tanks[0].Ki_error*10)) >> 0 
#define	TELEM_ITEM_117	((int16_t) (tanks[0].Ki_error*10)) >> 8 
#define	TELEM_ITEM_118	((int16_t) (tanks[1].Ki_error*10)) >> 0 
#define	TELEM_ITEM_119	((int16_t) (tanks[1].Ki_error*10)) >> 8 
#define	TELEM_ITEM_120	((int16_t) (tanks[0].Kd_error*10)) >> 0 
#define	TELEM_ITEM_121	((int16_t) (tanks[0].Kd_error*10)) >> 8 
#define	TELEM_ITEM_122	((int16_t) (tanks[1].Kd_error*10)) >> 0 
#define	TELEM_ITEM_123	((int16_t) (tanks[1].Kd_error*10)) >> 8 
#define	TELEM_ITEM_124	((int32_t) (tanks[0].target_pres*100)) >> 0 
#define	TELEM_ITEM_125	((int32_t) (tanks[0].target_pres*100)) >> 8 
#define	TELEM_ITEM_126	((int32_t) (tanks[0].target_pres*100)) >> 16 
#define	TELEM_ITEM_127	((int32_t) (tanks[0].target_pres*100)) >> 24 
#define	TELEM_ITEM_128	((int32_t) (tanks[1].target_pres*100)) >> 0 
#define	TELEM_ITEM_129	((int32_t) (tanks[1].target_pres*100)) >> 8 
#define	TELEM_ITEM_130	((int32_t) (tanks[1].target_pres*100)) >> 16 
#define	TELEM_ITEM_131	((int32_t) (tanks[1].target_pres*100)) >> 24 
#define	TELEM_ITEM_132	((int16_t) (tanks[0].PID_ctrl_vlv_high_pres*10)) >> 0 
#define	TELEM_ITEM_133	((int16_t) (tanks[0].PID_ctrl_vlv_high_pres*10)) >> 8 
#define	TELEM_ITEM_134	((int16_t) (tanks[1].PID_ctrl_vlv_high_pres*10)) >> 0 
#define	TELEM_ITEM_135	((int16_t) (tanks[1].PID_ctrl_vlv_high_pres*10)) >> 8 
#define	TELEM_ITEM_136	((int16_t) (tanks[0].PID_ctrl_vlv_low_pres*10)) >> 0 
#define	TELEM_ITEM_137	((int16_t) (tanks[0].PID_ctrl_vlv_low_pres*10)) >> 8 
#define	TELEM_ITEM_138	((int16_t) (tanks[1].PID_ctrl_vlv_low_pres*10)) >> 0 
#define	TELEM_ITEM_139	((int16_t) (tanks[1].PID_ctrl_vlv_low_pres*10)) >> 8 
#define	TELEM_ITEM_140	((int32_t) (epot[0]*10)) >> 0 
#define	TELEM_ITEM_141	((int32_t) (epot[0]*10)) >> 8 
#define	TELEM_ITEM_142	((int32_t) (epot[0]*10)) >> 16 
#define	TELEM_ITEM_143	((int32_t) (epot[0]*10)) >> 24 
#define	TELEM_ITEM_144	((int32_t) (epot[1]*10)) >> 0 
#define	TELEM_ITEM_145	((int32_t) (epot[1]*10)) >> 8 
#define	TELEM_ITEM_146	((int32_t) (epot[1]*10)) >> 16 
#define	TELEM_ITEM_147	((int32_t) (epot[1]*10)) >> 24 
#define	TELEM_ITEM_148	((int32_t) (lox_control_pressure*10)) >> 0 
#define	TELEM_ITEM_149	((int32_t) (lox_control_pressure*10)) >> 8 
#define	TELEM_ITEM_150	((int32_t) (lox_control_pressure*10)) >> 16 
#define	TELEM_ITEM_151	((int32_t) (lox_control_pressure*10)) >> 24 
#define	TELEM_ITEM_152	((int32_t) (fuel_control_pressure*10)) >> 0 
#define	TELEM_ITEM_153	((int32_t) (fuel_control_pressure*10)) >> 8 
#define	TELEM_ITEM_154	((int32_t) (fuel_control_pressure*10)) >> 16 
#define	TELEM_ITEM_155	((int32_t) (fuel_control_pressure*10)) >> 24 
#define	TELEM_ITEM_156	((int32_t) (copv_control_pressure*10)) >> 0 
#define	TELEM_ITEM_157	((int32_t) (copv_control_pressure*10)) >> 8 
#define	TELEM_ITEM_158	((int32_t) (copv_control_pressure*10)) >> 16 
#define	TELEM_ITEM_159	((int32_t) (copv_control_pressure*10)) >> 24 
#define	TELEM_ITEM_160	((uint8_t) (tanks[0].tank_enable*1)) >> 0 
#define	TELEM_ITEM_161	((uint8_t) (tanks[1].tank_enable*1)) >> 0 
#define	TELEM_ITEM_162	((uint32_t) (autosequence.hotfire_test_duration_ms*1)) >> 0 
#define	TELEM_ITEM_163	((uint32_t) (autosequence.hotfire_test_duration_ms*1)) >> 8 
#define	TELEM_ITEM_164	((uint32_t) (autosequence.hotfire_test_duration_ms*1)) >> 16 
#define	TELEM_ITEM_165	((uint32_t) (autosequence.hotfire_test_duration_ms*1)) >> 24 
#define	TELEM_ITEM_166	((uint16_t) (autosequence.ignition_ignitor_on_delay_ms*1)) >> 0 
#define	TELEM_ITEM_167	((uint16_t) (autosequence.ignition_ignitor_on_delay_ms*1)) >> 8 
#define	TELEM_ITEM_168	((uint16_t) (autosequence.ignition_ignitor_high_duration_ms*1)) >> 0 
#define	TELEM_ITEM_169	((uint16_t) (autosequence.ignition_ignitor_high_duration_ms*1)) >> 8 
#define	TELEM_ITEM_170	((uint8_t) (autosequence.hotfire_fuel_mpv_delay_ms*1)) >> 0 
#define	TELEM_ITEM_171	((uint16_t) (autosequence.hotfire_film_cooling_on_time_ms*1)) >> 0 
#define	TELEM_ITEM_172	((uint16_t) (autosequence.hotfire_film_cooling_on_time_ms*1)) >> 8 
#define	TELEM_ITEM_173	((uint16_t) (autosequence.hotfire_pid_start_delay_ms*1)) >> 0 
#define	TELEM_ITEM_174	((uint16_t) (autosequence.hotfire_pid_start_delay_ms*1)) >> 8 
#define	TELEM_ITEM_175	((int32_t) (init_motor_pos_deg_correction_factor*10000)) >> 0 
#define	TELEM_ITEM_176	((int32_t) (init_motor_pos_deg_correction_factor*10000)) >> 8 
#define	TELEM_ITEM_177	((int32_t) (init_motor_pos_deg_correction_factor*10000)) >> 16 
#define	TELEM_ITEM_178	((int32_t) (init_motor_pos_deg_correction_factor*10000)) >> 24 
#define	TELEM_ITEM_179	((int32_t) (state_rem_duration*1)) >> 0 
#define	TELEM_ITEM_180	((int32_t) (state_rem_duration*1)) >> 8 
#define	TELEM_ITEM_181	((int32_t) (state_rem_duration*1)) >> 16 
#define	TELEM_ITEM_182	((int32_t) (state_rem_duration*1)) >> 24 
#define	TELEM_ITEM_183	((uint8_t) (telem_rate*1)) >> 0 
#define	TELEM_ITEM_184	((uint8_t) (adc_rate*1)) >> 0 
#define	TELEM_ITEM_185	((uint32_t) (flash_mem*1)) >> 0 
#define	TELEM_ITEM_186	((uint32_t) (flash_mem*1)) >> 8 
#define	TELEM_ITEM_187	((uint32_t) (flash_mem*1)) >> 16 
#define	TELEM_ITEM_188	((uint32_t) (flash_mem*1)) >> 24 
#define	TELEM_ITEM_189	((uint8_t) (LOGGING_ACTIVE*1)) >> 0 
#define	TELEM_ITEM_190	((uint8_t) (autosequence.enable_auto_aborts*1)) >> 0 
#define	TELEM_ITEM_191	((uint16_t) (autosequence.ignition_ignitor_current_lower_bound_pass_count*1)) >> 0 
#define	TELEM_ITEM_192	((uint16_t) (autosequence.ignition_ignitor_current_lower_bound_pass_count*1)) >> 8 
#define	TELEM_ITEM_193	((uint16_t) (autosequence.hotfire_chamber_pres_lower_bound_pass_count*1)) >> 0 
#define	TELEM_ITEM_194	((uint16_t) (autosequence.hotfire_chamber_pres_lower_bound_pass_count*1)) >> 8 
#define	TELEM_ITEM_195	((uint16_t) (autosequence.hotfire_chamber_pres_upper_bound_pass_count*1)) >> 0 
#define	TELEM_ITEM_196	((uint16_t) (autosequence.hotfire_chamber_pres_upper_bound_pass_count*1)) >> 8 
#define	TELEM_ITEM_197	((uint8_t) (autosequence.hotfire_lox_tank_enable_PID_control*1)) >> 0 
#define	TELEM_ITEM_198	((uint8_t) (autosequence.hotfire_fuel_tank_enable_PID_control*1)) >> 0 
#define	CLB_NUM_TELEM_ITEMS	199

/**
 * Takes in a uint8_t array of size CLB_NUM_TELEM_ITEMS and packs the 
 * global variables into it as defined in pack_telem_defines.h
 *
 * @param dst	<uint8_t*>	Array to write the global variables to after packing their bytes for telemetry.
**/
extern void pack_telem_data(uint8_t* dst);
