// Work memory interface implementation

/*
  Author: Martin Eden
  Last mod.: 2025-08-28
*/

#include <me_WorkMemory.h>

#include <me_BaseTypes.h>

using namespace me_WorkMemory;

// Maximum memory address (for ATmega328)
const TAddress MaxAddress = (256 + 2 * 1024) - 1;

/*
  Check memory address
*/
TBool CheckAddress(
  TAddress Address
)
{
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

  Freetown::GetByteFrom(ByteValue, Address);

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

  Freetown::SetByteAt(Address, ByteValue);

  return true;
}

/*
  2024-12 # #
  2025-08-19
  2025-08-29
*/
