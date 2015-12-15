/* 
 * File:   IoTFileException.cpp
 * Author: iot
 * 
 * Created on 24 giugno 2015, 21.35
 */

#include "../../header/IoTException/IoTFileException.h"
using namespace IoT::IoTException;

IoTFileException::IoTFileException() {
}


IoTFileException::~IoTFileException() throw() {
}

const char* IoTFileException::what() throw(){
    return "File Exception";
}