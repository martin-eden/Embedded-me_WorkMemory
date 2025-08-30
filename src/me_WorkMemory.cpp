// Work memory interface implementation

/*
  Author: Martin Eden
  Last mod.: 2025-08-30
*/

#include <me_WorkMemory.h>

#include <me_BaseTypes.h>

using namespace me_WorkMemory;

/*
  Get byte from address
*/
TBool me_WorkMemory::GetByteFrom(
  TUint_1 * ByteValue,
  TAddress Address
)
{
  if (!Freetown::CheckAddress(Address))
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
  if (!Freetown::CheckAddress(Address))
    return false;

  Freetown::SetByteAt(Address, ByteValue);

  return true;
}

/*
  2024-12 # #
  2025-08-19
  2025-08-29
*/
