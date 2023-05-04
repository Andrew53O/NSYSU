#include <iostream>
using namespace std;

class Number
{
	public:
	// constructor 
	Number(int a, int b)
	{
		atas = a;
		bawah = b;
	}
	Number()
	{
		atas = 0;
		bawah = 0;
	}
	void seta()
	{	
		int a;
		cin >> a;
		atas = a;
	}
	void setb()
	{
		int b;
		cin >> b;
		bawah = b;
	}
	
	int ga() const {return atas;}
	int gb() const {return bawah;}
	
	void output()
	{
		cout << atas << "/" << bawah << endl;
		
	}	
	private:
	int atas;
	int bawah;
};
// using non member operator overloading
const Number operator +(const Number& nn1, const Number& nn2)
{
	int n3, den3;
	
	int n1 = nn1.ga();
	int den1 = nn1.gb();
	int n2 = nn2.ga();
	int den2 = nn2.gb();
	
	n3 = (n1 * den2) + (n2 * den1);
	den3 = den1 * den2;

	
	return Number(n3, den3);
}


const Number operator -(const Number& nn1, const Number& nn2)
{
	int n3, den3;
	int n1 = nn1.ga();
	int den1 = nn1.gb();
	int n2 = nn2.ga();
	int den2 = nn2.gb();
	
	den3 = den1 * den2;
	
	n3 = (n1 * den2) - (n2 * den1);
	
	return Number(n3, den3);
	
}
const Number operator *(const Number& nn1, const Number& nn2)
{
	int n3, den3;
	int n1 = nn1.ga();
	int den1 = nn1.gb();
	int n2 = nn2.ga();
	int den2 = nn2.gb();
	
	n3 = (n1 * n2);
	den3 = den1 * den2;
	
	return Number(n3, den3);
}
const Number operator /(const Number& nn1, const Number& nn2)
{
	int n3, den3;
	int n1 = nn1.ga();
	int den1 = nn1.gb();
	int n2 = nn2.ga();
	int den2 = nn2.gb();
	
	n3 = (n1 * den2);
	den3 = n2* den1;
	
	return Number(n3, den3);
}
const Number operator -(const Number& n)
{
	int n3, den3;
	int n1 = n.ga();
	int den1 = n.gb();

	n3 = -n1;
	den3 = den1;
	
	
	return Number(n3, den3);
}




int main(void)
{
	Number A, B;
	
	cout << "A's numerator: "; A.seta();
	cout << "A's denominator: "; A.setb();
	cout << "B's numerator: "; B.seta();	
	cout << "B's denominator: "; B.setb();
	
	cout << "A: "; A.output(); cout << "  B: "; B.output();  
	cout << endl;
	
	Number temp;
	temp = A + B / A;
	cout << "A + B / A 			= "; temp.output();
	

	Number temp2;
	temp2 = A - (-B) / A;
	cout << "A - (-B) / A 			= "; temp2.output();
	
	Number temp3;
	temp3 = (A+B) * (-B);
	cout << "(A+B) * (-B) 			= ";temp3.output();
	

	return 0;
}
