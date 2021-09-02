#include "Surface.h"

using namespace RoomComponents;

Surface::Surface(Node NodeArray[]) {
	length = 0;
	width = 0;
	area = length * width;
	SurfaceRotation = WorldSpace::WorldRotation();
	for (int i = 0; i < 4; i++) {
		SurfaceNodes[i] = &NodeArray[i];
	}
	for (int i = 0; i < 2; i++) {
		length += SurfaceNodes[i]->NodeTransform.VectorX;
	}
	
	
}