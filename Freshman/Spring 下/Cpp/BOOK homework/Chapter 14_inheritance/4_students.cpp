#include <iostream>
#include <string>

// without using protected keyword

using namespace std;

class UniversityStaff
{
    public:
    UniversityStaff()
    {
        ;
    }
    UniversityStaff(string theName)
    {
        name = theName;
    }
    // copy constructor
    UniversityStaff(const UniversityStaff& theObject)
    {
        name = theObject.name;
    }
    string getName() const {return name;}

    // like the copy constructor
    UniversityStaff& operator=(const UniversityStaff& rtSide)
    {
        name = rtSide.name;
        return *this; // to return reference, for like staff1 = staff2 = staff3 
        //                                  cause when staff2 = staff3, it need to return something right, like cout

    }
    friend istream& operator >>(istream& inStream, UniversityStaff& staffObject)
    {
        string temp_name;
        cout << "Enter UniversityStaff name " << endl;
        cin >> temp_name;
        staffObject.name = temp_name;

        return inStream ;// return refence like the reason above
    }
    friend ostream& operator <<(ostream& outStream, UniversityStaff& staffObject)
    {   
        cout << "University staff name  =" << staffObject.name << endl;

        return outStream;
    }

    private:
    string name;

};
class Student
{
        public:
        // constructor
        Student()
        {

        }
        
        Student(string univ, int id, UniversityStaff s)
        {
            univ_name = univ;
            regis_num = id;
            staff = s;
        }

        // assigned using operator overloading
        Student& operator=(const Student& theObj)
        {
            univ_name = theObj.univ_name;
            regis_num = theObj.regis_num;
            staff = theObj.staff;
            return *this;
        }

        // copy constructor
        Student(const Student& copy)
        {
            univ_name = copy.univ_name;
            regis_num = copy.regis_num;
            staff = copy.staff;
        }

        // display
        void Display()
        {
            cout << "Univ name = " << univ_name << endl;
            cout << "Student Id = B" << regis_num << endl;
            cout << "Proctor = " << staff << endl;
        }

        void setAll(string u, int n, UniversityStaff s)
        {
            univ_name = u;
            regis_num = n;
            staff = s;
        }

        string getU() {return univ_name;}
        int getR() {return regis_num;}
        UniversityStaff getStaff() {return staff;}


        private:
        string univ_name;
        int regis_num;
        UniversityStaff staff;
};

class ScienceStudnet : public Student
{
        public:
        ScienceStudnet(string u, int n, UniversityStaff staff, string disip, string c) : Student(u, n, staff), disipline(disip), course(c)
        {
            // already being
        }

        // assigned 
        ScienceStudnet& operator = ( ScienceStudnet& theObj)
        {
            // will a way to not copy the code
            Student::setAll(theObj.getU(), theObj.getR(), theObj.getStaff());
            disipline = theObj.disipline;
            course = theObj.course;
            return *this;
        }

        //  copy constructor 
        ScienceStudnet(ScienceStudnet& theObj)
        {
            // will a way to not copy the code
            Student::setAll(theObj.getU(), theObj.getR(), theObj.getStaff());
            disipline = theObj.disipline;
            course = theObj.course;
        }
        void Display2()
        {
            Student::Display(); 
            cout << "Disipline = " << disipline << endl;
            cout << "Cource = " << course << endl;

        }
        private:
        string disipline;
        string course;

};
int main(void)
{
    UniversityStaff john("john");
    Student Test1("NSYSU", 113040056, john);
    cout << "Student Test1(constructed) Data:" << endl;
    Test1.Display();

    Student Test2;
    Test2 = Test1; // assigned
    cout << "Student Test2(assigned) Data:" << endl;
    Test2.Display();


    Student Test3(Test1);
    cout << "Student Test3(copy constructed) Data:" << endl;
    Test3.Display();

    UniversityStaff curry("Curry");
    ScienceStudnet testing("NTU", 10010001, curry, "Math", "undergraduate");
    cout << "ScienceStudnet Test1(constructed) Data:" << endl;
    testing.Display2();

    ScienceStudnet testing2 = testing;
    cout << "ScienceStudnet Test2(assigned) Data:" << endl;
    testing2.Display2();

    ScienceStudnet testing3(testing);
    cout << "ScienceStudnet Test3(copy constructed ) Data:" << endl;
    testing3.Display2();
    return 0;
}