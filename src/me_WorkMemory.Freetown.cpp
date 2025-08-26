// SRAM access

/*
  Author: Martin Eden
  Last mod.: 2025-08-26
*/

#include <me_WorkMemory.h>

using namespace me_WorkMemory;

/*
  Get byte by address
*/
void Freetown::GetByteFrom(
  TUint_1 * ByteValue,
  TAddress Address
)
{
  *ByteValue = *(TUint_1 *) Address;
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
*/
