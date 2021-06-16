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
		float area;
		Node SurfaceNodes[4];
		std::string Name;
	};
}


