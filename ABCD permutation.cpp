#include<iostream>
using namespace std;
void abcd(string p,int m,int n)
{
	if(m==n)
	cout<<p<<endl;
	else
	{
		for(int i=m;i<=n;i++)
		{
			int r=p[m];
			p[m]=p[i];
			p[i]=r;
		abcd(p,m+1,n);
	}
	}
}
int main()
{
	string str;
	str="ABCDE";
	int s=str.length();
	int l=0;
	abcd(str,l,s-1);
	return 0;
}
