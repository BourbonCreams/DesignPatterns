# Builder
Builder separates the construction of a complex object from its representation so that the same construction process can create different representations.
It is useful when complex objects need to be created and the components of each instantiation of such objects can vary.

## UML diagram
![BuilderPattern](../../uml_diagrams/builder.svg)

<details>
<summary>PlantUML code:</summary>

```
@startuml
title BuilderExample
class Director{
    construct()
}

abstract class AbstractVehicleBuilder{
    abstract buildPart()
}

class ConcreteVehicleBuilder{
    buildPart()
    getResult()
}

class Vehicle{

}

ConcreteVehicleBuilder --|> AbstractVehicleBuilder
ConcreteVehicleBuilder ..> Vehicle
Director --> AbstractVehicleBuilder

@enduml
```

</details>

The basic flow is:
1. A client creates a Director object and calls its construct() method
2. As a result of this call, the Director calls the buildPart() methods to create the parts of the complex object
3. The client finally calls the Director's getResult() method to receive the brand new complex object

## How to compile and run
Compile and run with:
```
mkdir build && cd build
g++ ../src/* -o executable -I ../include
./executable
```
