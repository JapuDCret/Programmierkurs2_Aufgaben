#include <iostream>
#include <exception>

using namespace std;

class InvalidArgumentException : exception {
	const char* cause;
	
	public:
		InvalidArgumentException(const char* _cause) : cause(_cause) {};
		const char* what() const throw() { return cause; }
};

class Box {
	double breite;

	public:
		friend void printBreite(const Box& box);
		void setBreite( double b );
};

void Box::setBreite(double b) {
	if(b >= 0) breite = b;
	else throw InvalidArgumentException("breite muss eine natuerliche Zahl sein");
}

void printBreite(const Box& box) {
	cout << "printBreite > breite=" << box.breite << endl;
}

void testBox(Box* box, double breite ) {
	try {
		if(!box) throw runtime_error("Nullpointer");
		cout << "testBox > Breite wird auf " << breite << " gesetzt" << endl;
		box->setBreite(breite);
		cout << "testBox > Breite wird ausgegeben" << endl;
		printBreite( (*box) );
	} catch(const InvalidArgumentException & iae) {
		cerr << "testBox > InvalidArgumentException: " << iae.what() << endl;
	} catch(const std::exception &e) {
		cerr << "testBox > Exception: " << e.what() << endl;
	}
}
 
int main() {
	try {
		Box box1;
		cout << "Teste box1" << endl;
		testBox( &box1, 10.0 );
		cout << endl;
		
		Box box2;
		cout << "Teste box2" << endl;
		testBox( &box2, -1.0 );
		cout << endl;
		
		Box* box3 = nullptr;
		cout << "Teste box3" << endl;
		testBox( box3, 10.0 );
		cout << endl;
		
		Box* box4 = new Box();
		cout << "Teste box4" << endl;
		throw 42;
		testBox( box4, 7.0 );
		cout << endl;
	} catch( ... ) {
		cerr << "Ein unbekannter Fehler ist aufgetreten." << endl;
	}
	
	return 0;
}