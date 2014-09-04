#ifndef _SENSOR_H
#define _SENSOR_H

struct color{
	unsigned long brightness;
	unsigned long r;
	unsigned long g;
	unsigned long b;
};

int setUpTouchSensor(const byte &port1,const byte &port2,int qtd,int &resultSensor1, int &resultSensor2);
void touchSensor(const byte &port1,const byte &port2,int qtd,int &resultSensor1, int &resultSensor2);
color colorSensor(const byte &port, unsigned long waitTime);
#endif
