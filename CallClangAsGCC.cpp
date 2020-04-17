// Call Clang as GCC
// By Maulana Muhammad Alghifary
// This file is licensed under Mozilla Public License 2.0. Act of any kinds will be under this licence.

#include <iostream>
#include <string>
#include <cstring>
#include "main.h"

// Definitions
void CallClangAsGCC::MainFunction(int ArgumentsCount, char **Arguments, char *ProgramName){
  std::stringstream Stream;
  if (!strcmp(ProgramName, "gcc")){
    for(int i = 1;++i;i<=ArgumentsCount){
      Stream << "gcc " << Arguments
