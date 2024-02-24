
#include <iostream>
#include <string>

#include "Pokemon.h"

using namespace std;


namespace Pokemon_lib
{
	Poke::Poke()
	{
		name = "Unnamed";
		type = "Untype";
		hp = 0;
		atk = 0;
	}	
	string Poke::getName() {return name;}
	string Poke::getType() {return type;}
	int  Poke::getHp() {return hp;}
	int Poke::getAtk() {return atk;}


	void Poke::setName(string nn) { name = nn;}
	void Poke::setType(string tt) { type =  tt;}
	void Poke::setHp(int hh) { hp = hh;}
	void Poke::setAtk(int aa) {atk = aa;}

	void Poke::output()
	{
		cout << name << " " << "Type : " << type << " HP: " << hp << "  ATK: " << atk << endl;
	}
}
