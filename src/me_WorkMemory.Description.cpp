// Working memory (aka SRAM aka ScratchMem) description

/*
  Author: Martin Eden
  Last mod.: 2026-03-31
*/

#include <me_WorkMemory.h>

using namespace me_WorkMemory;

/*
  Check memory address
*/
TBool Description::CheckAddress(
  TAddress Address
)
{
  return (Address <= Description::MaxAddress);
}

/*
  2026-03-31
*/
