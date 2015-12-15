/* 
 * File:   IoTFileText.h
 * Author: iot
 *
 * Created on 23 giugno 2015, 21.29
 */

#ifndef IOTFILETEXT_H
#define	IOTFILETEXT_H
#include <iostream>
#include <fstream>
#include <string>
#include "IoTFile.h"
using namespace std;


namespace IoT{namespace IO { namespace File{
class IoTFileText : public IoTFile  {
public:
    IoTFileText();
    virtual ~IoTFileText();
    
    virtual void open();
    virtual void close();
private:
    ifstream *file;
};
}}}
#endif	/* IOTFILETEXT_H */

