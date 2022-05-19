#pragma once 
#include <sstream> 
#include <iostream> 

using namespace std;

class Triad {
public:
	virtual  void Subtraction() = 0;
	virtual Triad* operator - (Triad*) = 0;
	virtual ostream& otput(ostream& out) const = 0;
	virtual istream& entry(istream& in) = 0;
};