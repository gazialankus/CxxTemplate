/*
 * LinearMotion1D.cpp
 *
 *  Created on: May 6, 2019
 *      Author: gazihan
 */

#include "LinearMotion1D.h"

void LinearMotion1D::advanceTimeBy(double dt) {
	position += velocity * dt;
}

LinearMotion1D::LinearMotion1D() {
	position = 0;
}

LinearMotion1D::~LinearMotion1D() {
}

