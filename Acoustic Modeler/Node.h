#pragma once
#include "WorldSpace.h"
#include "Edge.h"
#include <vector>

namespace RoomComponents
{

	class Node
	{
	public:
		WorldSpace::WorldLocation NodeTransform;
		Node *Parent;
		Node *Children[3];
		bool bIsNodeOrigin;
		int NodeID[4];
		//std::vector<RoomComponents::Edge> ConnectedEdges;

		Node();
		Node(float pX, float pY, float pZ, bool pIsNodeOrigin);
		Node(float pX, float pY, float pZ);
		Node(WorldSpace::WorldLocation pLocation, bool pIsNodeOrigin);
		Node(WorldSpace::WorldLocation pLocation);
		void GenerateNodeID(int pA, int pB, int pC, int pD);
	};
}
