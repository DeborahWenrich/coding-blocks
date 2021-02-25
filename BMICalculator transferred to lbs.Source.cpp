#include <iostream>
using namespace std;

//@TrueCodeBeauty set this up as BMI Calculator in her tutorial no. 7, I converted the kilograms to pounds to see if it would
//work.

int main()
{
// body mass calculator
	// weight{1b}, height = height(ft);
	//underweight < 40.565
	//normal weight 40.786-54
	//overweight > 55.116

	double weight, height, bmi;   //use float for decimal but use double without float for bigger numbers
	cout << "weight(lb), height(in): ";
	cout << "Please enter your weight and height";
	cin >> weight >> height;
	bmi = weight / (height * height * 703.06957964);  //Remember to put parenthesis around order of operation, if you don't
	                                   // this program results in -nan(ind) unable to calculate infinity lol

	if (bmi < 40.565)
		cout << "underweight" << endl;
	else
		if (bmi > 55.116)
			cout << "overweight" << endl;
		else
			cout << "normal weight" << endl;

	cout << "Your bmi is " << bmi;



	system("pause>0");
}