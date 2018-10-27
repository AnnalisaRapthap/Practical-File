#include<iostream>
using namespace std;
void even(int ar[], int size)
{
	int i;
	cout << "\nThe even elements are: " << endl;
	for(i=0;i<size;i++)
	{
		if(ar[i]%2==0)
		cout << ar[i] << "\t";
	}
}
void odd(int ar[],int size)
{
    int i;
    cout << "\nThe odd elements are: " << endl;
	for(i=0;i<size;i++)
	{
		if(ar[i]%2!=0)
		cout << ar[i] <<"\t" ;
            }
}
void sumav(int ar[],int size)

   {
   	
	int sum=0,av,i;
	for(i=0;i<size;i++)
	{
		sum=sum+ar[i];
	}
	av=sum/10;
	cout << "\nThe sum of elements= " << sum;
           cout << "\nThe average of elements= " << av;
}
void minmax(int ar[],int size)
{
	int i, min=ar[0], max=0;
	for(i=0;i<size;i++)
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
    int j;
    cout << "Enter the number of elements: ";
    cin >>j;
	int array[j],i;
	cout << "Enter the elements of the array: ";
	for(i=0;i<j;i++)
	{
		cin >> array[i];
	}
	even(array,j);
	odd(array,j);
	sumav(array,j);
	minmax(array,j);
		
	} 
