
#include "Fire.h"

namespace Pokemon_lib
{
	Fire::Fire()
	{
		// intentionally blank
	}
	Fire::Fire(string n, string t, int h, int a)
	{
		setName(n);
		setType("Fire"); // always fire
		setHp(h);
		setAtk(a);
	
		
	}


}
