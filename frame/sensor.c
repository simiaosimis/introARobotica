
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
	result1 and result2 = -1 => qtd is not equal to 1 or 2
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
			// implementar o que quiser aqui

		}
*/

}


