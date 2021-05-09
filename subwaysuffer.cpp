#include<iostream>
using namespace std;

int main()
{
  
int N,M;

cin>>N;
cin>>M;
int sum=0;
int point;
int init=0;
int arr[N ][M ]; 
for(int i=0;i<N;i++)
{
	for(int j=0;j<M;j++)
	{
		cin>>arr[i][j];
	}
}

for(int i=0;i<N;i++)
{
	for(int j=0;j<M;j++)
	{
		cout<<arr[i][j]<<"\t";
		
	}
	cout<<endl;
}

for(int j=0;j<M;j++)
{
	int i=0;
		if(arr[i][j]!=arr[i+1][j] && arr[i][j]!=arr[i+1][j])
		{

			if(arr[i][j]>arr[i+1][j]  &&  arr[i][j]>arr[i+2][j] )
			{
				point=1;
				sum=sum+arr[i][j];
				cout<<point<<"-";
				continue;
			}
			if(arr[i][j]<arr[i+1][j] && arr[i+1][j]>arr[i+2][j])
			{
				point=2;
				sum=sum+arr[i+1][j];
				cout<<point<<"-";
				continue;
			}
			if(arr[i][j]<arr[i+2][j] && arr[i+1][j]<arr[i+2][j])
			{
					point=3;
					sum=sum+arr[i+2][j];
					cout<<point<<"-";
					continue;
			}
		}
		else
		{
			if(point==1)
			{
				cout<<point<<"-";
				sum=sum+arr[0][j+1];
				continue;
			}	
			if(point==2)
			{
				cout<<point<<"-";
				sum=sum+arr[1][j+1];
				continue;
			}
			
			if(point==3)
			{
				cout<<point<<"-";
				sum=sum+arr[2][j+1];
				continue;
			}
		}

}

cout<<endl<<sum;

return 0;
}


