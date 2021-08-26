#pragma once
#include "WorldSpace.h"
#include "Node.h"
#include "Edge.h"
#include "Surface.h"
#include <vector>
#include <stdlib.h>
#include <stdio.h>

using namespace RoomComponents;

class Room
{

#define MAX_NODES 8


public:
	std::vector<Node> RoomNodes;
	std::vector<Edge> RoomEdges;
	std::vector<Surface> RoomSurfaces;
	FILE RoomDimensionsFile;

	float X;
	float Y;
	float Z;

	// Constructors/Destructor
	Room();
	//Room(FILE RoomDimensionsInput);
	//~Room();

	//Operations
	bool AddNodeToTree(Node NodeInput);
	bool RemoveNode_back();
	bool AddSurfaceToRoom(Surface SurfaceInput);
	bool RemoveSurface_back();
	bool AddEdgeToTree(Edge EdgeInput);
	bool RemoveEdge_back();
};
