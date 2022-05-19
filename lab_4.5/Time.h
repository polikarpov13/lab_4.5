#pragma once 

#include "Triad.h" 

using namespace std;

class Time : public Triad {

private:

	double x, y, z, r;

public:

	Time();

	Time(double, double, double, double);



	void SetX(double);

	void SetY(double);

	void SetZ(double);

	void SetR(double);



	double GetX() const;

	double GetY() const;

	double GetZ() const;

	double GetR() const;



	double SecondsTransfer();

	double SecondsMinute();



	int Ñomparison(const Time A, const Time B) const;

	void Time1(int result);

	friend bool operator > (const Time A, const Time B);

	friend bool operator < (const Time A, const Time B);

	friend bool operator == (const Time A, const Time B);



	void Additiontime();

	virtual void Subtraction();

	virtual Time* operator - (Triad*);

	virtual ostream& otput(ostream& out) const;

	virtual istream& entry(istream& in);

};