#include<iostream>
using namespace std;
void even(int ar[10])
{
	int i;
	cout << "\nThe even elements are: " << endl;
	for(i=0;i<10;i++)
	{
		if(ar[i]%2==0)
		cout << ar[i] << "\t";
	}
}
void odd(int ar[10])
{
    int i;
    cout << "\nThe odd elements are: " << endl;
	for(i=0;i<10;i++)
	{
		if(ar[i]%2!=0)
		cout << ar[i] <<"\t" ;
}
}
void sumav(int ar[10])

   {
   	
	int sum=0,av,i;
	for(i=0;i<10;i++)
	{
		sum=sum+ar[i];
	}
	av=sum/10;
	cout << "\nThe sum of elements= " << sum;
    cout << "\nThe average of elements= " << av;
}
void minmax(int ar[10])
{
	int i, min=ar[0], max=0;
	for(i=0;i<10;i++)
	{
		if(ar[i]>max)
		max=ar[i];
		else if(ar[i]<min)
		min=ar[i];
	}
	cout << "\nMaximum= " <<max;
	cout << "\nMiniimum= " <<min;
	
}
int main()
{
	int array[10],i;
	cout << "Enter the elements of the array: ";
	for(i=0;i<10;i++)
	{
		cin >> array[i];
	}
	even(array);
	odd(array);
	sumav(array);
	minmax(array);
		
	}
	

