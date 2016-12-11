#include <time.h>
#define difftime(s,e) ((e) - (s))
typedef unsigned long acc_timer_t;

acc_timer_t gettime(void);
