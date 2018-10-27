//Program to find the factorial of a number 
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number whose factorial you want to find: \n";
	cin >> n;
	int i,fact=1;
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	cout << "The factorial of the number is=" << fact;
}
