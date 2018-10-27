//program4
#include<iostream>
using namespace std;
int main()
{
	int n,c=1,sum=0;
	cout << "Enter the number of terms: ";
	cin >> n;
	cout << n;
	for(int i=1;i<=n;i++)
	{
		if(c%2!=0)
		{
			sum=sum+i;
		}
		else if(c%2==0)
		{
			sum=sum-i;
			
		}
		c++;
	}
	cout << "\nSum of series = " << sum;
}
