/*program to print
*
*
* *
* * *
.... no. of lines to be entered by the user*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of lines: \n";
	cin >> n;
	int i;
	int j;
	cout << "*" << endl;
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=i;j++)
		{
	      cout << "*";
	    }
	    cout << endl;
	}
	
 } 
