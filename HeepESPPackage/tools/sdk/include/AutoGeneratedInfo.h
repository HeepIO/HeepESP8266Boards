#pragma once

#include <stdint.h>
// The heepByte is our standard 8bit unit that we will work with
typedef unsigned char heepByte;

#define STANDARD_ID_SIZE 4
#define STANDARD_ID_SIZE_BASE_64 8 // 4 * ceiling(STANDRD_ID_SIZE/3)

// Include the standard Heep Data Types
#include "CommonDataTypes.h"

// Device ID and MAC Address used for all Heep Communication
extern heepByte deviceIDByte [STANDARD_ID_SIZE];
extern uint8_t mac[6];

#ifdef USE_ANALYTICS
heepByte base64DeviceIDByte [STANDARD_ID_SIZE_BASE_64];
#endif

