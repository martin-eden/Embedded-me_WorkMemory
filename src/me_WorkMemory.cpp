// Work memory interface implementation

/*
  Author: Martin Eden
  Last mod.: 2025-08-19
*/

#include <me_WorkMemory.h>

using namespace me_WorkMemory;

// Maximum memory address (for ATmega328)
const TAddress MaxAddress = (256 + 2 * 1024) - 1;

/*
  Check memory address
*/
TBool me_WorkMemory::CheckAddress(
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
TBool me_WorkMemory::SetByteTo(
  TAddress Address,
  TUint_1 ByteValue
)
{
  if (!CheckAddress(Address))
    return false;

  Freetown::SetByteTo(Address, ByteValue);

  return true;
}

// ( TOperation wrappers

TBool me_WorkMemory::Op_GetByte(
  TAddress Data,
  TAddress Address
)
{
  return GetByteFrom((TUint_1 *) Data, Address);
}

TBool me_WorkMemory::Op_SetByte(
  TAddress Data,
  TAddress Address
)
{
  return SetByteTo(Address, *(TUint_1 *) Data);
}

// )

/*
  2024-12 # #
  2025-08-19
*/
