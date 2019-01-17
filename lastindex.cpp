#include<iostream>
using namespace std;
int lastindex(int a[],int size,int x)
{
	if(size==0)
	return -1;
	if(a[size-1]==x)
	return size-1;
	int ans=lastindex(a,size-1,x);
	return ans;
	if(!x)
	return -1;

}
int main()

{
	int a[]={5,6,5,5,6};
	int x=4 ;
	int size=sizeof(a)/sizeof(a[0]);
	int output=lastindex(a,size,x);
	cout<<output;
}
