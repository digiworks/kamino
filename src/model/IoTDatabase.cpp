/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IoTDatabase.cpp
 * Author: iot
 * 
 * Created on 8 marzo 2016, 14.08
 */

#include "../../header/model/IoTDatabase.h"

using namespace IoT::Model::Engine;
using namespace std;

IoTDatabase::IoTDatabase() {
    this->db = (auto_ptr<database>)(new odb::mysql::database("kamino", "kamino", "kamino"));
}

IoTDatabase::~IoTDatabase() {
    delete( this->db.release());
}

