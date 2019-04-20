#ifndef WMUltrasonic_H
#define WMUltrasonic_H

#include "SR04.h"
#include "WMPort.h"

class WMUltrasonic:public SR04
{
	public:

		WMUltrasonic(int port);
};
#endif