// SRAM access

/*
  Author: Martin Eden
  Last mod.: 2026-03-31
*/

#include <me_WorkMemory.h>

#include <me_BaseTypes.h>

using namespace me_WorkMemory;

static void LoadByteFrom(
  TAddress DestPtr,
  TAddress SrcPtr
)
{
  *(TUint_1 *) DestPtr = *(TUint_1 *) SrcPtr;
}

/*
  Get byte by address
*/
void Core::GetByteFrom(
  TAddress DataPtr,
  TAddress Address
)
{
  LoadByteFrom(DataPtr, Address);
}

/*
  Set byte at address
*/
void Core::SetByteAt(
  TAddress DataPtr,
  TAddress Address
)
{
  LoadByteFrom(Address, DataPtr);
}

/*
  2024 # #
  2025 # # #
  2026-02-20
  2026-03-31
*/
