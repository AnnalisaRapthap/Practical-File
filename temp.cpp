//11.8.18. Convert fahrenheit to celsius
#include<iostream>
using namespace std;
int main()
{
	float f,c;
	cout << "Enter the temperature in Fahrenheit: \n";
	cin >> f;
	c=((f-32)*5)/9;
	cout << "The temperature in Celsius= " << c;
 } 
