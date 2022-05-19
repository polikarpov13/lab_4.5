#include "Date.h" 



Date::Date() : x(0), y(0), z(0), r(0) {} //конструкторт за умовчанням 

Date::Date(double x, double y, double z, double r) { }//конструктор ініціалізації 



void Date::SetX(double value) { x = value; }

void Date::SetY(double value) { y = value; }

void Date::SetZ(double value) { z = value; }

void Date::SetR(double value) { r = value; }



double Date::GetX() const { return x; }

double Date::GetY() const { return y; }

double Date::GetZ() const { return z; }

double Date::GetR() const { return r; }

ostream& Date::otput(ostream& out) const {	//вивід на екран 

	out << ":";

	out << " Years: " << GetX();

	out << " Month: " << GetY();

	out << " Day: " << GetZ();

	return out;

}



istream& Date::entry(istream& in) {	//введення з клавіатури		 

	unsigned int a{}, b{}, c{};

	bool check{};

	cout << " Data: " << endl;

	do {

		cout << " Years = "; in >> a;

		cout << " Month = "; in >> b;

		cout << " Day = "; in >> c;

		cout << " " << a << "." << b << "." << c << endl;

		if (a < 2100 && b < 13 && c < 32)

			check = true;

		else {

			cout << " Error!!! " << endl;

			check = false;

		}

	} while (!check);



	SetX(a);

	SetY(b);

	SetZ(c);



	if (a % 4 == 0) {

		if (a % 100 == 0) {

			if (a % 400 == 0) {

				cout << a << " is a leap year. " << endl;

			}

			else {

				cout << a << " is not a leap year. " << endl;

			}

		}

		else {

			cout << a << " is a leap year. " << endl;

		}

	}

	else {

		cout << a << " is not a leap year. " << endl;

	}



	return in;

}



Date* Date::operator = (Date* D)// Присвоєння 

{

	this->SetX(D->GetX());

	this->SetY(D->GetY());

	return this;

}



bool operator > (const Date A, const Date B)

{

	if (A.GetX() > B.GetX() || (A.GetX() == B.GetX()) &&

		(A.GetY() > B.GetY()) || (A.GetY() == B.GetY()) &&

		(A.GetY() > B.GetY()))

		return 1;

	else

		return 0;

}



bool operator < (const Date A, const Date B)

{

	if (A.GetX() < B.GetX() || (A.GetX() == B.GetX()) &&

		(A.GetY() < B.GetY()) || (A.GetY() == B.GetY()) &&

		(A.GetY() < B.GetY()))

		return 1;

	else

		return 0;

}



bool operator == (const Date A, const Date B)

{

	if ((A.GetX() == B.GetX()) &&

		(A.GetY() == B.GetY()) &&

		(A.GetY() == B.GetY()))

		return 1;

	else

		return 0;

}



int Date::Сomparison(const Date A, const Date B) const

{

	if (A > B)

		return 1;

	if (A < B)

		return 2;

	if (A == B)

		return 3;



}



Date* Date::operator - (Triad* D) {

	Date* D_d = new Date;

	return D_d;

}



void Date::Date1(int result)

{

	switch (result)

	{

	case 1:

		cout << " A2 > B2 " << endl;

		break;

	case 2:

		cout << " A2 < B2 " << endl;

		break;

	case 3:

		cout << " A2 = B2 " << endl;

		break;

	}



}



void Date::Calculationdate()//Задану кількість 

{



	int years_in_years = 2022;

	int month_in_month = 12;

	int day_in_day = 31;

	cout << " Enter the number of day: ";

	int days;

	cin >> days;

	int years = 0, month = 0, day = 0;

	int ostatok;

	years = (days % (years_in_years * month_in_month * day_in_day)) / (month_in_month * day_in_day);

	month = (days % (years_in_years * month_in_month * day_in_day)) % (month_in_month * day_in_day) % day_in_day;

	day = (days % (years_in_years * month_in_month * day_in_day)) % (month_in_month * day_in_day) % day_in_day;

	cout << " Years: " << years << endl;

	cout << " Month: " << month << endl;

	cout << " Day: " << day << endl;

}



void Date::Subtraction()//Віднімання 

{



	int years_in_years = 2022;

	int month_in_month = 12;

	int day_in_day = 31;

	cout << " Enter the number of day: ";

	int days;

	cin >> days;

	int years = 0, month = 0, day = 0;

	int ostatok;

	years = GetX() - (days % (years_in_years * month_in_month * day_in_day)) / (month_in_month * day_in_day);

	month = GetY() - (days % (years_in_years * month_in_month * day_in_day)) % (month_in_month * day_in_day) % day_in_day;

	day = GetZ() - (days % (years_in_years * month_in_month * day_in_day)) % (month_in_month * day_in_day) % day_in_day;

	cout << " Years: " << years << endl;

	cout << " Month: " << month << endl;

	cout << " Day: " << day << endl;

}