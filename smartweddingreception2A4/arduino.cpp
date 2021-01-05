#include "arduino.h"

arduino::arduino()
{
}

int arduino::connect_arduino()
{
    foreach(const QSerialPortInfo &serial_port_info, QSerialPortInfo::availablePorts()){

if(serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier()){
    if(serial_port_info.vendorIdentifier()==arduino_uno_producy_id && serial_port_info.productIdentifier()== arduino_uno_producy_id){
        arduino_is_avaible= true;
        arduino_port_name=serial_port_info.portName();
    }
    }
}
qDebug() << "arduino_port_name is :"<<arduino_port_name;
int retour=-1;

if(arduino_is_avaible){

    serial->setPortName(arduino_port_name);
    if(serial->open(QSerialPort::ReadWrite)){
        serial->setBaudRate(QSerialPort::Baud9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);
        retour=0;
    }
    retour=1;
}
return retour;
}
int arduino::close_arduino()
{
    if(serial->isOpen()){
        serial->close();
        return 0;
    }
    return 1;
}
QByteArray arduino::read_from_arduino()
{
    if(serial->isReadable())
    {
        data=serial->readAll();
        return data;
    }
}
int arduino::write_to_arduino(QByteArray d)
{
    if(serial->isWritable())
    {
        serial->write(d);
    }
    else
       {
        qDebug()<< "could not write to serial !";

    }
}


