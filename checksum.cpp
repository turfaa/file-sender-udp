#include "checksum.h"
#include <stdio.h>
#include <iostream>
#include <bitset>
using namespace std;

unsigned char checksum(unsigned char * data, int size) {
    unsigned char checksum_result = 0;
    while (size-- != 0) {
    	checksum_result += *data++;
    }
    return (~checksum_result);
}

