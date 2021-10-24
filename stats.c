#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
   
    return s;
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats){
    
    alerters[0] = emailAlerter;
    alerters[1] = ledAlerter ;
    
    if (computedStats.max > maxThreshold)
    {
        *alerters[0]();
        *alerters[1]();
    }
}

void emailAlerter (void){
int emailAlertCallCount = 0;
}

void ledAlerter (void){
int ledAlertCallCount = 0;
}
