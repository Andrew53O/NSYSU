#include <iostream>

using namespace std;

class complex
{
	public:
	complex()
	{
		;
	}
	complex(int a, int b)
	{
		real = a;
		image = b;
	}
	void output()
	{
		cout << "(" << real << "," << image << ")" << endl;
	}
	
	// input output friend function
	friend ostream& operator << (ostream& outs, const complex& c)
	{
		cout << "(" << c.real << "," << c.image << ")" << endl;
		return outs;
	}
	
	friend istream& operator >> (istream& ins, complex& c) 
	{	
		ins >> c.real;
		ins >> c.image; 		
		return ins;
	}
	
	// +	
	friend const complex operator +(const complex& c1, const complex& c2)
	{
		int resUp, resDown;
		
		resUp = c1.real + c2.real;
		resDown = c1.image + c2.image;

		return complex(resUp, resDown);
	}
	// *
	friend const complex operator *(const complex& c1, const int num)
	{
		int resUp, resDown;
		
		resUp = c1.real * num;
		resDown = c1.image * num;
		
	
		return complex(resUp, resDown);
	}
	// ++A
	friend complex operator++(complex& c)
	{
		c.real++;
		c.image++;
		
		return complex(c.real, c.image);
	}
	// A++
	friend const complex operator ++(complex& c, int ignoreeMe)
	{
		int temp1 = c.real;
		int temp2 = c.image;
		c.real++;
		c.image++;
		
		return complex(temp1, temp2);
	}
	
	// A+=B
	friend const complex operator +=( complex& c1,  complex& c2)
	{
		c1.real = c1.real + c2.real;
		c1.image = c1.image + c2.image;

		return c1;
	}
	// A*= B
	
	friend const complex operator *=( complex& c1, const complex& c2)
	{
		int temp_c1 =  c1.real;
		c1.real = (c1.real * c2.real) - (c1.image * c2.image);
		c1.image = (c1.image * c2.real) + (temp_c1 * c2.image);

		return c1;
	}



	private:
	int real;
	int image;
};


int main(void)
{
	complex A, B; int C;
	cout << "Enter the pair A(real1, imag1) :"; cin >> A; 
	cout << "Enter the pair B(real1, imag1) :"; cin >> B; 
	cout << "Enter C: "; cin >> C;
	cout << endl;
	
	cout << "A + B: "<< A + B << endl;
	cout << "A * C :"<< A * C << endl;
	cout << "A++ :"<< A++ << endl;
	cout << "++A " <<  ++A << endl;
	
	A+=B;
	cout << "A += B, A: " << A << endl;
	
	A*=B;
	cout << "A *= B, A: " << A << endl;
	return 0;	
}
