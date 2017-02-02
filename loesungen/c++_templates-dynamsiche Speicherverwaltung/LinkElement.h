#ifndef LINKELEMENT_H
#define LINKELEMENT_H

namespace Fh {
	namespace Pk2 {
		template<class T>
		class LinkElement {
			private:
				const T* object;
				LinkElement* next;
			
			public:
				LinkElement(const T* o, LinkElement* n)
					: object(o), next(n)
					{};
				
				~LinkElement() {
					delete(object);
				}
				
				const T* getObject() const {
					return object;
				}
				
				LinkElement* getNext() const {
					return next;
				}
				
				void setNext(LinkElement* n) {
					next = n;
				}
		};
	}
}

#endif