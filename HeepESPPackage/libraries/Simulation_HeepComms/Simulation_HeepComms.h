#pragma once
#include "CommonDataTypes.h"

void CreateInterruptServer();

void CheckServerForInputs();

void SendOutputBufferToIP(struct HeepIPAddress destIP);

#ifdef USE_ANALYTICS
void SendDataToFirebase(heepByte *buffer, int length, heepByte* base64IDBuffer, int base64IDLength);
#endif