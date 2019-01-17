#include<iostream>
using namespace std;
int checknumber(int a[],int size,int x)
{
	if(size==0) return false;
	if(a[0]==x)
	return true;
	int value = checknumber(a+1,size-1,x);
	return value;
}
int main()
{
	int x;
	int a[]={2,56,37,98,1,9,7};
	x=8;
	int size = sizeof(a)/sizeof(a[0]);
	int ans = checknumber(a,size,x);
	cout<<ans;
	
}
