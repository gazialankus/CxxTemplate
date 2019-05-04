
#include "CxxTemplate.h"
#include "ANewClass.h"
#include "SumFunc.h"

#include <string>
#include <iostream>
#include <chrono>
using namespace std::chrono_literals;

namespace cxxt {

CxxApplication::CxxApplication( int argc, char *argv[] ) {
  std::cout << "Hello CMake." << std::endl;
  ANewClass anew;
  anew.run();
  printSum(3, 4);
}

CxxApplication::~CxxApplication() {
  // TODO cleanup
}

} // namespace cxxt


int main( int argc, char *argv[] ) {
  cxxt::CxxApplication app( argc, argv );
//  cxxt::newPrint();

  return 0;
}
