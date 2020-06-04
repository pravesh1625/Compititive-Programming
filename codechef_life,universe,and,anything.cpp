#include<bits/stdc++.h>
using namespace std;
int rec(int);
//int i;
int a;

int main()
{
	rec(1);
	while(a!=42)
	{
		cout<<a<<endl;
		rec(a);
	}
}

int rec(int p)
{	
	cin>>p;
	a=p;
	return(a);
}
