#include <iostream>
#include <iomanip>
using namespace std;

int calculate_Grade(char c)
{
	switch(c)
	{
		case 'S': return 10; break;
		case 'A': return 9; break;
		case 'B': return 8; break;
		case 'C': return 7; break;
		case 'D': return 6; break;
		case 'E': return 5; break;
		case 'F': return 0; break;
		
		default:
			cout << "The grade is not calculatetable " ;
		
	}
}



int main(void)
{
	
	int num_Subject = 0;
	cout << "How many subject do you have : "; cin >> num_Subject;
	
	
	double total_score = 0;
	char grade;
	
	for(int i = 1; i <= num_Subject; i++)
	{
		cout << "Subject "<< i << " grade : "; cin >> grade;
		
		total_score += calculate_Grade(grade);
	}

	// calculate average
	double gpa = total_score / num_Subject;
	
	
	cout << "Your GPA is " << setprecision(3) << gpa << " ";
	
	
	

	return 0;
}


