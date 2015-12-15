/* 
 * File:   IoTFile.h
 * Author: iot
 *
 * Created on 23 giugno 2015, 21.18
 */

#ifndef IOTFILE_H
#define	IOTFILE_H



namespace IoT{namespace IO { namespace File{
class IoTFile {
public:
    IoTFile();
    virtual ~IoTFile();
    
    virtual void open() = 0;
    virtual void close() = 0;
    virtual void seek() = 0;
    virtual void write(char *) = 0;
    virtual char * read() = 0;
private:
    
};
}}}
#endif	/* IOTFILE_H */

