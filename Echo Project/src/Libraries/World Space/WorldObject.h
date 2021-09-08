#pragma once
//#include "Common.h"
#include <string>

//Transform types to be used by any object within the world
	//WorldLocation type identifies an objects anchor location in the world
typedef struct WorldLocation {
	float VectorX = 0.0f;
	float VectorY = 0.0f;
	float VectorZ = 0.0f;
} WorldLocation;

//Quat WorldRotation type identifies an objects rotation in the world relative to the axes it coordinates to using quaternions.
typedef struct QuatWorldRotation {
	float W = 1.0f;
	float X = 0.0f;
	float Y = 0.0f;
	float Z = 0.0f;
} QuatWorldRotation;

//EuWorldRotation type identifies an objects rotation in the world relative to the axes it coordinates to using euler angles.
typedef struct EuWorldRotation {
	float X = 0.0f;
	float Y = 0.0f;
	float Z = 0.0f;
} EuWorldRotation;

typedef struct Transform {
	WorldLocation ObjectLocation;
	QuatWorldRotation ObjectQRotation;

};

class WorldObject {
	
public:

	WorldLocation ObjectLocation;
	QuatWorldRotation ObjectQRotation;
	EuWorldRotation ObjectERotation;
	std::string name;
};