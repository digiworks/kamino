/* 
 * File:   IoTFileLogger.h
 * Author: iot
 *
 * Created on 26 giugno 2015, 20.09
 */

#ifndef IOTFILELOGGER_H
#define	IOTFILELOGGER_H
#include "IoTLogger.h"
#include <stddef.h>
#include <string>
#include <cstring>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;

namespace IoT {
    namespace Logging {

        class IoTFileLogger : public IoTLogger {
        public:
            IoTFileLogger(const char* fileName, std::size_t maxFileSize, int maxFiles);
            virtual ~IoTFileLogger();

            virtual void severe(const char *);
            virtual void warning(const char *);
            virtual void error(const char *);
            virtual void info(const char *);
            virtual void debug(const char *);
        private:
            virtual void open();
            std::string buildFileName(int fileNumber);
            void splitFileName(const char* fileName, std::string& fileNameNoExt, std::string& fileExt);
            void write(const char *);

            std::ofstream *m_file;
            size_t m_fileSize;
            const size_t m_maxFileSize;
            const int m_lastFileNumber;
            std::string m_fileExt;
            std::string m_fileNameNoExt;
            bool m_firstWrite;
        };
    }
}
#endif	/* IOTFILELOGGER_H */

