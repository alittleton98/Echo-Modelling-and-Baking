#pragma once
#include "WorldSpace.h"
#include "Node.h"
#include "Edge.h"
#include "Surface.h"
#include <vector>

using namespace RoomComponents;

class Room
{

	#define MAX_NODES 8 

public:

	std::vector<Node> RoomNodes;
	std::vector<Edge> RoomEdges;
	std::vector<Surface> RoomSurfaces;

	float X;
	float Y;
	float Z;

	Room();
	Room(float x_dimension, float y_dimension, float z_dimension);
	~Room();

};

