#ifndef AUTO_H
#define AUTO_H

#include <string>

using namespace std;

namespace Fh
{
	namespace Pk2
	{
		class Auto
		{
			private:
				string name;
				int baujahr;
				
			public:
				Auto(string  _name, int _baujahr)
					: name(_name), baujahr(_baujahr)
				{
					// hier gibt es nichts zu tun
				};
				
				~Auto()
				{
					// Auto hat keine dynamisch erzeugten Objekte,
					// der Destruktor der Variablen name und baujahr werden implizit aufgerufen,
					// da sie Werteobjekte sind und keiner Pointer
				};
				
				string inline getName() const { return name; }
				
				int inline getBaujahr() const { return baujahr; }
		};
		
		ostream& operator<<(ostream& stream, Auto& a);
	}
}

#endif