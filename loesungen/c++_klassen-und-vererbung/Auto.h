#ifndef AUTO_H
#define AUTO_H

#include <string>

class Auto
{
	private:
		std::string  name;
		int baujahr;
		
	public:
		Auto(std::string  _name, int _baujahr)
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
		
		std::string getBeschreibung();
};

#endif