#include<iostream>
using namespace std;
class matrix
{
	int m1[3][3],m2[3][3],ans[3][3],i,j;
	public:
	void getdata()
	{
		cout << "Enter the elements of matrix A:";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cin >> m1[i][j];
			}
		}
		cout << "\nEnter the elements of matrix B:";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cin >> m2[i][j];
			}
		}
	}
	void summatrix()
	{
	
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				ans[i][j]=m1[i][j]+m2[i][j];
			}
		}
		cout << "\nThe sum= " ;
		for(i=0;i<3;i++)
		{
			cout << endl;
			for(j=0;j<3;j++)
			{
		        cout<<ans[i][j] << "\t";
			}
		}
			cout << endl;
	}
	void diffmatrix()
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
		         ans[i][j]=m1[i][j]-m2[i][j];
			}
		}
		cout << "\nThe Difference= ";
		for(i=0;i<3;i++)
		{
			cout << endl;
			for(j=0;j<3;j++)
			{
		      cout << ans[i][j]<<"\t";
			}
		}
		cout << endl;
	}
	void transpose()
	{
		int ans2[3][3];
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
		         ans[i][j]=m1[j][i];
			}
		}
		cout << "\nThe Transpose of A= ";
		for(i=0;i<3;i++)
		{
			cout << endl;
			for(j=0;j<3;j++)
			{
		      cout << ans[i][j]<<"\t";
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
		         ans2[i][j]=m2[j][i];
			}
		}
		cout << "\nThe Transpose of B= ";
		for(i=0;i<3;i++)
		{
			cout << endl;
			for(j=0;j<3;j++)
			{
		      cout << ans2[i][j]<<"\t";
			}
		}
	}
};
int main()
{
	matrix m, sum,diff,trans;
	int ch,c=1;

	while(c==1)
	{
		
	cout << "Press: \n 1.Sum of Matrices. \n 2.Difference between Matrices. \n 3.Transpose of Matrices. \n";
	cin >> ch;
	if(ch==1)
	{
    sum.getdata();
	sum.summatrix();
	}
	if(ch==2)
	{
	diff.getdata();
	diff.diffmatrix();
	}
	if(ch==3)
	{
	trans.getdata();
	trans.transpose();
	}
	cout << "\nPress 1 to Continue and 0 to Stop:";
	cin >> c;
	}
}
