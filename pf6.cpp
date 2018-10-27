#include <iostream>
using namespace std;

int main() 
{
	int math,comp, phy, eng;
	float p;
	cout << "Enter the marks in Maths: ";
	cin >> math;
	cout << "\nEnter the marks in Computer Science: ";
	cin >> comp;
	cout << "\nEnter the marks in Physics: ";
	cin >> phy;
	cout << "\nEnter the marks in English: ";
	cin >> eng;
	cout << endl;
	p=(math+comp+phy+eng)/4;
	if(p>=90)
	cout << "Grade= AA";
	else if(p>=80&&p<90)
	cout << "Grade= AB";
	else if(p>=70&&p<80)
	cout << "Grade= BB";
	else if(p>=60&&p<70)
	cout << "Grade= BC";	
	else if(p>=50&&p<60)
	cout << "Grade= CC";	
	else if(p>=45&&p<50)
	cout << "Grade= CD";
	else if(p>=40&&p<45)
	cout << "Grade= DD";
	else if(p<40)
	cout << "Grade= FR";
	
	return 0;
	
}
