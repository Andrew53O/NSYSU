
#include "Grass.h"

namespace Pokemon_lib
{
	Grass::Grass()
	{
		// intentionally blank
	}
	Grass::Grass(string n, string t, int h, int a)
	{
		setName(n);
		setType("Grass"); // always Grass
		setHp(h);
		setAtk(a);
	
	}


}
