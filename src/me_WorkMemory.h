// WorkMemory

/*
  Author: Martin Eden
  Last mod.: 2024-12-17
*/

/*
  Get byte from RAM. Set byte in RAM.

  Wtf?

  Whole point of C is to provide better means than
  accessing bytes by address. But we want get/set
  functions for working memory too.
*/

#pragma once

#include <me_BaseTypes.h>

namespace me_WorkMemory
{
  // Get byte from memory
  TBool GetByte(TUint_1 * Byte, TAddress Addr);

  // Set memory to byte value
  TBool SetByte(TUint_1 Byte, TAddress Addr);
}

/*
  2024-12-17
*/
