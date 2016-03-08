/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IoTDatabase.h
 * Author: iot
 *
 * Created on 8 marzo 2016, 14.08
 */

#ifndef IOTDATABASE_H
#define IOTDATABASE_H

#include <cstdlib>
#include <cstdio>
#include <memory>


#include <odb/database.hxx>
#include <odb/transaction.hxx>

#include <odb/mysql/database.hxx>

using namespace std;
using namespace odb::core;

namespace IoT {
    namespace Model {
        namespace Engine {

            class IoTDatabase {
            public:
                IoTDatabase();
                
                virtual ~IoTDatabase();
            private:

                auto_ptr<database> db;

            };
        }
    }
}
#endif /* IOTDATABASE_H */

