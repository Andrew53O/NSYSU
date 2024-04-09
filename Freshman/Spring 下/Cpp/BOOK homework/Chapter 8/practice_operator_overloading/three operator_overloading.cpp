#include <iostream>

using namespace std;

class Simple
{
    public:
    Simple(int n) : money(n) {;}
    Simple() {money = 0;}


    // operator overloading as member function
    const Simple operator +(const Simple& amount) const;

    // operator overloading as friends
    friend const bool operator >(const Simple& a1, const Simple& a2);
    private:
    int money;

};

// operator overloading as non-member function non-friends
const Simple operator -(const Simple& amount1, const Simple& amount2)
{

}

int main(void)
{



    return 0;
}

// function heading of operator overloading as member function
// return type class name::function name
// cosnt for return object, const for calling object     const in here is for calling object
const Simple Simple::operator +(const Simple& amount1) const
{

}
