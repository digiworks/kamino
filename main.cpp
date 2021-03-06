/* 
 * File:   main.cpp
 * Author: iot
 *
 * Created on 16 giugno 2015, 19.54
 */

#include <cstdlib>
#include <cstdio>
#include <memory>
#include <thread>

#include "header/IoTApplication.h"

using namespace std;
using namespace IoT;

/*
 * 
 */
int main(int argc, char** argv) {
    
    IoTApplication *app = new IoTApplication();
    
    IoTApplication::getApp()->getLogger()->info("----------------\n");
    IoTApplication::getApp()->getLogger()->info("Ciao Sono Kamino\n");
    IoTApplication::getApp()->getLogger()->info("----------------\n");
    
    delete app;
    return 0;
}

