#include "WMUltrasonic.h"

WMUltrasonic::WMUltrasonic(int port):SR04(wmPort[port].pin2,wmPort[port].pin1)
{
	
}