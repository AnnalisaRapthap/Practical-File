//greatest
#include<iostream>
using namespace std;
int main()
{
int array[3];
int max=0,i;
cout << "Enter the three numbers: ";
for(i=0;i<3;i++)
{
	cin >> array[i];
} 
for(i=0;i<3;i++)
{
	
	if(array[i]>max)
	max=array[i];
}
cout << "\nThe greatest number is= " <<max;
}
