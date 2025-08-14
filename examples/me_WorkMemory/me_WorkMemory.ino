// [me_WorkMemory] test

/*
  Author: Martin Eden
  Last mod.: 2025-08-14
*/

#include <me_WorkMemory.h>

#include <me_BaseTypes.h>
#include <me_Uart.h>
#include <me_Console.h>

void RunTest()
{
  TUint_1 SourceByteValue;
  TUint_1 ResultByteValue;
  TAddress SourceValueAddr;
  TAddress ResultValueAddr;

  SourceValueAddr = (TAddress) &SourceByteValue;
  ResultValueAddr = (TAddress) &ResultByteValue;

  SourceByteValue = 1;

  // Get byte
  me_WorkMemory::GetByte(&ResultByteValue, SourceValueAddr);
  Console.Write("Read value is");
  Console.Print(ResultByteValue);
  Console.EndLine();

  // Set byte
  SourceByteValue = 2;
  me_WorkMemory::SetByte(SourceByteValue, ResultValueAddr);
  Console.Write("Write value is");
  Console.Print(ResultByteValue);
  Console.EndLine();
}

void setup()
{
  me_Uart::Init(me_Uart::Speed_115k_Bps);

  Console.Print("( [me_WorkMemory] test");
  Console.Indent();

  RunTest();

  Console.Unindent();
  Console.Print(")");
}

void loop()
{
}

/*
  2025-08-14
*/
