#pragma once
#include "Node.h"
#include "Edge.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

namespace RoomComponents {
	class Surface
	{
	public:
		float length = 0;
		float width = 0;
		float area;
		WorldSpace::WorldRotation SurfaceRotation;
		Node *SurfaceNodes[4];
		std::string Name;

		Surface(Node NodeArray[]);
		~Surface();
	};

	

}


