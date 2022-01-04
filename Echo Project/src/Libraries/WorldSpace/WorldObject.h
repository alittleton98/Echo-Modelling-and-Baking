#pragma once
#include "Common.h"
#include <string>

//Transform types to be used by any object within the world
	//WorldLocation type identifies an objects anchor location in the world
typedef struct s_WorldLocation {
	float VectorX = 0.0f;
	float VectorY = 0.0f;
	float VectorZ = 0.0f;
} s_WorldLocation;

//Quat WorldRotation type identifies an objects rotation in the world relative to the axes it coordinates to using quaternions.
typedef struct s_QuatWorldRotation {
	float W = 1.0f;
	float X = 0.0f;
	float Y = 0.0f;
	float Z = 0.0f;
} s_QuatWorldRotation;

//EuWorldRotation type identifies an objects rotation in the world relative to the axes it coordinates to using euler angles.
typedef struct s_EuWorldRotation {
	float X = 0.0f;
	float Y = 0.0f;
	float Z = 0.0f;
} s_EuWorldRotation;

// Wrapper struct for world object
typedef struct s_Transform {
	s_WorldLocation ObjectLocation;
	s_QuatWorldRotation ObjectQRotation;
	s_EuWorldRotation ObjectERotation;
}Transform;

class CWorldObject {
	
public:

	s_Transform m_Transform;
	std::string m_name;

	CWorldObject();
	CWorldObject(std::string pName);
	CWorldObject(s_WorldLocation pWorldLocation, std::string pName);
	~CWorldObject();

	s_Transform GetTransform();
	std::string GetName();

};