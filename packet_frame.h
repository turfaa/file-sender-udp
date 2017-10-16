#ifndef _PACKET_FRAME_H
#define _PACKET_FRAME_H

#include "checksum.h"
#include <cstring>

class PacketFrame {
private:
    static const char SOH = 0x1;
    static const char STX = 0x2;
    static const char ETX = 0x3;

    char data;
    int sequenceNumber;
public:
    PacketFrame(int sequenceNumber, char data) {
        this->sequenceNumber = sequenceNumber;
        this->data = data;
    }

    char* toBytes() {
        char * bytes = new char[9];

        bytes[0] = SOH;
        memcpy(bytes+1, &sequenceNumber, 4);
        bytes[5] = STX;
        bytes[6] = data;
        bytes[7] = ETX;
        bytes[8] = checksum(bytes, 8);

        return bytes;
    }

    bool isChecksumMatch(char checkSum) {
        char * bytes = toBytes();

        return (bytes[8] == checkSum);
    }
};

#endif
