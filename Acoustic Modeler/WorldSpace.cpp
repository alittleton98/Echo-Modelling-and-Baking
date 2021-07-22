#include "WorldSpace.h"

WorldSpace::WorldSpace()
{
}

WorldSpace::WorldLocation WorldSpace::LocationSet(float x, float y, float z)
{
	WorldLocation NewLocation;
	NewLocation.VectorX = x;
	NewLocation.VectorY = y;
	NewLocation.VectorZ = z;

	return NewLocation;
}

WorldSpace::WorldRotation WorldSpace::RotationSet(float w, float x, float y, float z)
{
	WorldRotation NewRotation;
	//populate rotation
	NewRotation.W = 1.0f;
	NewRotation.X = 1.0f;
	NewRotation.Y = 1.0f;
	NewRotation.Z = 1.0f;
	return NewRotation;
}