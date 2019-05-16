
#include "CxxTemplate.h"
#include "ANewClass.h"
#include "SumFunc.h"
#include "SpeedCalculator.h"

#include <string>
#include <iostream>
#include <chrono>
using namespace std::chrono_literals;

namespace cxxt {

CxxApplication::CxxApplication( int argc, char *argv[] ) {
  std::cout << "Hello CMake." << std::endl;
  ANewClass anew;
  anew.run();
  std::cout << sum(3, 4) << std::endl;
}

CxxApplication::~CxxApplication() {
  // TODO cleanup
}

} // namespace cxxt

double *getPositions() {
	double* pos = new double[10];
	pos[0] = 2;
	pos[1] = 1;
	pos[2] = 3;
	pos[3] = 5;
	pos[4] = 4;
	pos[5] = 7;
	pos[6] = 2;
	pos[7] = 1;
	pos[8] = 21;
	pos[9] = 19;
	return pos;
}

double *getSeconds() {
	double* t = new double[10];
	t[0] = 1;
	t[1] = 2;
	t[2] = 3;
	t[3] = 5;
	t[4] = 6;
	t[5] = 7;
	t[6] = 8;
	t[7] = 9;
	t[8] = 10;
	t[9] = 19;
	return t;
}

int getInputArrayLength() {
	return 10;
}

int main( int argc, char *argv[] ) {
  cxxt::CxxApplication app( argc, argv );

  SpeedCalculator speedCalculator;
  speedCalculator.initializeData(10);
  speedCalculator.calculateAndPrintSpeedData();

  return 0;
}
