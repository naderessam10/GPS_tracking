#ifndef GPS_H_
#define GPS_H_

#include "tm4c123gh6pm.h"
#include "std_types.h"
#include "common_macros.h"


int distance_calc(volatile uint32_t current_longitude,volatile uint32_t current_latitude,volatile uint32_t start_longitude,volatile uint32_t start_latitude);






#endif