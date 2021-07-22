#include "Room.h"

/*
A Room is just a graph of all the nodes present in the space.
An Edge is the connection between any given node
A Surface is a combination of 4 nodes where the path is circular (must reach the origin by the 4th pass)
*/

//Set origin and extremity (furthest point from the origin) and as unique world space constant
const WorldSpace::WorldLocation Origin = WorldSpace::LocationSet(0.0f, 0.0f, 0.0f);
WorldSpace::WorldLocation Extremity;

Room::Room()
{
    //Default size of room is 8 to represent the average volume of a cube shaped room
    X = 8.0f;
    Y = 8.0f;
    Z = 8.0f;

    Extremity.VectorX = X;
    Extremity.VectorY = Y;
    Extremity.VectorZ = Z;

    //Generate room tree counter-clockwise/floor to ceiling
    for (int i = 0; i < 8; i++)
    {
        Node::Node NodeToBeAdded;
        if (i = 0)
        {
            NodeToBeAdded.bIsNodeOrigin = true;
            NodeToBeAdded.NodeTransform = Origin;
            NodeToBeAdded.GenerateNodeID(i, NodeToBeAdded.NodeTransform.VectorX, NodeToBeAdded.NodeTransform.VectorY, NodeToBeAdded.NodeTransform.VectorZ);
            AddNodeToTree(NodeToBeAdded);
        }
        else
        {
            NodeToBeAdded.bIsNodeOrigin = false;
            // Determine equation for iteration over the square
            NodeToBeAdded.GenerateNodeID(i, NodeToBeAdded.NodeTransform.VectorX, NodeToBeAdded.NodeTransform.VectorY, NodeToBeAdded.NodeTransform.VectorZ);
            AddNodeToTree(NodeToBeAdded);
        }

        free(&NodeToBeAdded);
    }

    for (int i = 0; i < 8; i++)
    {
        //Generate edges
    }

    for (int i = 0; i < 6; i++)
    {
        //Generate Surfaces
    }
}

//Checks for duplicate node and returns status of node addition. True for a Success and False for a Failure
bool Room::AddNodeToTree(Node NodeInput)

{
    //check for duplicates using node ID
    bool bDuplicatePresent = true; //assumed true and must prove false
    for (int i = 0; i < RoomNodes.size(); i++)
    {
        if (NodeInput.NodeID[0] == RoomNodes[i].NodeID[0] && NodeInput.NodeID[1] == RoomNodes[i].NodeID[1] && NodeInput.NodeID[2] == RoomNodes[i].NodeID[2] && NodeInput.NodeID[3] == RoomNodes[i].NodeID[3])
        {
            bDuplicatePresent = true;
        }
        else
        {
            bDuplicatePresent = false;
        }
    }

    if (bDuplicatePresent)
    {
        //Return duplicate
        printf("Duplicate Node at Position: %d , %d, %d with ID %i%i%i%i\n", NodeInput.NodeTransform.VectorX, NodeInput.NodeTransform.VectorY, NodeInput.NodeTransform.VectorZ, NodeInput.NodeID[0], NodeInput.NodeID[1], NodeInput.NodeID[2], NodeInput.NodeID[3]);
        return false;
    }

    else
    {
        RoomNodes.push_back(NodeInput);
        return true;
    }
}

bool Room::RemoveNode_back()
{
    Room::RoomNodes.pop_back();
    return true;
}
bool AddSurfaceToRoom(Surface SurfaceInput)
{
    //Add surface to structure
}
bool RemoveSurface_back()
{
    //Remove surface from end of struture
}
bool AddEdgeToTree(Edge EdgeInput)
{
    //Add edge to structure
}
bool RemoveEdge_back()
{
    //Remove edge from end of structure
}