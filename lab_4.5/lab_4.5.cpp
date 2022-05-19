#include <typeinfo>
#include <iostream>
#include "Date.h"
#include "Time.h"
#include <Windows.h>
using namespace std;

ostream& operator << (ostream& out, const Triad& D)

{

	return D.otput(out);

}



istream& operator >> (istream& in, Triad& D)

{

	return D.entry(in);

}



int main() {



	int result;

	Triad* A = new Time;

	Triad* B = new Time;

	Triad* C = new Time;





	cin >> *A;

	cin >> *B;



	cout << " Object " << typeid(*A).name() << *A;

	cout << "\n";

	system("pause");



	cout << " Object " << typeid(*B).name() << *B;

	cout << "\n";

	system("pause");

	C = *A - B;

	cout << " Subtraction Objects " << typeid(*C).name() << *C;

	cout << "\n";

	system("pause");

	delete A;

	delete B;



	Time A1, B1;



	cin >> A1;

	cin >> B1;

	cout << " Subtraction: " << endl;



	A1.Subtraction();



	cout << " Addition: " << endl;

	A1.Additiontime();



	cout << " Comparison: " << endl;

	result = A1.Сomparison(A1, B1);

	A1.Time1(result);



	cout << " Transfer seconds A1:  " << A1.SecondsTransfer() << endl;

	cout << " Transfer seconds B1:  " << B1.SecondsTransfer() << endl;



	cout << " Transfer minutes A1:  " << A1.SecondsMinute() << endl;

	cout << " Transfer minutes B1:  " << B1.SecondsMinute() << endl;





	cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;



	A = new Date;

	B = new Date;





	cin >> *A;

	cin >> *B;



	cout << " Object " << typeid(*A).name() << *A;

	cout << "\n";

	system("pause");



	cout << " Object " << typeid(*B).name() << *B;

	cout << "\n";

	system("pause");



	Date A2, B2;

	cin >> A2;

	cin >> B2;



	A2.Calculationdate();

	cout << " Subtraction: " << endl;

	A2.Subtraction();



	cout << " Comparison: " << endl;

	result = A2.Сomparison(A2, B2);

	A2.Date1(result);



	delete A;

	delete B;



}