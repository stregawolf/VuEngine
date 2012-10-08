#ifndef _VUCOLOR_H_
#define _VUCOLOR_H_

#include <glm/glm.hpp>

namespace VU
{
	typedef glm::vec3 cVUColorRGB;
	typedef glm::vec4 cVUColorRGBA;

	const static cVUColorRGB kVUColorWhite(1.0, 1.0, 1.0); 
	const static cVUColorRGBA kVUColorWhiteA0(1.0, 1.0, 1.0, 0.0); 
	const static cVUColorRGBA kVUColorWhiteA1(1.0, 1.0, 1.0, 1.0); 
	
	const static cVUColorRGB kVUColorBlack(0.0, 0.0, 0.0);
	const static cVUColorRGBA kVUColorBlackA0(0.0, 0.0, 0.0, 0.0);
	const static cVUColorRGBA kVUColorBlackA1(0.0, 0.0, 0.0, 1.0);

	const static cVUColorRGB kVUColorRed(1.0, 0.0, 0.0);
	const static cVUColorRGBA kVUColorRedA0(1.0, 0.0, 0.0, 0.0);
	const static cVUColorRGBA kVUColorRedA1(1.0, 0.0, 0.0, 1.0);

	const static cVUColorRGB kVUColorGreen(0.0, 1.0, 0.0);
	const static cVUColorRGBA kVUColorGreenA0(0.0, 1.0, 0.0, 0.0);
	const static cVUColorRGBA kVUColorGreenA1(0.0, 1.0, 0.0, 1.0);

	const static cVUColorRGB kVUColorBlue(0.0, 0.0, 1.0);
	const static cVUColorRGBA kVUColorBlueA0(0.0, 0.0, 1.0, 0.0);
	const static cVUColorRGBA kVUColorBlueA1(0.0, 0.0, 1.0, 1.0);
}
#endif