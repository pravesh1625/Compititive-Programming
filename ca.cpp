#include<bits/stdc++.h>
using namespace std;
//demo
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n;
		int long long count=0;
		cin>>n;
		int A[n];
		int B[n];
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>B[i];
		}
		sort(A,A+n);
		sort(B,B+n);
		for(int i=0;i<n;i++)
		{
			count=count + min(A[i],B[i]);
		}
		cout<<count<<endl;
	}
	
	
	return(0);
}
