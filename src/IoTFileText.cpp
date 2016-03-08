/* 
 * File:   IoTFileText.cpp
 * Author: iot
 * 
 * Created on 23 giugno 2015, 21.29
 */

#include "../header/IoTFileText.h"
#include "../header/IoTApplication.h"

#include "../header/IoTException/IoTFileException.h"
#include <exception>

using namespace IoT;
using namespace IoT::IO::File;
using namespace IoT::IoTException;


IoTFileText::IoTFileText() {
}



IoTFileText::~IoTFileText() {
}

/**
 * 
 */
void IoTFileText::open(){
    try{
        
    }catch(std::exception *ex){
        IoTApplication::getApp()->getLogger()->error(ex->what());
        throw  IoTFileException() ;
    }
}

/**
 * 
 */
void IoTFileText::close(){
    try{
        
    }catch(std::exception *ex){
        IoTApplication::getApp()->getLogger()->error(ex->what());
        throw IoTFileException();
    }
}