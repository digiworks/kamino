/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IoTTcpServer.cpp
 * Author: iot
 * 
 * Created on 9 marzo 2016, 16.08
 */

#include "../../header/mongoose/IoTTcpServer.h"
#include <exception>
#include <cstdlib>


using namespace IoT::Network::Tcp;
using namespace std;

IoTTcpServer::IoTTcpServer() {
    this->isOpen = false;
    this->isRunning = false;

}

IoTTcpServer::~IoTTcpServer() {

}

/**
 * 
 * @return 
 */
void IoTTcpServer::open() {
    try {
        mg_mgr_init(&this->mgr, NULL);
        //nc = mg_bind(&this->mgr, s_http_port, ev_handler);
        mg_set_protocol_http_websocket(nc);
        this->s_http_server_opts.document_root = "web_root";

        this->isOpen = true;
    } catch (std::exception *ex) {

    }
}

/**
 * 
 * @return 
 */
void IoTTcpServer::close() {

    if(this->isOpen){
        mg_mgr_free(&this->mgr);
    }
}

/**
 * 
 * @param nc
 * @param ev
 * @param ev_data
 */
static void ev_handler(struct mg_connection *nc, int ev, void *ev_data) {

}