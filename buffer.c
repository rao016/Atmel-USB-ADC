#include "buffer.h"

dSamp *dataQ = NULL;

uint8_t addData() {
    dSamp *temp = (dSamp*) malloc(sizeof(dSamp));
    dSamp *end = dataQ;
    
    if (temp != NULL) {
        temp->end = 0;
        temp->lock = 0;
        temp->next = NULL;
        
        if (dataQ == NULL) dataQ = temp;
        else {
            while(end->next != NULL) end = end->next;
            temp->prev = end;
            end->next = temp;
        }
        return 1;
    }
    else return NULL;
}

uint8_t rmData() {
    
}

uint8_t spaceAvail() {
    
}
