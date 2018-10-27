#include<iostream>
using namespace std;
struct employee
{
	char name[100];
	int num;
	float sal,hra;
};
int main()
{
	employee e1;
	cout << "Enter the Employee name: ";
	cin >> e1.name;
	cout << "\nEnter the Employee ID: ";
	cin >> e1.num;
	cout << "\nEnter the Employee Salary: ";
	cin >> e1.sal;
	cout << "Name of Employee : " << e1.name << "\nEmployee ID: " << e1.num << "\nEmployee Salary: " << e1.sal;
    
}
