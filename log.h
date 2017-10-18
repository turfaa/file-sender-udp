#ifndef _LOG_H_
#define _LOG_H_

#include <iostream>
#include <ctime>
#include <fstream>
#include <string.h>

using namespace std;

void printTime();

void logSendAck(ostream &stream, int sequence_number);

void logGetACK(ostream &stream, int sequence_number);

void logSendData(ostream &stream, int sequence_number);

void logGetData(ostream &stream, int sequence_number);

#endif