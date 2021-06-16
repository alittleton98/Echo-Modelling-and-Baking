# Echo Modelling and Baking

### Research Project to determine the validity of "baking" audio filters into spatialized audio within 3D spaces

### Original Developer: Andrew Littleton

### Most Recent Update: 06/16/2021

##  Development Specifications

* C++ 
* [FFTW Fast Fourier Transform Library](http://www.fftw.org/)
* [IEM Ambisionics Library](https://plugins.iem.at/)

## Intended Outcome

This project is designed to simulate the computational runtime costs for spatial audio effects filtering. There will be three methods of effects filter generation:

1. Dynamic Runtime: All audio filtering is done dynamically at runtime to reflect immediate changes 
2. Baked at Build: Late reverb filtering is baked into ALL audio played within the space
3. Static Object Baking: Late Reverb filtering is baked into only objects marked as "static" \(not moving\) 

Hypothesis: The third option is intended to be the fastest relative to resource consumption

