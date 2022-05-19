#pragma once 

#include "Triad.h" 

using namespace std;



class Date : public Triad {

private:



	double x, y, z, r;

public:

	Date();

	Date(double, double, double, double);



	void SetX(double);

	void SetY(double);

	void SetZ(double);

	void SetR(double);



	double GetX() const;

	double GetY() const;

	double GetZ() const;

	double GetR() const;



	Date* operator = (Date* D);



	int Ñomparison(const Date A, const Date B) const;

	void Date1(int result);

	friend bool operator > (const Date A, const Date B);

	friend bool operator < (const Date A, const Date B);

	friend bool operator == (const Date A, const Date B);



	void Calculationdate();

	virtual  void Subtraction();

	virtual Date* operator - (Triad*);

	virtual ostream& otput(ostream& out) const;

	virtual istream& entry(istream& in);

};