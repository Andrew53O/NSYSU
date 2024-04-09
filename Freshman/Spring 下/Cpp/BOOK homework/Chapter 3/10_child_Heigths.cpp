#include <iostream>

using namespace std;


int child_height(int gender, int moms, int dads);

int main(void)
{
	int gender = -1;
	int height_mom_feet, height_mom_inch ,height_dad_feet, height_dad_inch;
	int mom_total, dad_total;
	int flag = 0;
	do
	{
		cout << "Enter the gender of your future child. Use 1 for female, 0 for male"; 
		if (flag != 0)
		{
			cout << ", 2 for exit\n";
		}
		else
		{
			cout << ".\n";
		}
		cin >> gender;
		
		if (gender == 2)
		{
			break;
		}
		
		cout << "Enter the height in feet and inches of the mom.\n"; cin >> height_mom_feet >> height_mom_inch;
		cout << "Enter the height in feet and inches of the dad.\n"; cin >> height_dad_feet >> height_dad_inch;
	
		mom_total = (height_mom_feet*12) + height_mom_inch;
		dad_total = (height_dad_feet*12) + height_dad_inch;
		int result = child_height(gender, mom_total, dad_total);
	
		cout << "Your future hild is estimated to grow to " << result/12 << " feet and " << result%12 << " inches.\n\n";
		
		// to make exit text appeared;
		flag = 1;
	}while(1);
	
	return 0;
}


int child_height(int gender, int moms, int dads)
{
	int child_hait;
	
	if (gender == 1) // 1 -> female
	{
		child_hait = ((moms * 12/13) + dads) / 2;
		
	}
	else // 0 -> male
	{
		child_hait = ((dads * 13/12) + moms) / 2;
	}
	
	return child_hait;
}

