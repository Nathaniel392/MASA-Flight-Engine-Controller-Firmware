/*
 * abort_cases.h
 *
 *  Created on: Jul 5, 2021
 *      Author: natha + ananthas
 */

#ifndef INC_THRESHOLD_DETECTION_H_
#define INC_THRESHOLD_DETECTION_H_

#include <stdint.h>

typedef struct {
	float* observed_var;  // pointer to variable to observe
	float threshold;
	uint32_t time_limit_ms;

	// Set start time and enable at the same time
	uint32_t tracking_start_time_ms;

	// Set a toggle for time (before or after) and wether threshold is upper/lower bound
	uint8_t is_upper_timelimit;
	uint8_t is_upper_threshold;

	// TODO: figure out EXACTLY what it means for a variable to
	// "pass/not pass the threshold within the time limit"
	// because prop probably doesn't know what they actually want
	// this program to do lol

	// TODO: some other config variable for if the threshold is an upper bound
	// or a lower bound
} Threshold_Detection_Config;


/**
 * This function will probably end up being called in the 5ms loop
 * after every time sensors get sampled
 */
uint8_t check_variable_threshold(Threshold_Detection_Config* config, uint32_t current_time_ms);


#endif /* INC_THRESHOLD_DETECTION_H_ */
