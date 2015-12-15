/* 
 * File:   IoTConsoleLogger.h
 * Author: iot
 *
 * Created on 26 giugno 2015, 21.54
 */

#ifndef IOTCONSOLELOGGER_H
#define	IOTCONSOLELOGGER_H
#include "IoTLogger.h"
#include <iostream>

namespace IoT {
    namespace Logging {

        class IoTConsoleLogger : public IoTLogger {
        public:
            IoTConsoleLogger();
            virtual ~IoTConsoleLogger();
            virtual void severe(const char *);
            virtual void warning(const char *);
            virtual void error(const char *);
            virtual void info(const char *);
            virtual void debug(const char *);
        private:

        };
    }
}
#endif	/* IOTCONSOLELOGGER_H */

