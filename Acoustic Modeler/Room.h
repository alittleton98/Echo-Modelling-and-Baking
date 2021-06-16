#pragma once
#include "WorldSpace.h"
#include "Node.h"
#include "Edge.h"
#include "Surface.h"
#include <vector>

using namespace RoomComponents;

class Room
{
public:

	std::vector<Node> RoomNodes;
	std::vector<Edge> RoomEdges;
	std::vector<Surface> RoomSurfaces;

	Room();
	Room(float x_dimension, float y_dimension, float z_dimension);
	~Room();
	

};

