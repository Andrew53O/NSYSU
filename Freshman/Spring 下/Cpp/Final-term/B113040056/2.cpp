#include <iostream>
#include <string>

using namespace std;

class Payment
{
	public:
	Payment()
	{
		amount = 0;
	}
	
	Payment(float amount)
	{
		this->amount = amount;
	}
	
	void setPayment(float amount)
	{
		this->amount = amount;
	}
	
	float getPayment() {return amount;}
	
	void paymentDetails()
	{
		cout << "Please redefine" << endl;
	}
	
	
	private:
	
	float amount;
	
	
};


class CashPayment : public Payment
{
	public:
	CashPayment()
	{
		//
	}
	CashPayment(float f): Payment(f)
	{
		
	}
	void paymentDetails()
	{
		cout << "The cash payment amount is " << getPayment() << endl << endl;
	}

	private:
};

class CreditCardPayment : public Payment
{
	public:
	
	CreditCardPayment()
	{
		string name = "";
		string date = "";
		int num = 0;
	}
	CreditCardPayment(float f, string nem, string dat, string n): Payment(f)
	{
		name = nem;
		date = dat;
		num = n;
	}
	void paymentDetails()
	{
		cout << "The credit cash payment amount is " << getPayment() << endl;
		cout << "The name on the card is " << name << endl;
		cout << "The expiration date is " << date << endl;
		cout << "The credit card number is " << num << endl << endl;
	}

	private:
	string name;
	string date;
	string num;
	

};

int main(void)
{
	
	CashPayment cash1(50.5), cash2(20.45);
 	CreditCardPayment credit1(10.5, "Fred", "2023/1/5", "123456789");
 	CreditCardPayment credit2(100, "Barney", "2022/11/15", "987654321");
	
	cout << "Cash 1 details:"<< endl;
	cash1.paymentDetails();
	cout << "Cash 2 details:"<< endl;
	cash2.paymentDetails();
	
	cout << "Credit 1 details:" << endl;
	credit1.paymentDetails();
	cout << "Credit 2 details:" << endl;
	credit2.paymentDetails();
	// call the paymentDetails in the constructor;

	return 0;
}
