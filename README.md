# LOGIC GATES IN C++

#### Using the Composite Design Pattern
<img src="Assets\ClassDiagramImage.PNG" title="Class Diagram Image">

#### Logic gates
- AND
- NAND
- NOR
- NOT
- OR
- XNOR
- XOR

#### Usage example
```cpp
#include "...\LogicGateLibrary.h"

Numeric<> five(5); // Simply the number 5 which can be used as an input for a gate
Numeric<> eight(8); // Simply the number 8 which can be used as an input for a gate

Numeric<> uChar_six(6); // Unsigned Char is the default typename for all of the classes' templates
Numeric<unsigned int> uInt_six(6); // All bitwise compatible types work (Note: Double/Float are not bitwise compatible)

Or<>(&five, &six).operation(); // The 'operation' function must be called in the outermost logic gate. See also:
And<>(&Or<>(&five, &six), &eight).operation(); // Inputs can also be logic gates, not just numbers

And<>(&eight, &five, &six, ...).operation(); // Logic gates are not limited by the number of inputs:

Or<>(&Numeric<>(5), &Numeric<>(9)).operation(); // Returns 13

```
