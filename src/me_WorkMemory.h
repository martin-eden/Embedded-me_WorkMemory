// Adapting work memory (SRAM) access to TOperation

/*
  Author: Martin Eden
  Last mod.: 2026-03-31
*/

#pragma once

#include <me_BaseTypes.h>

namespace me_WorkMemory
{
  // [TOperation] Get byte by address
  TBool GetByteFrom(TUint_1 * ByteValue, TAddress Address);

  // [TOperation] Set byte at address
  TBool SetByteAt(TAddress Address, TUint_1 ByteValue);

  namespace Description
  {
    const TAddress MaxAddress = (256 + 2 * 1024) - 1;

    TBool CheckAddress(TAddress Address);
  }

  namespace Core
  {
    void GetByteFrom(TAddress DataPtr, TAddress);
    void SetByteAt(TAddress DataPtr, TAddress);
  }
}

/*
  2024 # #
  2025 # # # #
  2026-02-20
  2026-03-30
  2026-03-31
*/
