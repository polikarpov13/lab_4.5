#include "Time.h" 



Time::Time() : x(0), y(0), z(0), r(0) {}//конструкторт за умовчанням 

Time::Time(double x, double y, double z, double r) {} //конструктор ініціалізації 



void Time::SetX(double value) { x = value; }

void Time::SetY(double value) { y = value; }

void Time::SetZ(double value) { z = value; }

void Time::SetR(double value) { r = value; }



double Time::GetX() const { return x; }

double Time::GetY() const { return y; }

double Time::GetZ() const { return z; }

double Time::GetR() const { return r; }



ostream& Time::otput(ostream& out) const {	//вивід на екран 

	out << ":";

	out << " Hour: " << GetX();

	out << " Minute: " << GetY();

	out << " Seconds: " << GetZ();

	return out;

}



istream& Time::entry(istream& in) {		//введення з клавіатури			 

	double a{}, b{}, c{};

	bool check{};

	cout << " Time: " << endl;

	do {

		cout << " Hour = "; in >> a;

		cout << " Minute = "; in >> b;

		cout << " Seconds = "; in >> c;

		cout << " " << a << ":" << b << ":" << c << endl;

		if (a < 24 && b < 60 && c < 60)

			check = true;

		else {

			cout << " Error!!! " << endl;;

			check = false;

		}

	} while (!check);



	SetX(a);

	SetY(b);

	SetZ(c);



	return in;

}



double Time::SecondsTransfer()//Переведення в секунди 

{

	double C = ((GetX() * 60 * 60) + (GetY() * 60) + GetZ());

	return C;

}



double Time::SecondsMinute()//Переведення в хвилини 

{

	double M = ((GetX() * 60) + GetY() + (floor(GetZ() / 60)));

	return M;

}



bool operator > (const Time A, const Time B)

{

	if (A.GetX() > B.GetX() || (A.GetX() == B.GetX()) &&

		(A.GetY() > B.GetY()) || (A.GetY() == B.GetY()) &&

		(A.GetY() > B.GetY()))

		return 1;

	else

		return 0;

}



bool operator < (const Time A, const Time B)

{

	if (A.GetX() < B.GetX() || (A.GetX() == B.GetX()) &&

		(A.GetY() < B.GetY()) || (A.GetY() == B.GetY()) &&

		(A.GetY() < B.GetY()))

		return 1;

	else

		return 0;

}



bool operator == (const Time A, const Time B)

{

	if ((A.GetX() == B.GetX()) &&

		(A.GetY() == B.GetY()) &&

		(A.GetY() == B.GetY()))

		return 1;

	else

		return 0;

}



int Time::Сomparison(const Time A, const Time B) const

{

	if (A > B)

		return 1;

	if (A < B)

		return 2;

	if (A == B)

		return 3;



}



void Time::Time1(int result)

{

	switch (result)

	{

	case 1:

		cout << " A1 > B1 " << endl;

		break;

	case 2:

		cout << " A1 < B1 " << endl;

		break;

	case 3:

		cout << " A1 = B1 " << endl;

		break;

	}



}

Time* Time::operator - (Triad* D) {

	Time* T = new Time();

	T->SetX(this->GetX() - ((Time*)D)->GetX());

	T->SetY(this->GetY() - ((Time*)D)->GetY());

	T->SetZ(this->GetZ() - ((Time*)D)->GetZ());

	return T;

}



void Time::Additiontime()///Додавання 

{



	const int hour_in_day = 24;

	const int min_in_hour = 60;

	const int sec_in_sec = 60;

	cout << " Enter the number of seconds: ";

	long long second;

	cin >> second;

	int hour = 0, min = 0, sec = 0;

	int ostatok;

	hour = (second % (hour_in_day * min_in_hour * sec_in_sec)) / (min_in_hour * sec_in_sec) + GetX();

	min = (second % (hour_in_day * min_in_hour * sec_in_sec)) % (min_in_hour * sec_in_sec) / sec_in_sec + GetY();

	sec = (second % (hour_in_day * min_in_hour * sec_in_sec)) % (min_in_hour * sec_in_sec) % sec_in_sec + GetZ();

	cout << " Hour: " << hour << endl;

	cout << " Minute: " << min << endl;

	cout << " Seconds: " << sec << endl;

}



void Time::Subtraction()///Віднімання 

{



	const int hour_in_day = 24;

	const int min_in_hour = 60;

	const int sec_in_sec = 60;

	cout << " Enter the number of seconds: ";

	long long second;

	cin >> second;

	int hour = 0, min = 0, sec = 0;

	int ostatok;

	hour = GetX() - (second % (hour_in_day * min_in_hour * sec_in_sec)) / (min_in_hour * sec_in_sec);

	min = GetY() - (second % (hour_in_day * min_in_hour * sec_in_sec)) % (min_in_hour * sec_in_sec) / sec_in_sec;

	sec = GetZ() - (second % (hour_in_day * min_in_hour * sec_in_sec)) % (min_in_hour * sec_in_sec) % sec_in_sec;

	cout << " Hour: " << hour << endl;

	cout << " Minute: " << min << endl;

	cout << " Seconds: " << sec << endl;

}