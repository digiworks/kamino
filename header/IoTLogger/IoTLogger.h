/* 
 * File:   IoTLogger.h
 * Author: iot
 *
 * Created on 17 giugno 2015, 23.10
 */

#ifndef IOTLOGGER_H
#define	IOTLOGGER_H

/*
 Abstract class for logging
 */


namespace IoT {
    namespace Logging {

        class IoTLogger {
        public:
            IoTLogger();
            virtual ~IoTLogger();

            virtual void severe(const char *) = 0;
            virtual void warning(const char *) = 0;
            virtual void error(const char *) = 0;
            virtual void info(const char *) = 0;
            virtual void debug(const char *) = 0;

        private:

        };
    }
}
#endif	/* IOTLOGGER_H */

