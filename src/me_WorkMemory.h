// Adapting work memory (SRAM) access to TOperation

/*
  Author: Martin Eden
  Last mod.: 2025-08-30
*/

#pragma once

#include <me_BaseTypes.h>

namespace me_WorkMemory
{
  // [TOperation] Get byte by address
  TBool GetByteFrom(TUint_1 * ByteValue, TAddress Address);

  // [TOperation] Set byte at address
  TBool SetByteAt(TAddress Address, TUint_1 ByteValue);

  // Core functions without checks
  namespace Freetown
  {
    TBool CheckAddress(TAddress Address);
    TUint_1 GetByteFrom(TAddress Address);
    void SetByteAt(TAddress Address, TUint_1 ByteValue);
  }
}

/*
  2024-12 # #
  2025-08-19 Renamings, Freetown founded
  2025-08-26 Renamings
  2025-08-29 Interface stripping
  2025-08-30
*/
