#ifndef __PROFILER_H
#define __PROFILER_H

//-- Includes ------------------------------------------------------------------
#include "stm32f4xx.h"
#include <stdint.h>
#include <stdio.h>

//-- Exported macro ------------------------------------------------------------
#define PROFILER_EVENTS_MAX 16
#define PROFILER_ENDL "\r\n"

//-- Exported functions --------------------------------------------------------
void profiler_start(const char* name);
void profiler_event(const char* event);
void profiler_stop(void);

#endif // __PROFILER_H
