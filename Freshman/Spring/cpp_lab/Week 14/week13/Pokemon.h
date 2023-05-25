

#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

using namespace std;



namespace Pokemon_lib
{
	class Poke
	{
		public:
		Poke();
		
		// mutator
		void setName(string ss);
		void setType(string tt);
		void setHp(int hh);
		void setAtk(int aa);
		// accesor
		string getName();
		string getType();
		int getHp();
		int getAtk();
		
		// display
		
		void output();
		
		

		
		private:
		string name;
		string type;
		int hp;
		int atk;
		
		
	};


}

/*
#include "Water.h"
#include "Fire.h"
#include "Grass.h"
*/

#endif
