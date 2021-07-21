# AMVRGE Plugin Usage/Process

The AMVRGE plugin will work in both directions. This means that an acoustic model can be applied to any given spatial acoustic volume or that the plugin will generate an acoustic model of the spatial volume it occupies. The ideal workflow would be to gather a model then apply the model afterward given the information by the model received.

## Retrieve Acoustic Model

The acoustic model will capture data from a singular frame of audio playback and measure data accordingly.

* Sound Intensity
  * The numerical representation of a sound wave's physical mechanics
  * Used to represent how a sound wave will move within a physical medium
  * Will be retrieved as a decibel value
* Initial Time Delay Gap
  * The time between the direct sound \(no interruption between listener and source\) and any number of reflections \(time will noticeably grow as the reflection number increases\)
  * Used to determine the perceived delay and amount of volumetric space in a room
  * Provides ITDG to the nth order for n number of reflections
* Frequency of Sound Wave
  * Number of cycles per second of a sound wave
  * Critical metric in representing sounds 
  * Frequency bands can be reviewed
* Loudness 
  * The perceived listening volume \(dB\)
* Sound Path Length
  * The distance of the sound as it moves from source to decay below a set threshold of hearing
  * This will only be provided on screen within Wwise
* Angle of Incidence and Reflection
  * Angle of source ray as it approaches any reflection point and passes to the listener
  * Incidence: the angle between the source and the reflection point
  * Reflection: the angle between the source and the listener
  * Theta: The interior angle between Incidence and Reflection
* Geometric Dimensions of the Acoustic Volume
  * The physical representation of the acoustic space
  * Given to the plugin by the dimensions of the spatial audio volume
* Sound Field
  * The regions of space within with a sound wave propagates
  * Though not an adjustable parameter, is helpful in determining parts of where a sound is within a space
  * Will be calculated against a standardized data set

## Apply a Provided Acoustic Model

### Standalone

The standalone AMVRGE plugin will require an acoustic model to be provided manually. This will normally be done with a CSV file that includes all necessary 

### Wwise/Unreal Engine 4

Acoustic Models will normally be provided using the WWise Authoring Tool as a plugin window. Necessary parameters will be manipulations to simulate different acoustic treatments and adjustments. Those parameters included:

* Octave Band Absorption Values 
  * Connected to Acoustic Texture
  * 0 to 1
  * 0 being a perfect reflector
  * 1 being a perfect absorber

Application of an acoustic model is primarily done with objects of varying acoustic textures in a space. For spatialization to be done, information within the Unreal Engine, using AkSpatialAudioVolumes and textures provided within the volume, will dynamically be passed to the AMVRGE plugin so a manually designed acoustic model is not required in this case.



