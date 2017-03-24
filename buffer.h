#ifndef buffer_h
#define buffer_h

#include <stdio.h>

typedef struct data_sampled {
    //Enough for 63 samples
    uint8_t data[255];
    uint8_t end, lock;
    struct data_sampled *next, *prev;
} dSamp;

extern dSamp *dataQ;

uint8_t addData();


#endif
