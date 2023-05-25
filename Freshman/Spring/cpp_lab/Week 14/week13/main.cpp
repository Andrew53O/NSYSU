#include <iostream>
#include <vector>
#include <string>

// inget apa yang tadi digambar ama si zhujiao
// jadi si HEADER Fire, Water ama Grass punya bapak Pokemon header, jadi ga ush include itu lagi

/* method 1
#include "Water.h"
#include "Fire.h"
#include "Grass.h"

*/ 

#include "Pokemon.h" // method 2 but in the Pokemon.h i also include that three in the botoom of the file

using namespace std;
using namespace Pokemon_lib;


int main(void)
{
	// for more explanation = https://stackoverflow.com/questions/8777724/store-derived-class-objects-in-base-class-variables
	vector <Poke*> v; 
	// ------------------------------Q1------------------------------
	Fire one("Charmander", "fire", 10, 3); one.output();
	v.push_back(&one);
	Fire two("Charmeleon", "fire", 20, 7); two.output();
	v.push_back(&two);
	Fire three("Charizard", "fire", 40, 15); three.output();
	v.push_back(&three);
	
	Water four("Squirtle", "fire", 10, 3); four.output();
	v.push_back(&four);
	Water five("Wartortle", "fire", 20, 7); five.output();
	v.push_back(&five);
	Water six("Blastoise", "fire", 40, 15); six.output();
	v.push_back(&six);
	
	Grass seven("Bulbasaur", "fire", 10, 3); seven.output();
	v.push_back(&seven);
	Grass eight("Ivysaur", "fire", 20, 7); eight.output();
	v.push_back(&eight);
	Grass nine("Venusaur", "fire", 40, 15); nine.output();
	v.push_back(&nine);
	
	
	// ----------------------------------Q2------------------------------
	
	int i1, i2, hp1, hp2, damage1, damage2;	
	cout << "Please enter two pokemon's number: " << endl;
	cin >> i1 >> i2;
	
	hp1 = v[i1]->getHp();
	hp2 = v[i2]->getHp();
	
	damage1 = v[i1]->getAtk();
	damage2 = v[i2]->getAtk();
	
	
	string type1 = v[i1]->getType();
	string type2 = v[i2]->getType();
	
	
	// lawan alami
	// check type 2
	if(type1 == "Water")
	{
		if(type2 == "Fire")
		{
			damage1 *= 2;
		}
		
	}
	else if(type1 == "Fire")
	{
		if(type2 == "Grass")
		{
			damage1 *= 2;
		}
		
	}	
	else if(type1 == "Grass")
	{
		if(type2 == "Water")
		{
			damage1 *= 2;
		}
	}
	
	// for type 2
	if(type2 == "Water")
	{
		if(type1 == "Fire")
		{
			damage2 *= 2;
		}
		
	}
	else if(type2 == "Fire")
	{
		if(type1 == "Grass")
		{
			damage2 *= 2;
		}
		
	}	
	else if(type2 == "Grass")
	{
		if(type1 == "Water")
		{
			damage2 *= 2;
		}
	}
	
	
	
	
	cout << " hp1 =" <<hp1 << endl;
	cout << " hp2 =" <<hp2 << endl;
	cout << " d1 =" <<damage1 << endl;
	cout << " d2 =" <<damage2 << endl;
	cout << " t1 = " << type1 << endl;
	cout << " t2 = " << type2 << endl;
	while(hp1 > 0 && hp2 > 0)
	{
		cout << v[i1]->getName() << " atk >> " << v[i2]->getName() << endl;
		hp2 -= damage1;
		cout << "remain HP " << hp2 << endl;
		
		cout << v[i2]->getName() << " atk >> " << v[i1]->getName() << endl;
		hp1 -= damage2;
		cout << "remain HP " << hp1 << endl;
	} 
	
	cout << " dead" << endl;
	
	
	
	
	
	
	
	
	
	return 0;
}

