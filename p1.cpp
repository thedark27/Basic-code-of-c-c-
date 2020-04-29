#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int c=0;
void subset(int k,int n) 
{ 
if (k == n+1)
 {
 for(size_t i=0; i<v.size(); ++i) 
 {
    cout << v[i] <<" "; 
}
c++;
 cout<<"\n";
 }
  else
   { 
   v.push_back(k); 
   subset(k+1,n); 
   v.pop_back();
	 subset(k+1,n);
   } 
}
int main()
{ 
int n=10;
	subset(1,n);
	cout<<"\n"<<c;
	return 0;
}
