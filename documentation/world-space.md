# World Space

### Member Variables

| Type                   | Name             | Visibility | Description                                                                                              |
| ---------------------- | ---------------- | ---------- | -------------------------------------------------------------------------------------------------------- |
| float                  | XDimension       | private    | The X (left to right) dimension of the world space. Coords will be 2n+1 total spread over signed regions |
| float                  | YDimension       | private    | The Y (left to right) dimension of the world space. Coords will be 2n+1 total spread over signed regions |
| float                  | ZDimension       | private    | The Z (left to right) dimension of the world space. Coords will be 2n+1 total spread over signed regions |
| int                    | GridSize         | private    | Incremental values for nodes to be placed                                                                |
| vector\<WorldObjects>+ | WorldObjectsList | private    | List of objects in the world                                                                             |

\+ Possibly a map with World Object as the value and it's location/ID as the key

### Member Functions

| Name                    | Return Type                | Parameters                                              | Description                                          |
| ----------------------- | -------------------------- | ------------------------------------------------------- | ---------------------------------------------------- |
| WorldSpace()            | WorldSpace object          | none                                                    | Constructor                                          |
| WorldSpace(parameters)  | WorldSpace object          | float pXDimension, float pYDimension, float pZDimension | Parameterized Constructor                            |
| \~WorldSpace()          | void                       | none                                                    | Destructor                                           |
| SetLocation()           | WorldObject::WorldLocation | float pX, float, pY, float pZ                           | Set the location of a world object within the world  |
| SetQuaternionRotation() | QuatWorldRotation          | float pW, float pX, float pY, float pZ                  | Set the rotation of a world object with quaternions  |
| SetEulerRotation()      | EuWorldRotation            | float pX, float, pY, float pZ                           | Set the rotation of a world object with euler angles |
| AddObject()             | void                       | WorldObject\* pWorldObject                              | Add world objects to the list                        |

