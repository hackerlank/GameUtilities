#pragma once

/*****************************************/
/*****************************************/
/* Used to pass around text information. */
/*****************************************/
/*****************************************/

#include <Windows.h>
#include <string>

#include "Globals.h"
#include "Point2D.h"

namespace GameUtilities
{
	struct D3DTextInfo
	{
		std::string    contents;
		Point2D        position;
		uint           fontSize; // 1(small)-10(large)
		BYTE           argb[4]; // [0]=alpha, [1]=red, [2]=green, [3]=blue
	};

}