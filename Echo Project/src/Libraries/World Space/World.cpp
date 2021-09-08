#include "World.h"

//Construct world with default values
WorldSpace::WorldSpace() {
	//Default dimensions yield an average sized space similar to a small square living room
	XDimension = 10.0f;
	YDimension = 10.0f;
	ZDimension = 8.0f;
}

WorldSpace::WorldSpace(float pXDimension, float pYDimension, float pZDimension) {
	XDimension = pXDimension;
	YDimension = pYDimension;
	ZDimension = pZDimension;
}

WorldSpace::~WorldSpace() {
	delete this;
}