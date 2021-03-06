/* 
 * File:   IoTApplication.cpp
 * Author: iot
 * 
 * Created on 17 giugno 2015, 22.08
 */

#include <exception>
#include <cstdlib>
#include <cstdio>

#include "../header/IoTApplication.h"
#include "../header/IoTLogger/IoTLoggerBuilder.h"
#include "../header/model/IoTDatabase.h"


using namespace IoT;
using namespace IoT::Logging;
using namespace IoT::Model::Engine;
using namespace std;

IoTApplication * IoTApplication::app = 0x00;

IoTApplication::IoTApplication() {
    IoTApplication::app = this;
    IoTLoggerBuilder * builder = new IoTLoggerBuilder();
    this->logger = builder->getLogger();
    delete builder;
    
    this->database = new IoTDatabase();
}

IoTApplication::~IoTApplication() {
    try {
        if (this->logger) {
            delete this->logger;
            delete this->database;
        }
    } catch (std::exception *ex) {
        printf(ex->what());
    }
}

/**
 * 
 * @return 
 */
IoTApplication * IoTApplication::getApp() {
    return IoTApplication::app;
}

IoTLogger * IoTApplication::getLogger() {
    return this->logger;
}