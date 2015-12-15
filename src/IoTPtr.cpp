/* 
 * File:   IoTPtr.cpp
 * Author: iot
 * 
 * Created on 17 giugno 2015, 22.15
 */

#include <stdlib.h>

#include "../header/IoTPtr.h"
using namespace IoT::Memory;
using namespace std;

IoTPtr::IoTPtr(unsigned int size) {
    this->ptr = malloc(size);
}


IoTPtr::~IoTPtr() {
    free(this->ptr);
}

