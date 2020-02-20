#pragma once

#include <stdint.h>
#include <stdio.h>
#include "BoardSpecifics.h"
#include "SharedLogging.h"

#define PROFILER_EVENTS_MAX 16
#define PROFILER_ENDL "\r\n"

void App_SharedProfiler_Start(const char *name);
void App_SharedProfiler_Event(const char *event);
void App_SharedProfiler_Stop(void);
