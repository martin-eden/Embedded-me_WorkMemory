// [me_WorkMemory] test

/*
  Author: Martin Eden
  Last mod.: 2025-08-22
*/

#include <me_WorkMemory.h>

#include <me_BaseTypes.h>
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
  me_WorkMemory::GetByteFrom(&ResultByteValue, SourceValueAddr);
  Console.Write("Read value is");
  Console.Print(ResultByteValue);
  Console.EndLine();

  // Set byte
  SourceByteValue = 2;
  me_WorkMemory::SetByteTo(ResultValueAddr, SourceByteValue);
  Console.Write("Write value is");
  Console.Print(ResultByteValue);
  Console.EndLine();
}

void setup()
{
  Console.Init();

  Console.Print("( [me_WorkMemory] test");
  Console.Indent();

  RunTest();

  Console.Unindent();
  Console.Print(") Done");
}

void loop()
{
}

/*
  2025-08-14
  2025-08-22
*/
