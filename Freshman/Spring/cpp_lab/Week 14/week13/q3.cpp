#include <iostream>
#include <string>
#include <cmath>


using namespace std;

class Character
{
	public:
	Character()
	{
		//intentionally empty
	}
	
	Character(int lel, int ex, string n)
	{
		// exp now
		ex = pow((lel - 1), 2) * EXP_LV;
		// calculate upper bound
		int top = pow((lel), 2) * EXP_LV;

		level = lel;

		exp = ex;
		exp2 = top;
		
		name = n;
	}
	
	
	void print()
	{
		cout << "Wrong area, please redefine print" << endl;
	}
	
	void beatMonster(int add)
	{
		exp+= add;
		
		while(true)
		{
			if(exp2 < exp)
			{
				// need to place in front
				level++;
				exp2 = pow((level), 2) * EXP_LV;
				
			}
			else
			{
				break;
			}
			
		}
		
	}
	
	
	void levelUp(); 
	
	

	string getName()
	{
		return name;
	}
	
	int getLevel()
	{
		return level;
	}
	
	int getExp()
	{
		return exp;
	}
	
	int getExp2()
	{
		return exp2;
	}
	
	private:
	static const int EXP_LV = 100;
	string name;
	int level;
	int exp;
	int exp2;
	
};


class Knight : public Character
{
	public:
	Knight()
	{
		
	}
	
	Knight(int l, int e, string n) : Character(l,e, n) // called Character constructor
	{
		
	}
	void print()
	{
		cout << "Knight " << getName() << ": Level " << getLevel()<< "(" << getExp() << "/" << getExp2() << ")"  << endl;
	}
};

class Warrior : public Character
{
	public:
	Warrior()
	{
		
	}
	Warrior(int l, int e, string n) : Character(l,e, n)
	{
	
	
	}
	void print()
	{
		cout << "Warrior " << getName() << ": Level " << getLevel()<< "(" << getExp() << "/" << getExp2() << ")"  << endl;
	}
};


int main(void)
{
	Knight Leo(10, 0, "Leo"), Tsukasa(8,0, "Tsukasa");
	Warrior Rose(12,0, "Rose");
	
	Leo.print();
	Tsukasa.print();
	Rose.print();
	
	int monster = 10000;
	
	cout << "Rose beat the monster" << endl;
	
	Rose.beatMonster(monster);
	
	Leo.print();
	Tsukasa.print();
	Rose.print();
	
	return 0;
}
