#include "Node.h"

using namespace RoomComponents;

Node::Node(){
	NodeTransform = WorldSpace::LocationSet(0.0f, 0.0f, 0.0f);
	Parent = nullptr;
	Child = nullptr;
	bIsNodeRoot = true;
	memset(NodeID, 0, sizeof(NodeID));
}

Node::Node(float x, float y, float z) {
	NodeTransform = WorldSpace::LocationSet(x, y, z);
	Parent = nullptr;
	Child = nullptr;
	bIsNodeRoot = false;
	memset(NodeID, 0, sizeof(NodeID));
}
