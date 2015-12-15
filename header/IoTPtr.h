/* 
 * File:   IoTPtr.h
 * Author: iot
 *
 * Created on 17 giugno 2015, 22.15
 */

#ifndef IOTPTR_H
#define	IOTPTR_H
namespace IoT{ namespace Memory{
    class IoTPtr {
    public:
        IoTPtr(unsigned int size);
        virtual ~IoTPtr();
        
    private:
        void *ptr;
    };
}}
#endif	/* IOTPTR_H */

