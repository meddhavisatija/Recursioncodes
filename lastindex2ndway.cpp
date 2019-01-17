#include<iostream>
using namespace std;
int lastindex(int a[],int size,int x)
{
	if(size==0)
	return -1;
	int ans=lastindex(a+1,size-1,x);
	if(ans==-1)
	{
		if(a[0]==x)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	else
	{
	 return	ans+1;
	}
	

}
int main()
{
	int a[]={2,3,3,5,6,5,6};
	int x=5;
	int size=sizeof(a)/sizeof(a[0]);
	int output=lastindex(a,size,x);
	cout<<output;
	
}
