#ifndef sampling_h
#define sampling_h

#include <inttypes.h>
#include <avr/interrupt.h>
#include "adcLib.h"
#include "structure.h"

#define HIGHEST_CHANNEL 8

typedef enum startStop {
    START,
    STOP,
    YIELD,
    GO
}startS;

extern uint8_t cur_channel, read, startSamp, buf1_end, temp_test;
extern uint8_t buf1[255];
extern startS ss;

void nextChannel();
uint8_t findNext(uint8_t cur);
uint8_t addData();
startS start();
startS stop();
void setRate(uint8_t adcRate, uint8_t prescale, uint8_t compareH, uint8_t compareL);
uint8_t otherBuf();
void switchBuf();
void interruptEnableDisable(uint8_t ed);
unsigned int readData();
uint8_t switchBuffer();

#endif
