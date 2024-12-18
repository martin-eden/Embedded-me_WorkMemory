// WorkMemory implementation

/*
  Author: Martin Eden
  Last mod.: 2024-12-18
*/

#include <me_WorkMemory.h>

#include <me_UnoAddresses.h>

using namespace me_WorkMemory;

using
  me_UnoAddresses::RamMaxAddr;

// Get byte lol
TBool me_WorkMemory::GetByte(
  TUint_1 * Byte,
  TAddress Addr
)
{
  if (Addr > RamMaxAddr)
    return false;

  *Byte = *(TUint_1 *) Addr;

  return true;
}

// Set byte lol
TBool me_WorkMemory::SetByte(
  TUint_1 Byte,
  TAddress Addr
)
{
  if (Addr > RamMaxAddr)
    return false;

  *(TUint_1 *) Addr = Byte;

  return true;
}

// ( TOperation wrappers

TBool me_WorkMemory::Op_GetByte(
  TAddress Data,
  TAddress Addr
)
{
  return GetByte((TUint_1 *) Data, Addr);
}

TBool me_WorkMemory::Op_SetByte(
  TAddress Data,
  TAddress Addr
)
{
  return SetByte(*(TUint_1 *) Data, Addr);
}

// )

/*
  2024-12-17
  2024-12-18
*/
