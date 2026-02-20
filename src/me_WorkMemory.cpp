// Work memory interface implementation

/*
  Author: Martin Eden
  Last mod.: 2025-08-30
*/

#include <me_WorkMemory.h>

#include <me_BaseTypes.h>

using namespace me_WorkMemory;

/*
  Check memory address
*/
TBool me_WorkMemory::CheckAddress(
  TAddress Address
)
{
  // Maximum memory address (for ATmega328)
  const TAddress MaxAddress = (256 + 2 * 1024) - 1;

  return (Address <= MaxAddress);
}

/*
  Get byte from address
*/
TBool me_WorkMemory::GetByteFrom(
  TUint_1 * ByteValue,
  TAddress Address
)
{
  if (!CheckAddress(Address))
    return false;

  *ByteValue = Freetown::GetByteFrom(Address);

  return true;
}

/*
  Set byte at address
*/
TBool me_WorkMemory::SetByteAt(
  TAddress Address,
  TUint_1 ByteValue
)
{
  if (!CheckAddress(Address))
    return false;

  SetByteAt(Address, ByteValue);

  return true;
}

/*
  2024 # #
  2025 # #
  2026-02-20
*/
