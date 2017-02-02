#include <iostream>
#include "Auto.h"

using namespace std;

namespace Fh
{
	namespace Pk2
	{
		ostream& operator<<(ostream& stream, Auto& a)
		{
			stream << "name='" << a.getName() << "', baujahr=" << a.getBaujahr();
			
			return stream;
		}
	}
}