#ifndef _CHECKSUM_H
#define _CHECKSUM_H

char checksum(char * data, int size) {
    char checksum_result = 0;

    for(int i = 0; i < size; i++) {
        checksum_result += data[i];
    }

    return checksum_result;
}

#endif
