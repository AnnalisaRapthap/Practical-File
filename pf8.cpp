//program to compute the factors of a given number
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number:\n";
	cin >> n;
	int i,d;
	cout << "The factors of " << n << " are = \n";
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		cout << i << endl;
		
	}
	
}
