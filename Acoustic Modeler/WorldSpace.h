#pragma once

//Class for world space geometric representation
class WorldSpace
{
public:
	struct WorldLocation
	{
		float VectorX = 0;
		float VectorY = 0;
		float VectorZ = 0;
	};
	struct WorldRotation
	{
		float W;
		float X;
		float Y;
		float Z;
	};

	WorldSpace();
	static WorldLocation LocationSet(float x, float y, float z);
	static WorldRotation RotationSet(float w, float x, float y, float z);
};
