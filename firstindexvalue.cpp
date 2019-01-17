#include<iostream>
using namespace std;
int indexvalue(int a[],int size,int x)
{
	if(size==0)
	return -1;
	if(a[0]==x)
	return 0;
	int ans=indexvalue(a+1,size-1,x);
	if(ans==-1)
	{
		return -1;
	}
	else{
		return ans+1;
	}
}
int main()
{
	int a[]={1,2,3,4,5,6};
	int x=5;
	int size = sizeof(a)/sizeof(a[0]);
	int output=indexvalue(a,size,x);
	cout<<output;
}
