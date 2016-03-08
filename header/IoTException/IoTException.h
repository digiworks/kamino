/* 
 * File:   IoTException.h
 * Author: iot
 *
 * Created on 24 giugno 2015, 21.11
 */

#ifndef IOTEXCEPTION_H
#define	IOTEXCEPTION_H
#include <exception>
using namespace std;


namespace IoT{namespace IoTException{
    class IoTException : public std::exception {
    public:
        IoTException() ;
        virtual ~IoTException() throw();
        virtual const char* what() throw() = 0;
    private:

    };
}}
#endif	/* IOTEXCEPTION_H */

