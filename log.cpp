#include "log.h"

void printTime() {
    time_t tt;
    struct tm * ti;
    time (&tt);
    ti = localtime(&tt);
    char* date = asctime(ti);
    date[strlen(date) - 1] = 0;
    cout << "[ " << date << " ] ";
}

void logSendAck(ostream &stream, int sequence_number) {
	printTime();
	stream << "Sending " << sequence_number << endl;
}

void logGetACK(ostream &stream, int sequence_number) {
	printTime();
	stream << "Get " << sequence_number << endl;
}

void logSendData(ostream &stream, int sequence_number) {
	printTime();
	stream << "Sending " << sequence_number << endl;
}

void logGetData(ostream &stream, int sequence_number) {
	printTime();
	stream << "Get " << sequence_number << endl;
}

void windowMovement(ostream &stream, string left, string right) {
	printTime();
	stream << "Window move to the " << left << endl;
}