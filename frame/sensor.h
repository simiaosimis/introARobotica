#ifndef _SENSOR_H
#define _SENSOR_H

int setUpTouchSensor(const byte &port1,const byte &port2,int qtd,int &resultSensor1, int &resultSensor2);
void touchSensor(const byte &port1,const byte &port2,int qtd,int &resultSensor1, int &resultSensor2);

#endif
