//reverse
#include<iostream>
using namespace std;
int main()
{
	int rev=0, rem, n,dummy;
	cout << "Enter the number you want to reverse: ";
	cin>>n;
	cout << n;
	dummy=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	cout << "\nThe reverse of " << dummy << " is= " << rev;
    return 0;
}
