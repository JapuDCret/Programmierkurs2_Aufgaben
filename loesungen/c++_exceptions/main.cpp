#include <iostream>

using namespace std;

double divide(double a, double b)
{
	if(b == 0)
		throw -1;
	
	return a / b;
}

double test(double a, double b)
{
	cout << "divide(" << a <<  ", " << b << ") = " << divide(a, b) << endl;
}

int main()
{
	try
	{
		double x = 0.0;
		double y = 5.0;
		double z = -3;
		
		test(x, y);
		test(x, z);
		test(y, x);
		test(y, z);
		test(z, x);
		test(z, y);
	}
	catch(int e)
	{
		cerr << "Es ist ein Fehler aufgetreten" << endl;
	}
	
	return 0;
}