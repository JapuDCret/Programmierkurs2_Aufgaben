#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "LinkElement.h"

namespace Fh {
	namespace Pk2 {
		template<class T>
		class LinkedList {
			private:
				LinkElement<T>* head;
				LinkElement<T>* tail;
			
			public:
				LinkedList() {
					head = nullptr;
					tail = nullptr;
				}
				
				~LinkedList() {
					// löschen Sie alle Elemente
					while(remove(0));
				}
				
				void add(const T& o);
				const T* get(int pos) const;
				int remove(int pos);
		};
	}
}

#endif