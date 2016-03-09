/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IoTTcpServer.h
 * Author: iot
 *
 * Created on 9 marzo 2016, 16.08
 */

#ifndef IOTTCPSERVER_H
#define IOTTCPSERVER_H

#include "mongoose.h"

namespace IoT {
    namespace Network {
        namespace Tcp {

            class IoTTcpServer {
            public:
                IoTTcpServer();
                virtual ~IoTTcpServer();
            private:
                struct mg_mgr *mgr;
                struct mg_connection *nc;
            };
        }
    }
}
#endif /* IOTTCPSERVER_H */

