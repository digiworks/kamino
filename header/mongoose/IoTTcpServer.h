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
                static void ev_handler(struct mg_connection *nc, int ev, void *ev_data) ;
                virtual void open();
                virtual void close();
            private:
                struct mg_mgr mgr;
                struct mg_connection *nc = NULL;
                struct mg_serve_http_opts s_http_server_opts;
                
                bool isOpen ;
                bool isRunning;
            };
        }
    }
}
#endif /* IOTTCPSERVER_H */

