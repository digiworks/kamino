/* 
 * File:   IoTLoggerBuilder.h
 * Author: iot
 *
 * Created on 20 giugno 2015, 17.02
 */

#ifndef IOTLOGGERBUILDER_H
#define	IOTLOGGERBUILDER_H

#include "IoTLogger.h"
namespace IoT{ namespace Logging{
class IoTLoggerBuilder {
public:
    IoTLoggerBuilder();
    virtual ~IoTLoggerBuilder();
    
    static IoTLogger * getLogger();
    
private:

};
}}
#endif	/* IOTLOGGERBUILDER_H */

