## What

(2024-12)

Part of from my AVR toolset.

Get byte from RAM. Set byte in RAM.


## Design

We want unit getter and setter functions. For anything where
2-byte address makes sense. eeprom, flash, sram.

```C++
TBool GetByte(TUint_1 * Byte, TAddress Addr);
TBool SetByte(TUint_1 Byte, TAddress Addr);
```

## Code

* [Interface][Interface]
* [Implementation][Implementation]


## Requirements

  * arduino-cli
  * bash


## Install/remove

Easy way is to clone [GetLibs][GetLibs] repo and run it's code.
Lacking of local repo catalogue in Arduino IDE sucks.


## See also

* [My other embedded C++ libraries][Embedded]
* [My other repositories][Repos]

[Interface]: src/me_WorkMemory.h
[Implementation]: src/me_WorkMemory.cpp

[GetLibs]: https://github.com/martin-eden/Embedded-Framework-GetLibs

[Embedded]: https://github.com/martin-eden/Embedded_Crafts/tree/master/Parts
[Repos]: https://github.com/martin-eden/contents
