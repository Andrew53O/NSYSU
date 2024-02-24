#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	double initial_Deposit, interest_Rate, fixed_Withdraw;
	
	
	cout << "Enter Initial Deposit : "; cin >> initial_Deposit;
	cout << "Enter Interest Rate : "; cin >> interest_Rate;
	cout << "Enter fixed Withdraw per month : "; cin >> fixed_Withdraw;

	int months = 0;
	double dynamic_monthly_rate;
	double principal;
	cout << "months				interest		principal"<<endl;
	// I assume the withdrawal is happened first than the credit from interest rate
	while(1)
	{
		months++;
		if (initial_Deposit < fixed_Withdraw)
		{
			// for the last line
			dynamic_monthly_rate = initial_Deposit * interest_Rate;
			principal = initial_Deposit + dynamic_monthly_rate;
			break;
		}
		
		
		dynamic_monthly_rate = initial_Deposit * interest_Rate;
		principal = initial_Deposit - fixed_Withdraw + dynamic_monthly_rate;
		
		cout << months << "			"<< fixed  <<setprecision(2) << dynamic_monthly_rate << "			" << principal <<endl;
		
		// assign initial deposit back
		initial_Deposit = principal;
		
		
	}

	cout << "number of payments = " << months <<" months interest "<< dynamic_monthly_rate <<" last payment = " << principal<< endl;

	return 0;
}

