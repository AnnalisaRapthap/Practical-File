#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "Enter the numbers:";
	cin >> a;
	cin >> b;
	cout << "Before swap:" << endl << "First number=" << a << endl << "Second number=" << b << endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout << "After swap:" << endl << "First number=" << a << endl << "Second number=" << b;
}
