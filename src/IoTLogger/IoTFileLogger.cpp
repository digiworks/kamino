/* 
 * File:   IoTFileLogger.cpp
 * Author: iot
 * 
 * Created on 26 giugno 2015, 20.09
 */

#include "../../header/IoTLogger/IoTFileLogger.h"
using namespace IoT::Logging;
using namespace std;

IoTFileLogger::IoTFileLogger(const char* fileName, size_t maxFileSize = 0, int maxFiles = 0) :
m_fileSize(),
m_maxFileSize((std::max)(maxFileSize, static_cast<size_t> (1000))), // set a lower limit for the maxFileSize
m_lastFileNumber((std::max)(maxFiles - 1, 0)) {
    this->splitFileName(fileName, m_fileNameNoExt, m_fileExt);
    this->m_file = new ofstream();
}

IoTFileLogger::~IoTFileLogger() {

    if (this->m_file->is_open()) {
        this->m_file->close();
    }
    delete this->m_file;
}

/*
 */
void IoTFileLogger::open() {
    char header[] = "Inizio";
    std::string fileName = buildFileName(this->m_lastFileNumber);
    m_file->open(fileName.c_str(), ios::in | ios::out | ios::binary);

    if (m_file->is_open()) {
        int bufsize = strlen(header);

        m_fileSize = m_file->tellp();
        this->write(header);
    }
}

/**
 * 
 * @param fileName
 * @param fileNameNoExt
 * @param fileExt
 */
void IoTFileLogger::splitFileName(const char* fileName, std::string& fileNameNoExt, std::string& fileExt) {
    const char* dot = strrchr(fileName, '.');

    if (dot) {
        fileNameNoExt.assign(fileName, dot);
        fileExt.assign(dot + 1);
    } else {
        fileNameNoExt.assign(fileName);
        fileExt.clear();
    }
}

/**
 * 
 * @param fileNumber
 * @return 
 */
std::string IoTFileLogger::buildFileName(int fileNumber = 0) {
    std::stringstream ss;
    ss << m_fileNameNoExt;

    if (fileNumber > 0) {
        ss << '.' << fileNumber;
    }

    if (!m_fileExt.empty()) {
        ss << '.' << m_fileExt;
    }

    return ss.str();
}

/**
 * 
 * @param buf
 */

void IoTFileLogger::write(const char* buf) {
    try {
        if (this->m_file->is_open()) {
            int size = strlen(buf);
            this->m_file->write(buf, size);
            this->m_fileSize += size;
        }
    } catch (exception *ex) {
        cout << ex->what();
    }
}

void IoTFileLogger::debug(const char*message) {

    this->write(message);

}

void IoTFileLogger::error(const char*message) {

    this->write(message);

}

void IoTFileLogger::info(const char*message) {

    this->write(message);

}

void IoTFileLogger::severe(const char*message) {

    this->write(message);

}

void IoTFileLogger::warning(const char*message) {
    this->write(message);
}