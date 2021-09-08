#pragma once
#include "WorldObject.h"
//#include "Common.h"
#include <vector>

//Class for world space geometric representation
class WorldSpace {

	//Member Variables
private:
	float XDimension; 
	float YDimension;
	float ZDimension;

public:
	WorldLocation Origin = WorldLocation{0.0f, 0.0f, 0.0f};
	std::vector<WorldObject> WorldObjectList; 

	WorldSpace();
	WorldSpace(float pXDimension, float pYDimension, float pZDimension);
	~WorldSpace();

	static WorldLocation SetLocation(float pX, float pY, float pZ);
	static QuatWorldRotation SetQuaternionRotation(float pW, float pX, float pY, float pZ);
	static EuWorldRotation SetEulerRotation(float pX, float pY, float pZ);
	
};