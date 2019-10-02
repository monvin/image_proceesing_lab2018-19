#include<fstream>
#include<vector>
#include<iostream>
const int maxValue=1e9;
using namespace std;
void setinput(int n,int *A)
{
	int a=1000;
	cout<<maxValue;
	for(int i=0;i<a;i++)
		A[i]=int(maxValue);	
}
int main()
{
	int n;
	cin>>n;
	int A[n];
	setinput(n,A);
	cout<<"ha;l";
	for(int i=0;i<n;i++)
	cout<<A[i]<<" ";
	return 0;
}
