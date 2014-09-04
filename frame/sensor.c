
// Fazer retirada das bibliotecas acima
#include "sensor.h"


int setUpTouchSensor(const byte &port1,const byte &port2,int qtd,int *resultSensor1, int *resultSensor2){
	
	if(qtd == 1){
		SetSensorTouch(port1);
		*resultSensor1=1;
		*resultSensor2=0;
	}else if(qtd == 2){
		SetSensorTouch(port1);
		SetSensorTouch(port2);
		*resultSensor1=1;
		*resultSensor2=1;

	} else{
		*resultSensor1 =-1;		 
		*resultSensor2 =-1;
		return 0;
	}
	
	return 1;
}

/*
	result1 or result2 = -1(fail) => qtd is not equal to 1 or 2
	result1 or result2 = 0(false)
	result1 or result2 = 1(true)
*/

void touchSensor(const byte &port1,const byte &port2,int qtd,int *resultSensor1, int *resultSensor2){


	if(setUpTouchSensor(port1,port2,qtd,resultSensor1,resultSensor2) == 0){
		return;
	}
		
/*
	Exemple
		
	while(true){
		// Sensor 1 or 2 touch
		if(Sensor(port1) == 1 || Sensor(port2) == 1){
			TextOut(0,0,"Sensor tocou!");
			// implementar o que quiser aqui, mudar retorno caso precise
		}
		else{
			TextOut(0,0,"Sensor nao tocou!");
			*resultSensor1 = 0;
			*resultSensor2 = 0;
			// implementar o que quiser aqui

		}
*/
}


color colorSensor(const byte &port, unsigned long waitTime){

	color colorRead;

	SetSensorColorFull(port);
	Wait(waitTime);
	ClearScreen();
	
	NumOut(0,0,port);
	
	colorRead.brightness = port;
	
	colorRead.r = ColorSensorValue(port, INPUT_RED);
	colorRead.g = ColorSensorValue(port, INPUT_GREEN);
	colorRead.b = ColorSensorValue(port, INPUT_BLUE);

	NumOut(0, LCD_LINE1,colorRead.r);
	NumOut(0, LCD_LINE2,colorRead.g);
	NumOut(0, LCD_LINE3,colorRead.b);

	return colorRead;

}



