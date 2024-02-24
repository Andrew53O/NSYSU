


#ifndef GRASS_H
#define GRASS_H

#include <iostream>
#include <string>

#include "Pokemon.h"


using namespace std;


namespace Pokemon_lib
{
	class Grass : public Poke
	{
		public:
		Grass();
		Grass(string n, string y, int h, int a);
		
		
	};


}

#endif
