#ifndef WMBoard_H
#define WMBoard_H

#include "WMPort.h"

#define NC (0)

WMPin wmPort[11] = 
{
	{NC,NC},{1,0},{3,11},
	{9,10},{12,A6},{A0,A1},
	{A2,A3},{7,5},{8,6},
	{3,4}, {11, 12}
};

#endif
