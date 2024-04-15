#include <iostream>
#include <windows.h>
using namespace std;


int main() 
{
	SetConsoleTitle(TEXT("Calculate BMI ( ͡° ͜ʖ ͡° )  By Chotivit Busamongkol"));

	float w,h,BMI,m,m2;

	cout << "\t\t\t\t\t Calculate BMI in C++ :)" << endl;

	system("color 71"); /* color (เลขตัวที่1:พื้นหลัง) (เลขตัวที่2:สีตัวอักษร)*/

	cout << "you weight(Kg):";
	cin >> w;

	cout << "you height(cm):";
	cin >> h;

	m = h / 100;
	m2 = m * m;
	
	BMI = w/m2;
	cout << "you BMI : " << BMI << endl;
	cout << "-------------" << endl;


	if (BMI < 18.50)
	{
		cout << "BMI (kg/m2) : Less than 18.5" << endl;
		cout << "Category : Underweight " << endl;
		cout << "Risk factor : more than usual" << endl;
	}
	
	else if (BMI >= 18.50 && BMI <= 22.90)
	{
		cout << "BMI (kg/m2) : 18.50 - 22.90" << endl;
		cout << "Category : Normal range" << endl;
		cout << "Risk factor : Normal (healthy)" << endl;
	}

	else if(BMI >= 23.00 && BMI <= 24.90)
	{
		cout << "BMI (kg/m2) : 23 - 24.90" << endl;
		cout << "Category : Overweight  (plump)" << endl;
		cout << "Risk factor : obesity 1" << endl;
	}

	else if (BMI >= 25 && BMI <= 29.90)
	{
		cout << "BMI (kg/m2) : 25 - 29.90" << endl;
		cout << "Category : Overweight II (Moderately obese)" << endl;
		cout << "Risk factor : obesity 2" << endl;
	}

	else if (BMI > 30)
	{
		cout << "BMI (Kg/m2) : More than 30.0" << endl;
		cout << "Category : Overweight III (Severely obese)" << endl;
		cout << "Risk factor : obesity 3" << endl;

	}

	system("pause");
	return 0;

}
