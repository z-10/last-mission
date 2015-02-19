#ifndef __GNUC__
#define __attribute__(A)
#endif
#include "m_data.h"

unsigned char SkyMap[9][21] = {
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
	{0,0,0,0,1,0,0,0,0,3,0,0,0,0,0,5,0,0,0,0,0},
	{0,7,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,7,0,8,0},
	{0,0,0,0,3,0,6,0,0,0,0,0,0,0,0,0,0,9,1,0,0},
	{0,0,2,0,0,0,0,0,1,8,0,0,0,4,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,2,0},
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,5,0,0,8,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

unsigned char STATUSBAR1[] = {
	 0, 18, 38, 39, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 41, 42, 38, 39, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 41, 42, 0, 
	 0, 19, 51, 55, 86, 55, 87, 55, 86, 55, 55, 75, 72, 72, 72, 72, 72, 72, 72, 72, 76, 80, 81, 75, 72, 72, 72, 72, 72, 72, 72, 72, 76, 55, 55, 86, 55, 87, 55, 86, 55, 53, 0, 
	 0, 20, 47, 55, 43, 56, 57, 58, 59, 55, 85, 74, 79, 79, 79, 79, 79, 79, 1, 1, 73, /* life bar: */ 84, 84, 74, 79, 79, 79, 79, 79, 79, 79, 79, 73, 85, 55, 59, 64, 68, 58, 62, 55, 44, 0, 
	 0, 21, 47, 55, 60, 61, 58, 62, 63, 64, 85, 74, 79, 79, 79, 79, 1, 1, 1, 1, 73, 84, 84, 74, 79, 79, 79, 79, 79, 79, 1, 1, 73, 85, 55, 57, 56, 69, 64, 68, 55, 44, 0, 
	 0, 22, 47, 55, 65, 61, 43, 66, 67, 68, 85, 74, 1, 1, 1, 1, 1, 1, 1, 1, 73, 84, 84, 74, 1, 1, 1, 1, 1, 1, 1, 1, 73, 85, 62, 58, 70, 67, 62, 69, 55, 44, 0, 
	 0, 23, 52, 55, 55, 55, 55, 55, 55, 55, 55, 77, 71, 71, 71, 71, 71, 71, 71, 71, 78, 82, 83, 77, 71, 71, 71, 71, 71, 71, 71, 71, 78, 55, 55, 55, 55, 55, 55, 55, 55, 54, 0, 
	 0, 24, 48, 49, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 46, 45, 48, 49, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 46, 45, 0
};
