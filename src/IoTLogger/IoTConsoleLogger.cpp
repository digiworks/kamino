/* 
 * File:   IoTConsoleLogger.cpp
 * Author: iot
 * 
 * Created on 26 giugno 2015, 21.54
 */

#include "../../header/IoTLogger/IoTConsoleLogger.h"
using namespace IoT::Logging;
using namespace std;


IoTConsoleLogger::IoTConsoleLogger() {
}


IoTConsoleLogger::~IoTConsoleLogger() {
}

/**
 * 
 * @param message
 */
void IoTConsoleLogger::debug(const char*message){
    cout << message;
}

/**
 * 
 * @param message
 */
void IoTConsoleLogger::error(const char*message){
    cout << message;
}

/**
 * 
 * @param message
 */
void IoTConsoleLogger::info(const char*message){
    cout << message;
}

/**
 * 
 * @param message
 */
void IoTConsoleLogger::severe(const char*message){
    cout << message;
}

/**
 * 
 * @param message
 */
void IoTConsoleLogger::warning(const char*message){
    cout << message;
}