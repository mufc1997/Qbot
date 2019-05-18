#ifndef WMLineFollower_H
#define WMLineFollower_H

#include "WMPort.h"




#define 	S1_OUT_S2_OUT 0x00//������1�ʹ�����2���ں�����
#define 	S1_OUT_S2_IN 0x01//������1�ں����⣬������2�ں�����
#define 	S1_IN_S2_OUT 0x02//������1�ں����ڴ�����2�ں�����	
#define 	S1_IN_S2_IN  0x03//������1�ʹ�����2���ں�����

class WMLineFollower:public WMPort
{
	public:
		WMLineFollower(void);
		WMLineFollower(uint8_t port);
		WMLineFollower(uint8_t pin1,uint8_t pin2);
		bool readSensor1Status();
		bool readSensor2Status();
		bool readEdgeSensor1Status();
		bool readEdgeSensor2Status();

		/*
		*��������:���ش�����״̬
		*����ֵ:������״̬
		*����:��
		*/

		int readSensors(void);

		
		/*
		*��������:���ش�����״̬
		*����ֵ:������״̬
		*����:�������Ա�״̬
		*/
		bool readSensorStatus(uint8_t sensorStatus);

	private:
		volatile uint8_t sensor1Pin;
		volatile uint8_t sensor2Pin;
		
};

#endif
