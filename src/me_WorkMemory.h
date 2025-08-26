// Work memory (SRAM)

/*
  Author: Martin Eden
  Last mod.: 2025-08-26
*/

/*
  Get byte from RAM. Set byte in RAM.

  Wtf?

  Whole point of C is provide better means than accessing byte
  by address. But we have generic getters/setters doing byte
  by address.
*/

#pragma once

#include <me_BaseTypes.h>

namespace me_WorkMemory
{
  // Check address
  TBool CheckAddress(TAddress Address);

  // Get byte by address
  TBool GetByteFrom(TUint_1 * ByteValue, TAddress Address);

  // Set byte at address
  TBool SetByteAt(TAddress Address, TUint_1 ByteValue);

  // ( Wrapping as TOperation
  TBool Op_GetByte(TAddress Data, TAddress Address);
  TBool Op_SetByte(TAddress Data, TAddress Address);
  // )

  namespace Freetown
  {
    void GetByteFrom(TUint_1 * ByteValue, TAddress Address);
    void SetByteAt(TAddress Address, TUint_1 ByteValue);
  }
}

/*
  2024-12 # #
  2025-08-19 renames, founded Freetown
  2025-08-26 renamings
*/
