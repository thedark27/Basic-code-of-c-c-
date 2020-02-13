#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int a;
	cin>>a;
	int r=fact(a);
	cout<<r;
	return 0;
}
