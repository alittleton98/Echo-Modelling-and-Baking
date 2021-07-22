#include "Node.h"

using namespace RoomComponents;

Node::Node()
{
	NodeTransform = WorldSpace::LocationSet(0.0f, 0.0f, 0.0f);
	Parent = nullptr;
	bIsNodeOrigin = true;
	memset(NodeID, 0, sizeof(NodeID));
}

Node::Node(float x, float y, float z, bool isNodeOrigin)
{
	NodeTransform = WorldSpace::LocationSet(x, y, z);
	Parent = nullptr;
	bIsNodeOrigin = false;
	memset(NodeID, 0, sizeof(NodeID));
}
Node::Node(float x, float y, float z)
{
	NodeTransform = WorldSpace::LocationSet(x, y, z);
	Parent = nullptr;
	bIsNodeOrigin = false;
	memset(NodeID, 0, sizeof(NodeID));
}
Node::Node(WorldSpace::WorldLocation pLocation, bool pIsNodeOrigin)
{
	NodeTransform = pLocation;
	Parent = nullptr;
	bIsNodeOrigin = pIsNodeOrigin;
	memset(NodeID, 0, sizeof(NodeID));
}
Node::Node(WorldSpace::WorldLocation pLocation)
{
	NodeTransform = pLocation;
	Parent = nullptr;
	bIsNodeOrigin = false;
	memset(NodeID, 0, sizeof(NodeID));
}

void Node::GenerateNodeID(int pA, int pB, int pC, int pD)
{
	Node::NodeID[0] = pA;
	Node::NodeID[0] = pB;
	Node::NodeID[0] = pC;
	Node::NodeID[0] = pD;
}