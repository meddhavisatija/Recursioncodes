#include<iostream>
using namespace std;

int sorted(int a[], int size)
{
	int ans;
	if(size==0||size==1)
	return 1;
	if(a[0]<=a[1])
	{
		ans=sorted(a+1,size-1);
	}
	else
	{
		return 0;
	}
	
	return ans;

}
int main()
{
int a[]={2, 6 , 9, 11 , 20, 25};
int size = sizeof(a)/sizeof(a[0]);
int check = sorted(a,size);
cout<<check;
}
