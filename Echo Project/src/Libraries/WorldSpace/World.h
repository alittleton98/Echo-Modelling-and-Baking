#pragma once
#include "WorldObject.h"
#include "Common.h"
#include "Room.h"
//#include <vector>

//Class for world space geometric representation
class CWorldSpace {

	//Member Variables
private:
	float m_XDimension; 
	float m_YDimension;
	float m_ZDimension;
	FILE m_WorldFile;


	void AddObjectToWorld(CWorldObject* pWorldObject);
	void RemoveObjectFromWorld(CWorldObject* pWorldObject);

public:
	s_WorldLocation Origin = s_WorldLocation{0.0f, 0.0f, 0.0f};
	std::vector<CWorldObject*> m_WorldObjectList;
	std::vector<CRoom*> m_ListOfRooms;

	// Constructors and Destructor
	CWorldSpace();
	CWorldSpace(float pXDimension, float pYDimension, float pZDimension);
	CWorldSpace(FILE pWorldFile);
	~CWorldSpace();

	static s_WorldLocation SetLocation(float pX, float pY, float pZ);
	static s_QuatWorldRotation SetQuaternionRotation(float pW, float pX, float pY, float pZ);
	static s_EuWorldRotation SetEulerRotation(float pX, float pY, float pZ);

	void CreateRoom();
	
};