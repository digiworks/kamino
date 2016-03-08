/* 
 * File:   IoTApplication.h
 * Author: iot
 *
 * Created on 17 giugno 2015, 22.08
 */

#ifndef IOTAPPLICATION_H
#define	IOTAPPLICATION_H

#include "../header/IoTLogger/IoTLogger.h"
#include "../header/model/IoTDatabase.h"

using namespace IoT::Logging;
using namespace IoT::Model::Engine;

namespace IoT{
    class IoTApplication {
    public:
        IoTApplication();
        virtual ~IoTApplication();
        
        static IoTApplication* getApp();
        IoTLogger *getLogger();
    private:
        static IoTApplication* app;
        
        IoTLogger * logger;
        IoTDatabase * database;
    };
}
#endif	/* IOTAPPLICATION_H */

