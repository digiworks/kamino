/* 
 * File:   IoTLoggerBuilder.cpp
 * Author: iot
 * 
 * Created on 20 giugno 2015, 17.02
 */

#include "../../header/IoTLogger/IoTLoggerBuilder.h"
#include "../../header/IoTLogger/IoTConsoleLogger.h"
using namespace IoT::Logging;

IoTLoggerBuilder::IoTLoggerBuilder() {
}

IoTLoggerBuilder::~IoTLoggerBuilder() {
}

/**
 * 
 * @return 
 */
IoTLogger *IoTLoggerBuilder::getLogger() {
    IoTLogger * logger = 0x00;
    logger = new IoTConsoleLogger();
    return (IoTLogger*) logger;
}