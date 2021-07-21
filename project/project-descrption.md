# Project Descrption

## Acoustic Calculations and Modeling Techniques

The core of this project is the ability for accurate acoustic calculations to be taken about any given sound source and receiver as well as the manipulation of the acoustic environment. There are many different factors that go into realistic acoustic definitions of any given space. The primary variables addressed in this project will be:

* Absorption coefficient
  * The numerical representation of how much sound is absorbed by a material
  * Intuitively used by the human ear to determine a particular surface type 
* Sound Intensity
  * The numerical representation of a sound wave's physical mechanics
  * Used to represent how a sound wave will move within a physical medium 
* Initial Time Delay Gap
  * The time between the direct sound \(no interruption between listener and source\) and any number of reflections \(time will noticeably grow as the reflection number increases\)
  * Used to determine the perceived delay and amount of volumetric space in a room
* Frequency of Sound Wave
  * Number of cycles per second of a sound wave
  * Critical metric in representing sounds 
* Acoustic Intimacy
  * The perceived feeling of being close to the sound source
* Loudness 
  * The perceived listening volume \(dB\)
  * dB SPL with its corresponding weighting curves will be used as methods of measuring
    * dB\(A\): Equal distribution curve meant to represent average human hearing
    * dB\(C\): Weighted towards lower frequencies to represent what humans hear for loud sounds
    * dB\(Z\): Zero weighting. Represents true sound pressure level measurement 
* Sound Path Length
  * The distance of the sound as it moves from source to decay below a set threshold of hearing
* Angle of Incidence
  * Angle of source ray as it approaches any reflection point
* Angle of Reflection
  * Angle of reflected ray as it leaves the reflection point
* Geometric Dimensions of the acoustic volume
  * The physical representation of the acoustic space
  * This does not measure 
* Sound Field
  * The regions of space within with a sound wave propagates
  * Though not an adjustable parameter, is helpful in determining parts of where a sound is within a space


## Binaural Listening Considerations and 3 Dimensional Audio

Modeling the acoustics of a space relative to a source is only important if a listener will be present to hear it. Binaural encoding is done using a minimum of 4 channel audio mixes representing:

This represents first-order ambisonics. Using the acoustic models, a designer can determine how a sound will be heard using binaural encoding techniques. This is done using the audio engine and will not be written into the project. Binaural perception is a common design technique within video games and is essentially mandatory for virtual reality environments. Binaural listening is determined using a Head-Related Transfer Function. This is used as a robust calculation for how a sound will be heard by the human ear more accurately.  

Along with binaural audio decoding, comes considerations and understanding of three-dimensional audio representation. This is primarily focused on occlusion and how a wave travels through a gas medium. Eliminating the intricate details of the effects minute changes in air composition and temperature will affect a sound, wave propagation, and occlusion mechanics are still features of auditory perception that need to be understood. This project will consider these theoretically as they apply to acoustic models and HRTF.

## Standalone Reverb Audio Plugin

For the acoustic data that has been gathered to be heard effectively, an Effect plugin must be created. This plugin will be separate from the two audio engines and will handle the external data reads/writes. Data gathered will be reproduced as a CSV file and can be re-entered to the plugin to create the necessary acoustic effects. 

The plugin builds on the IEM Ambisonics Plugin Suite \(their plugins build on the fftw-FastFourierTransform source code thus it is included in the AMVRGE repository as a dependency\). These plugins take multichannel audio files and allow for ambisonic, binaural, or stereo output. Virtual reality audio and video games generally use the binaural output as means of applying the HRTF within a stereo speaker configuration. 

Upon being provided a spatialization model, then the plugin will then render audio using post-processing effects such as reverb and frequency band equalization. Reflections will also be calculated up to the order requested by the model.

\[Subject to change\] Once integrated into the Wwise authoring tool, the output from the AMVRGE plugin will need to be set up to be routed through the IEM Binaural Decoder plugin. Though it may be possible to render output from the AMVRGE plugin with the Binaural Decoding happening without user interaction, but this has yet to be tested. This will be determined by how Ambisonic audio files are handled within Wwise.

## Wwise Plugin Development

Using the Wwise SDK developed by Audiokinetic, information passed in by the audio engine will be used to model information about any given space within a game environment. Acoustic spaces will be defined as a Volume represented by the audio engine. Game Objects within that volume will be identified and surfaces can be given acoustic properties or have their already existing acoustic properties removed \(Collision boxes are already existing acoustic properties determined by the game engine\). The plugin will take acoustic metrics into the calculation to produce a baseline model and will then allow for a designer to adjust these metrics accordingly to decide how any specific environment should sound.

The purpose of this plugin is to give game engine designers the ability to accurately model a space acoustically, for video games or other applications. It will also be used to allow audio designers to adjust acoustic spaces as necessary to create more immersive or specifically crafted experiences for players.

### Wwise SDK and Unreal Engine GameObjects/Geometry

The Wwise SDK will be used for plugin development using the Wwise Audio Engine. The plugin will be used as the medium between the physical environment of the game engine and the audio engine. It will render data given in timed windows based on geometric data provided by the Unreal Engine's physical models and audio design information provided by Wwise. Auxiliary bus volumes will be used to define the boundaries of the acoustic space and the UE4 actors with collisions enabled will be the reflection objects or sources. The UE4 in-engine camera will be the listener. 

UE4 is the primary engine the Wwise plugin will be tested and deployed in. The Unreal Engine will handle graphics processing, environment design, and the Wwise integration itself. Virtual Reality building and the preview will also be deployed through the engine. While the plugin and Wwise will handle all audio-related processing and calculations, information from the engine's geometry data,d and any other game engine-related parameters that are required. 

Modeling will be done using raycasting from a sound source in a spherical pattern. Accuracy can be adjusted to produce any number of rays. Performance metrics will be taken per ray cast to determine resources required for each accuracy level.  Emission type will also be used to determine the nature of the reflected sound \(point source, line source, impeded variations of the aforementioned\).


* Omnidirectional perception: omnidirectional listening where no direction can be discerned
* X-axis Perception: directional audio heard using a cardioid pattern facing infinity and negative infinity on the x-axis
* Y-axis Perception: directional audio heard using a cardioid pattern facing infinity and negative infinity on the y-axis
* Z-Axis Perception: directional audio heard using a cardioid pattern facing infinity and negative infinity on the z-axis


