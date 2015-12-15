/* 
 * File:   main.cpp
 * Author: iot
 *
 * Created on 16 giugno 2015, 19.54
 */

#include <cstdlib>
#include <cstdio>
#include <memory>

#include "header/IoTApplication.h"


#include <odb/database.hxx>
#include <odb/transaction.hxx>

#include <odb/mysql/database.hxx>

using namespace std;
using namespace IoT;


using namespace odb::core;

/*
 * 
 */
int main(int argc, char** argv) {

    auto_ptr<database> db (new odb::mysql::database (argc, argv));
     
    IoTApplication *app = new IoTApplication();
    
    IoTApplication::getApp()->getLogger()->info("----------------\n");
    IoTApplication::getApp()->getLogger()->info("Ciao Sono Kamino\n");
    IoTApplication::getApp()->getLogger()->info("----------------\n");
    
    delete app;
    return 0;
}

