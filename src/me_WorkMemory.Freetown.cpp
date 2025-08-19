// SRAM access

/*
  Author: Martin Eden
  Last mod.: 2025-08-19
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
  Set byte by address
*/
void Freetown::SetByteTo(
  TAddress Address,
  TUint_1 ByteValue
)
{
  *(TUint_1 *) Address = ByteValue;
}

/*
  2024-12 # #
  2025-08-19
*/
