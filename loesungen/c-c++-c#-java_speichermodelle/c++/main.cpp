#include <iostream>

using namespace std;

class Vector
{
	int x, y;
	
	public:
		Vector(int _x, int _y) : x(_x), y(_y) {};
		const int* getX() const { return &x; }
		const int* getY() const { return &y; }
};

void printVector(Vector* v)
{
	const int* x = v->getX();
	const int* y = v->getY();
	
	cout << "v(@" << v << "): " << "x(@" << x << ")=" << (*x) << ", " << "y(@" << y << ")=" << (*y) << endl;
}

int main()
{
	Vector v1(5, 3);
	printVector(&v1);
	Vector* v2 = new Vector(9, 7);
	printVector(v2);
	
	Vector v3 = v1;
	printVector(&v3);
	
	Vector* v4 = new Vector(v1);
	printVector(v4);
	// pos1
	delete(v2);
	printVector(v2);
	// pos2
	return 0;
}