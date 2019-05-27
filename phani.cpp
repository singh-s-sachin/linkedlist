#include<iostream>
using namespace std;
int main()
{
	int a[10],i;
	cout<<"enter the variables";
	for(i=0;i<10;i++)
	cin>>a[i];
	for(i=0;i<10;i++)
	if(a[i]%2==0)
		cout<<a[i];
	return 0;
}