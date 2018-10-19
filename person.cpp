#include<iostream>
using namespace std;
class Person
{
   protected:
   char name[40];
   int age;
   public:
	void getdata()
	{
	cout << "\nEnter the name: ";
	cin >> name;
	cout << "\nEnter the age: ";
	cin>> age;
	}
	void putdata()
	{
		cout << "\nName: " << name;
		cout << "\nAge: " << age;
    }
};
class Student :public Person
{
	int roll;
	public:
	void getdata()
	{
		Person :: getdata();
		cout << "\nEnter the roll no: ";
		cin >> roll; 
	}
	void putdata()
	{
		Person :: putdata();
		cout << "\nroll no: " << roll;
	}
};
class Teacher :public Person
{
	int sal;
	public:
	void getdata()
	{
		Person :: getdata();
		cout << "\nEnter the salary: ";
		cin >> sal; 
	}
	void putdata()
	{
		Person :: putdata();
		cout << "\nSalary: " << sal;
	}
};
int main()
{
	Student s;
	Teacher t;
	s.getdata();
	s.putdata();
	t.getdata();
	t.putdata();
	
}
