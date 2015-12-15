/* 
 * File:   IoTFileException.h
 * Author: iot
 *
 * Created on 24 giugno 2015, 21.35
 */

#ifndef IOTFILEEXCEPTION_H
#define	IOTFILEEXCEPTION_H
#include "IoTException.h"
using namespace IoT::IoTException;

namespace IoT{namespace IoTException{
    class IoTFileException : public IoTException {
    public:
        IoTFileException();
        virtual ~IoTFileException() throw();
        virtual const char* what() throw();
    private:

    } ;
}}
#endif	/* IOTFILEEXCEPTION_H */

