#include <iostream>
#include <string>
#include "LinkedList.cpp"

using namespace std;
using namespace Fh::Pk2;


std::ostream& operator<<(std::ostream& stream, const string* o) {
	if(o)
		stream << (*o);
	else
		stream << "nullptr";
	
	return stream;
}

template<class T>
int printList(LinkedList<T>& list, int size) {
	int i;
	for(i=0; i < size; i++) {
		cout << "list.get(" << i << ") = " << list.get(i) << endl;
	}
}

int main() {
	LinkedList<string> list;
	
	list.add("1");
	list.add("2");
	list.add("3");
	
	// drucke die Liste das erste mal aus
	printList(list, 4);
	cout << endl;
	
	// entferne das zweite Element und gebe Liste aus
	cout << "list.remove(1) = " << list.remove(1) << endl;
	printList(list, 4);
	cout << endl;
	
	// entferne das zweite Element und gebe Liste aus
	cout << "list.remove(1) = " << list.remove(1) << endl;
	printList(list, 4);
	cout << endl;
	
	// entferne das erste Element und gebe Liste aus
	cout << "list.remove(0) = " << list.remove(0) << endl;
	printList(list, 4);
	cout << endl;
	
	// entferne das erste Element und gebe Liste aus
	cout << "list.remove(0) = " << list.remove(0) << endl;
	printList(list, 4);
	cout << endl;
	
	return 0;
}