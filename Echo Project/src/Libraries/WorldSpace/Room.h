#pragma once
#include "Common.h"
#include "World.h"

// ROOM Definition and Requirements:
// A room is a collection of nodes connected by edges
// A room has nodes and edges. Nodes and edges on the same plane are considered "Walls". 
// Walls can be designated as "solid" or "open"
// Walls are oriented relative to the previous wall in the structure and are not allowed to overlap
// A Room must have a minimum of 6 walls (North, South, East, West, Ceiling, Floor)
// Each Floor of the room must have a corresponding Ceiling

// Node class. Represents a discrete point in world space
class CNode : CWorldObject {
public:
	// Node Members
	bool bIsNodeOrigin;
	CNode* m_Parent;
	CNode* m_Children[3];
	int m_NodeID[8];

	// Constructors
	CNode();
	CNode(s_Transform pNodeTransform, bool bIsNodeOrigin);
	CNode(s_Transform pNodeTransform);
	CNode(float pX, float pY, float pZ, bool pIsNodeOrigin);
	CNode(float pX, float pY, float pZ);

	// Functions
	void GenerateNodeID();
	void AddChild(CNode* pNewChild);
	void RemoveChild(CNode* pChildToBeRemoved);
};

// Edge class. Edges are meaningful connections bettween nodes
class CEdge : CWorldObject {

public:
	CNode* m_AttachedNodes[2];

	CEdge(CNode* pNodeA, CNode* pNodeB);
};



class CRoom {
	enum WallType {
		OPEN,
		SOLID
	};
	// Members
public:
	typedef struct s_Wall {
		CNode* PerimeterNodes[4];
		CEdge* PerimeterEdges[4];
		s_Transform WallTransform;
		WallType WallType;
	} s_Wall;

	std::vector<s_Wall*> m_WallList;
	std::vector<CEdge*> m_EdgeList;
	std::vector<CNode*> m_NodeList;
	
	// Constructors and Destructor
	CRoom();
	CRoom(FILE pRoomDescriptionFile);
	~CRoom();

	// Room feature creation and deletions
	void AddWall(CNode pNodesForWall[]);
	void RemoveWall(s_Wall* pWallToBeRemoved);
	bool CheckIfRoomValid(); // Determines if Room reaches validity requirments described
};