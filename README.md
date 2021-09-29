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

This project is designed to simulate the computational runtime costs for spatial audio effects filtering as well as machine generated impulse responses. There will be three methods of effects filter generation:

1. Dynamic Runtime: All audio filtering is done dynamically at runtime to reflect immediate changes 
2. Baked at Build: Late reverb filtering is baked into ALL audio played within the space
3. Static Object Baking: Late Reverb filtering is baked into only objects marked as "static" \(not moving\) 

Hypothesis: The third option is intended to be the fastest relative to resource consumption

Impulse Responses will learned from a database of impulse responses from standardized cubic room sizes incrementing in dimensions by 1 foot+. The impulse response models will be recorded using a first order+ ambisonic microphone so primitive rectangular prism roomshapes can be accounted for. Machine generated IRs are being developed to allow for procedural convolution reverb. Convolution reverb often uses a room's impulse response convolved with the dry audio signal to produce what the reverberation effect would be if the sound were played inside the same space. The intention of this stage of the project is to determine the validity of a procedurally generated impulse responses. With modeled IRs, a device can theoretically learn how to generate an impulse response for a virtual space and then convolve it with the dry audio signal. Due to the computational complexity that this involves, it is not intended to replace algorithmic reverb filtering, but to try and replicate more accurate and realistic reverb filtering in within a system that is using the computational resource cost system outlined above.

Echo builds on the concept of Lightmapping. With an already existing lightmap on static objects within a space, less computational resources are required to adjust the look of the object with dynamic lighting. This would apply to audio similarly to how DAWs bake effects into an audio file when mixing it down. Rendering computationally inefficient audio effects, such as late reverb, before hand on static audio sources can free up resources to be used in other audio computations or other disciplines.

+ As research capability grows, this will be changed from feet to meters to represent publically available game engine world space units \(UnrealEngine and Unity3D are the standard used in this project because both measure their world grids in metric units\). The Ambisonic order will also increase to produce spatial IRs with greater detail.

## Branch Descriptions

* main: primary stable branch
* master: documentation branch
* project-core: core environment for the project set up
* dev: development branch to test the combination of the reverb filters and acoustic models and provide data
* acoustic-modeling: development of the acoustic modeling 
* reverb-baking: development of the reverb baking and output

### Areas of Focus

#### Virtual Acoustic Space Generator

#### Convolution Reverb Filter

#### Digital Audio Signal Processing Implementation

####  Computational Resource Profiler

#### Procedural Impulse Response Generator

### Considerations and Clarifications

This project is developed for intended use within video game audio engines/audio modules. It could be applicable to Digital Audio Workstations, but is not developed for any as of writing the most recent update of this document. The intended outcomes from this project are not meant to replace the accuracy of true analog impulse responses or to perform exceptionally faster than current consumer technology. It is intended to produce more realistic representations of sound within the computational and resource benchmarks. The primary metrics of success will be the review of the procedurally generated impulse responses done by audio professionals/average listeners and the performance benchmarks of the filtering process. Performance outside of those two metrics will be ignored where applicable.

