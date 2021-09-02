# Echo Modelling and Baking

### Research Project to determine the validity of "baking" audio filters into spatialized audio within 3D spaces

### Original Developer: Andrew Littleton

### Most Recent Update: 06/16/2021

##  Development Specifications

* C++ 
* [FFTW Fast Fourier Transform Library](http://www.fftw.org/)
* [IEM Ambisionics Library](https://plugins.iem.at/)
* CMake and Linux C++ build/debug tools

## Intended Outcome

This project is designed to simulate the computational runtime costs for spatial audio effects filtering. There will be three methods of effects filter generation:

1. Dynamic Runtime: All audio filtering is done dynamically at runtime to reflect immediate changes 
2. Baked at Build: Late reverb filtering is baked into ALL audio played within the space
3. Static Object Baking: Late Reverb filtering is baked into only objects marked as "static" \(not moving\) 

Hypothesis: The third option is intended to be the fastest relative to resource consumption

Builds on the concept of Lightmapping. With an already existing lightmap on static objects within a space, less computational resources are required to adjust the look of the object with dynamic lighting. This would apply to audio similarly to how DAWs bake effects into an audio file when mixing it down. Rendering computationally inefficient audio effects, such as late reverb, before hand on static audio sources can free up resources to be used in other audio computations or other disciplines.

## Branch Descriptions

* main: primary stable branch
* master: documentation branch
* project-core: core environment for the project set up
* dev: development branch to test the combination of the reverb filters and acoustic models and provide data
* acoustic-modeling: development of the acoustic modeling 
* reverb-baking: development of the reverb baking and output

