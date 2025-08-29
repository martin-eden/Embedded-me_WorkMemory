// Work memory (SRAM)

/*
  Author: Martin Eden
  Last mod.: 2025-08-29
*/

/*
  Get byte from RAM. Set byte in RAM.

  Why?

  Whole point of C is provide better means than accessing byte
  by address. But we have generic getters/setters doing byte operations
  by address.
*/

#pragma once

#include <me_BaseTypes.h>
#include <me_BaseInterfaces.h>

namespace me_WorkMemory
{
  // Get byte by address
  TBool GetByteFrom(TUint_1 * ByteValue, TAddress Address);

  // Set byte at address
  TBool SetByteAt(TAddress Address, TUint_1 ByteValue);

  // Core functions without checks
  namespace Freetown
  {
    void GetByteFrom(TUint_1 * ByteValue, TAddress Address);
    void SetByteAt(TAddress Address, TUint_1 ByteValue);
  }
}

/*
  2024-12 # #
  2025-08-19 Renamings, Freetown founded
  2025-08-26 Renamings
  2025-08-29 Interface stripping
*/
