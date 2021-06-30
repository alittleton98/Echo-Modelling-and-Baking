#include "Surface.h"

using namespace RoomComponents;

Surface::Surface(Node NodeArray[]) {
	for (int i = 0; i < 4; i++) {
		SurfaceNodes[i] = &NodeArray[i];
	}
	for (int i = 0; i < 2; i++) {
		length += SurfaceNodes[i]->NodeTransform.VectorX;
	}
	
	
}