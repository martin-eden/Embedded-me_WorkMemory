// SRAM access

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
TBool Freetown::CheckAddress(
  TAddress Address
)
{
  // Maximum memory address (for ATmega328)
  const TAddress MaxAddress = (256 + 2 * 1024) - 1;

  return (Address <= MaxAddress);
}

/*
  Get byte by address
*/
TUint_1 Freetown::GetByteFrom(
  TAddress Address
)
{
  return *(TUint_1 *) Address;
}

/*
  Set byte at address
*/
void Freetown::SetByteAt(
  TAddress Address,
  TUint_1 ByteValue
)
{
  *(TUint_1 *) Address = ByteValue;
}

/*
  2024-12 # #
  2025-08-19
  2025-08-26
  2025-08-30
*/
