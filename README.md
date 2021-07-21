# ECHO Project

### Research/software development project to develop a solution for "baked" acoustic volumes to reduce resource consumption during runtime audio filter generation

### Author: Andrew Littleton

### Most Recent Update: 07/21/2021

## Development Tools

* Unreal Engine 4.25.3 \(Epic\)
* JUCE 6.07
* IEM Open Source Ambisonics Plugin Suite
  * requires fftw-3.3.9 for some plugins
* C++
* Visual Studio 2019

## Branches

* main: the primary deployable branch of the project
* master: documentation branch to be merged into main as needed
* project-core: branch for assembling and modifying the Unreal Engine 4 Project core and its integrations
* dev: primary development branch of the ECHO
* acoustic-modeler: development of the spatial audio acoustic filters
* reverb-baker: development of the baking process

## Research Topics

* From a computer science perspective, the goal of the project is to determine the most computationally efficient way to generate an accurate acoustic model of a virtual space. 
* From an audio design perspective, the goal of the project will be to debate the merits of using acoustically accurate models for virtual reality game environments as this will help to produce greater immersion in that particular genre of immersive gaming.

