//***************************************************************************
// File name:  RationalSet.h
// Author:     CS, Pacific University
// Date:       2/18/19
// Class:      CS250
// Assignment: RationalSet 
// Purpose:    Definition for class RationalSet. A set of Rational numbers 
//             is of the form {}, {1/2}, {1/2 2/3}, ...
//
//***************************************************************************

#ifndef RATIONALSET_H
#define RATIONALSET_H

#include "Rational.h"

using namespace std;

class RationalSet {
public:
	static const int MAX_RATIONALS = 100;

	void print(ostream& rcOutStream) const;
	bool isIn(const Rational& rcRational) const;
	RationalSet intersection(const RationalSet& rcOtherSet) const;
	bool add(const Rational& rcRational);

private:
	Rational macRational[MAX_RATIONALS];
	int mNumRationals = 0;
};

#endif