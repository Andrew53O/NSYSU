
#include "Water.h"

namespace Pokemon_lib
{
	Water::Water()
	{
		// intentionally blank
	}
	Water::Water(string n, string t, int h, int a)
	{
		setName(n);
		setType("Water"); // always Water
		setHp(h);
		setAtk(a);
	
	}


}
