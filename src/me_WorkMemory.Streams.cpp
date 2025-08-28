// SRAM address segments as streams implementation

/*
  Author: Martin Eden
  Last mod.: 2025-08-28
*/

#include <me_WorkMemory.h>

#include <me_BaseTypes.h>

using namespace me_WorkMemory;

// ( Address segment as input stream

/*
  Setup
*/
TBool TInputStream::Init(
  TAddressSegment AddrSeg
)
{
  return Rator.Init(AddrSeg);
}

/*
  Read byte
*/
TBool TInputStream::Read(
  TUnit * Unit
)
{
  TAddress ReadAddr;

  if (!Rator.GetNextAddr(&ReadAddr))
    return false;

  return GetByteFrom((TUint_1 *) Unit, ReadAddr);
}

// )

// ( Address segment as output stream

/*
  Setup
*/
TBool TOutputStream::Init(
  TAddressSegment AddrSeg
)
{
  return Rator.Init(AddrSeg);
}

/*
  Write byte
*/
TBool TOutputStream::Write(
  TUnit Unit
)
{
  TAddress WriteAddr;

  if (!Rator.GetNextAddr(&WriteAddr))
    return false;

  return SetByteAt(WriteAddr, (TUint_1) Unit);
}

// )

/*
  2025-08-26
*/
