/*
 * SpeedCalculator.cpp
 *
 *  Created on: May 16, 2019
 *      Author: gazihan
 */

#include "SpeedCalculator.h"
#include <stdlib.h>
#include <iostream>

void SpeedCalculator::initializeData(int numEntries) {
	this->numEntries = numEntries;
	positions = new double[numEntries];
	timesInSeconds = new double[numEntries];

	for (int i = 0; i < numEntries; ++i) {
		positions[i] = rand() * 100;
		if (i == 0) {
			timesInSeconds[i] = 0.0;
		} else {
			timesInSeconds[i] = timesInSeconds[i - 1] + rand();
		}
	}
}

void SpeedCalculator::calculateAndPrintSpeedData() {
	double *speeds;
	double maxSpeed = 0;
	double minSpeed = 0;
	double speedLimit = 100;
	double limitCrossDuration = 0;

	for (int i = 0; i < numEntries; ++i) {
		double dt = timesInSeconds[i + 1] - timesInSeconds[i];
		double speed = (positions[i + 1] - positions[i]) / dt;

		if (maxSpeed < speed) {
			maxSpeed = speed;
		}

		if (minSpeed > speed) {
			minSpeed = speed;
		}

		if (speed > speedLimit) {
			limitCrossDuration += dt;
		}

		speeds[i] = speed;
	}

	std::cout << "Max speed: " << maxSpeed << std::endl;
	std::cout << "Min speed: " << minSpeed << std::endl;
	std::cout << "Crossed the speed limit for " << limitCrossDuration << " seconds"<< std::endl;
	delete[] speeds;
}

