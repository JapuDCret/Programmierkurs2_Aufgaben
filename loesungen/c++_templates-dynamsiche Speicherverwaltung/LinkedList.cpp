#include "LinkedList.h"

using namespace Fh::Pk2;

template<class T>
void LinkedList<T>::add(const T& o) {
	// Erzeugen Sie dynamisch ein LinkElement.
	// Benutzen Sie den Kopierkonstruktor um den Wert von o zu kopieren
	// und erzeugen sie so ein dynamische erstelltes Element, 
	// welches sie beim Erstellen des LinkElements benutzen
	LinkElement<T>* tmp = new LinkElement<T>(new T(o), nullptr);
	
	if(head == nullptr) {
		head = tmp;
		tail = head;
	} else {
		tail->setNext(tmp);
		tail = tmp;
	}
}

template<class T>
const T* LinkedList<T>::get(int pos) const {
	LinkElement<T>* tmp = head;
	int i = 0;
	while(i++ < pos) {
		if(tmp == nullptr)
			return nullptr;
		tmp = tmp->getNext();
	}
	
	if(tmp == nullptr)
		return nullptr;
	else
		return tmp->getObject();
}

template<class T>
int LinkedList<T>::remove(int pos) {
	LinkElement<T>* tmp = head;
	LinkElement<T>* prev = nullptr;
	int i = 0;
	while(i++ < pos) {
		if(tmp == nullptr)
			return 0;
		prev = tmp;
		tmp = tmp->getNext();
	}
	
	if(tmp == nullptr) {
		return 0;
	} else {
		if(prev == nullptr) {
			head = nullptr;
			tail = nullptr;
		} else {
			tail = prev;
			tail->setNext(tmp->getNext());
		}
		// Lösche tmp
		delete(tmp);
		return 1;
	}
}