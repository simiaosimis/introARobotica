#ifndef _SENSOR_H
#define _SENSOR_H

struct color{
	unsigned long brightness;
	unsigned long r;
	unsigned long g;
	unsigned long b;
};

struct sensor{
	int isSet;
	int isTouching;
};

void setUpTouchSensor(const byte &port1, const byte &port2);
void touchSensor(const byte &port1,const byte &port2,sensor &sensor1, sensor &sensor2);
color colorSensor(const byte &port, unsigned long waitTime);
#endif
