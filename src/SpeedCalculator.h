/*
 * SpeedCalculator.h
 *
 *  Created on: May 16, 2019
 *      Author: gazihan
 */

#ifndef SRC_SPEEDCALCULATOR_H_
#define SRC_SPEEDCALCULATOR_H_

class SpeedCalculator {
private:
	int numEntries;
	double *positions;
	double *timesInSeconds;
public:
	void initializeData(int numEntries);
	void calculateAndPrintSpeedData();
};

#endif /* SRC_SPEEDCALCULATOR_H_ */
