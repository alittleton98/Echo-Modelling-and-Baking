#pragma once
#include "WorldSpace.h"
#include <vector>

namespace RoomComponents {
	
	class Node
	{
	public:
		WorldSpace::WorldLocation NodeTransform;
		Node* Parent;
		Node* Child;
		bool bIsNodeRoot;
		int NodeID[4];
		std::vector<Edge> ConnctedEdges;

		Node();
		Node(float x, float y, float z);

	};
}


