#include "World.h"
#include "Room.h"

/* CONSTRUCTORS AND DESTRUCTORS FOR WORLD, WORLD OBJECTS, AND ROOM */

//Construct world with default values
CWorldSpace::CWorldSpace() {
	//Default dimensions yield an average sized space similar to a small square living room
	m_XDimension = 10.0f;
	m_YDimension = 10.0f;
	m_ZDimension = 8.0f;
}

// Construct world with custom values
CWorldSpace::CWorldSpace(float pXDimension, float pYDimension, float pZDimension) : m_XDimension(pXDimension), m_YDimension(pYDimension), m_ZDimension(pZDimension) {
}

// TODO: Write this based on proposed serialization
// Generate world space from a file
CWorldSpace::CWorldSpace(FILE pWorldFile) {

}

// Destroy world (safely)
CWorldSpace::~CWorldSpace() {
	int i = (int) m_WorldObjectList.size();
	CWorldObject* tempObj;

	// delete all world objects
	while (m_WorldObjectList.size() > 0) {
		tempObj =  m_WorldObjectList.at(i);
		m_WorldObjectList.pop_back();
		delete tempObj;
	}
	// delete world
	delete this;
}

// Create world object with default values
CWorldObject::CWorldObject(){
	s_WorldLocation objectLocation;
	s_EuWorldRotation worldRotation;

	m_name = "";
	m_Transform.ObjectLocation = objectLocation;
	m_Transform.ObjectERotation = worldRotation;
}

// Create world object with a name and default values
CWorldObject::CWorldObject(std::string pName) {
	s_WorldLocation objectLocation;
	s_EuWorldRotation worldRotation;
	
	m_name = pName;
	m_Transform.ObjectLocation = objectLocation;
	m_Transform.ObjectERotation = worldRotation;

}

// Construct world object with a location and name
CWorldObject::CWorldObject(s_WorldLocation pObjectLocation, std::string pName) {
	s_EuWorldRotation worldRotation;
	
	m_Transform.ObjectLocation = pObjectLocation;
	m_name = pName;
	m_Transform.ObjectERotation = worldRotation;
}

// destroy world object
CWorldObject::~CWorldObject() {
	delete this;
}

// construct empty room object
CRoom::CRoom() {

}

// destroy room and all objects within it
CRoom::~CRoom() {

	int i;
	s_Wall* tempWall;
	CEdge* tempEdge;
	CNode* tempNode;

	while (m_WallList.size() > 0) {
		tempWall = m_WallList.at(m_WallList.size());
		m_WallList.pop_back();
		delete tempWall;
	}

	while (m_EdgeList.size() > 0) {
		tempEdge = m_EdgeList.at(m_EdgeList.size());
		m_EdgeList.pop_back();
		delete tempEdge;
	}
	while (m_NodeList.size() > 0) {
		tempWall = m_WallList.at(m_WallList.size());
		m_WallList.pop_back();
		delete tempWall;
	}

	delete this;
}

// TODO: Come up with naming convention for Nodes
// Create edge with no name
CEdge::CEdge(CNode* pNodeA, CNode* pNodeB) {
	CWorldObject("");
	m_AttachedNodes[0] = pNodeA;
	m_AttachedNodes[1] = pNodeB;
}

// Create node with default ID
CNode::CNode() {
	int defaultNodeID[8] = { 0,0,0,0,0,0,0,0 };

	bIsNodeOrigin = false;
	memcpy(m_NodeID, defaultNodeID, 8 * sizeof(short));

}

// TODO: Create node ID pattern from transform
// Create Node with transform and identity as node origin
CNode::CNode(s_Transform pNodeTransform, bool bIsNodeOrigin) {
	m_Transform = pNodeTransform;
	bIsNodeOrigin = bIsNodeOrigin;
	int defaultNodeID[8] = { 0,0,0,0,0,0,0,0 };
	memcpy(m_NodeID, defaultNodeID, 8 * sizeof(short));
}

// Create node with transform and default values
CNode::CNode(s_Transform pNodeTransform) {
	int defaultNodeID[8] = { 0,0,0,0,0,0,0,0 };

	m_Transform = pNodeTransform;
	bIsNodeOrigin = false;
	
	memcpy(m_NodeID, defaultNodeID, 8 * sizeof(short));
}

// Create node with explict world location and identity as node origin
CNode::CNode(float pX, float pY, float pZ, bool pIsNodeOrigin) {
	int defaultNodeID[8] = { 0,0,0,0 };

	m_Transform.ObjectLocation.VectorX = pX;
	m_Transform.ObjectLocation.VectorY = pY;
	m_Transform.ObjectLocation.VectorZ = pZ;
	bIsNodeOrigin = pIsNodeOrigin;
	
	memcpy(m_NodeID, defaultNodeID, 8 * sizeof(short));
}

// Create node with explict world location and default values
CNode::CNode(float pX, float pY, float pZ) {
	int defaultNodeID[8] = { 0,0,0,0,0,0,0,0 };

	m_Transform.ObjectLocation.VectorX = pX;
	m_Transform.ObjectLocation.VectorY = pY;
	m_Transform.ObjectLocation.VectorZ = pZ;
	bIsNodeOrigin = false;

	memcpy(m_NodeID, defaultNodeID, 8 * sizeof(short));
}


/* OPERATIONS FOR WORLD, WORLD OBJECTS, AND ROOM  */

void CWorldSpace::AddObjectToWorld(CWorldObject* pWorldObject) {
	m_WorldObjectList.push_back(pWorldObject);
}


// Creates an empty room object
void CWorldSpace::CreateRoom() {
	CRoom* RoomToBeAdded = new CRoom();
	m_ListOfRooms.push_back(RoomToBeAdded);
}

