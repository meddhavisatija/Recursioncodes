#include<iostream>
using namespace std;
int sum(int a[],int size)
{
	if(size==0)
	return 0;
	int ans = sum(a+1,size-1);
	int out = ans+a[0];
	return out;
}
int main()
{
	int a[]={1,2,3,4,5};
	int size = sizeof(a)/sizeof(a[0]);
	int value = sum(a,size);
	cout<<value;
}
