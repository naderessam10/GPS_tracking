#include "gps.h"
#include "math.h"



int distance_calc(volatile uint32_t current_longitude, volatile uint32_t current_latitude,volatile uint32_t start_longitude,volatile uint32_t start_latitude)
{
return sqrt(((current_longitude-start_longitude)*(current_longitude-start_longitude)) + ((current_latitude-start_latitude)*(current_latitude-start_latitude)));
}

