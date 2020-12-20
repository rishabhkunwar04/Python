#include<iostream>
using namespace std;
int main()
{
	int a[100][100];
	int r,c;
	cin>>r>>c;
	for(int row=0;row<r;row++)
	{
		for(int col=0;col<c;col++)
		{
			cin>>a[row][col];
		}
		cout<<endl;
	}
	int sc=0,ec=c-1,sr=0,er=r-1;
	while(sr<=er&&sc<=ec)
	{
		for(int i=sr;i<=er;i++)
		{
			cout<<a[i][sc]<<","<<" ";
		}
		sc++;
		for(int i=sc;i<=ec;i++)
		{
			cout<<a[er][i]<<","<<" ";
		}
		er--;
		if(sr<=er)
		{
			for(int i=er;i>=sr;i--)
			{
				cout<<a[i][ec]<<","<<" ";
			}
			ec--;
		}
		if(sc<=ec)
		{
			for(int i=ec;i>=sc;i--)
			{
				cout<<a[sr][i]<<","<<" ";
			}
			sr++;
		}
	    
	}
	cout<<"END";
	

	return 0;
}
